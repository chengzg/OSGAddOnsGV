/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#define GL_GLEXT_PROTOTYPES

#include <stdlib.h>
#include <stdio.h>

#include "OSGVarianceShadowMapHandler.h"
#include "OSGRenderAction.h"
#include "OSGShadowStage.h"
#include "OSGShadowStageData.h"
#include "OSGSpotLight.h"
#include "OSGRenderBuffer.h"
#include "OSGTextureBuffer.h"

OSG_BEGIN_NAMESPACE

#include "ShaderCode/OSGVarianceShadowMapShaderCode.cinl"

VarianceShadowMapHandler::VarianceShadowMapHandler(ShadowStage     *pSource,
                                                   ShadowStageData *pData  ) :
     Inherited     (pSource, 
                    pData  ),
    _pClearSMapBack(NULL   ),
    _shadowSHL     (NULL   ),
    _depthSHL      (NULL   ),
    _firstRun      (1      )
{
    _uiMode = ShadowStage::VARIANCE_SHADOW_MAP;

    //SHL Chunk 1

    _shadowSHL = SHLChunk::createLocal();
    _shadowSHL->setVertexProgram  (_variance_vp);
    _shadowSHL->setFragmentProgram(_variance_fp);


    //SHL Depth
    _depthSHL = SHLChunk::createLocal();
    _depthSHL->setVertexProgram  (_depth_vp);
    _depthSHL->setFragmentProgram(_depth_fp);

    _pClearSMapBack = SolidBackground::createLocal();
    
    _pClearSMapBack->setColor(Color3f(1.f, 1.f, 1.f));
}

VarianceShadowMapHandler::~VarianceShadowMapHandler(void)
{
    _pClearSMapBack  = NULL;
    _shadowSHL       = NULL;
    _depthSHL        = NULL;

    _vShadowCmat  .clear();
    _vShadowSHLVar.clear();

    _vDepthCmat   .clear();
    _vDepthSHLVar .clear();
}


void VarianceShadowMapHandler::createShadowMapsFBO(DrawEnv      *pEnv)
{
    UInt32  mSize = _shadowVP->getMapSize();

    if(mSize > 2048)
        mSize = 2048;

    //------Setting up Window to fit size of ShadowMap----------------


    // disable all lights more speed
    std::vector<bool> lightStates;
    for(UInt32 i = 0;i < _shadowVP->_lights.size();++i)
    {
        // store old states.
        lightStates.push_back(_shadowVP->_lights[i].second->getOn());
        _shadowVP->_lights[i].second->setOn(false);
    }

    // activate exclude nodes:
    for(UInt32 i = 0;i < _shadowVP->getMFExcludeNodes()->size();++i)
    {
        Node *exnode = _shadowVP->getExcludeNodes(i);
        if(exnode != NULL)
            if(_shadowVP->_excludeNodeActive[i])
                exnode->setTravMask(0);
    }

    RenderAction *a = dynamic_cast<RenderAction *>(pEnv->getAction());

    UInt32 uiActiveLightCount = 0;

    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();

    for(UInt32 i = 0;i < _shadowVP->_lights.size();++i)
    {
        if(_shadowVP->_lightStates[i] != 0)
        {
            if(_shadowVP->getGlobalShadowIntensity() != 0.0 ||
               _shadowVP->_lights[i].second->getShadowIntensity() != 0.0)
            {

                GLenum  *buffers = NULL;
                buffers = new GLenum[1];
                buffers[0] = GL_COLOR_ATTACHMENT0_EXT;

                Pnt3f   lPos;
                bool    isDirLight;
                Real32  sceneDiagLength;

                if(_shadowVP->_lights[i].second->getType() == 
                                                 PointLight::getClassType())
                {
                    PointLight *tmpPoint;
                    tmpPoint = dynamic_cast<PointLight *>(
                        _shadowVP->_lights[i].second.get());

                    lPos = tmpPoint->getPosition();

                    if(tmpPoint->getBeacon() != NULL)
                    {
                        Matrix  m = tmpPoint->getBeacon()->getToWorld();
                        m.mult(lPos, lPos);
                    }
                    isDirLight = false;

                    Pnt3f           center;
                    _shadowVP->getLightRoot(i)->getVolume().getCenter(center);

                    Vec3f           dir = lPos - center;
                    Real32          dirLength = dir.length();

                    Vec3f           diff =
                        (_shadowVP->getLightRoot(i)->getVolume().getMax() -
                         center);
                    Real32          diffLength = diff.length();

                    sceneDiagLength = dirLength + diffLength;
                }

                else if(_shadowVP->_lights[i].second->getType() ==
                                                    SpotLight::getClassType())
                {
                    SpotLight *tmpSpot;
                    tmpSpot = dynamic_cast<SpotLight *>(
                        _shadowVP->_lights[i].second.get());

                    lPos = tmpSpot->getPosition();
                    if(tmpSpot->getBeacon() != NULL)
                    {
                        Matrix  m = tmpSpot->getBeacon()->getToWorld();
                        m.mult(lPos, lPos);
                    }
                    isDirLight = false;
                    Pnt3f           center;
                    _shadowVP->getLightRoot(i)->getVolume().getCenter(center);

                    Vec3f           dir = lPos - center;
                    Real32          dirLength = dir.length();

                    Vec3f           diff =
                        (_shadowVP->getLightRoot(i)->getVolume().getMax() -
                         center);
                    Real32          diffLength = diff.length();

                    sceneDiagLength = dirLength + diffLength;
                }

                else
                {
                    isDirLight = true;
                    sceneDiagLength = 1.0;
                }

                if(_vDepthCmat.size() == uiActiveLightCount)
                {
                    _vDepthCmat.push_back(ChunkMaterial::createLocal());
                }
        
                OSG_ASSERT(uiActiveLightCount < _vDepthCmat.size());

                if(_vDepthSHLVar.size() == uiActiveLightCount)
                {
                    _vDepthSHLVar.push_back(SHLVariableChunk::createLocal());
                    
                    _vDepthSHLVar[uiActiveLightCount]->setSHLChunk(_depthSHL);
                }

                OSG_ASSERT(uiActiveLightCount < _vDepthSHLVar.size());

                _vDepthSHLVar[uiActiveLightCount]->addUniformVariable(
                    "sceneDiagLength",
                    Real32(sceneDiagLength));

                _vDepthSHLVar[uiActiveLightCount]->addUniformVariable(
                    "isDirLight", bool(isDirLight));

                
                _vDepthCmat[uiActiveLightCount]->clearChunks();
                _vDepthCmat[uiActiveLightCount]->addChunk(_depthSHL);
                _vDepthCmat[uiActiveLightCount]->addChunk(
                    _vDepthSHLVar[uiActiveLightCount]);

                commitChanges();

                a->pushPartition();
                {
                    RenderPartition   *pPart    = a->getActivePartition();
                    
                    pPart->setRenderTarget(vShadowMaps[i].pFBO);

                    pPart->setDrawBuffer  (*buffers                      );

                    pPart->setWindow  (a->getWindow());

                    pPart->calcViewportDimension(0.f,
                                                 0.f,
                                                 mSize - 1,
                                                 mSize - 1,
                                                 
                                                 mSize,
                                                 mSize);


                    RenderFunctor f = 
                        boost::bind(&VarianceShadowMapHandler::genMipMapCB,
                                    this,
                                    _1,
                                    i);

                    pPart->addPreRenderCallback(f);

                    Matrix m, t;
                    
                    // set the projection
                    _shadowVP->_lightCameras[i]->getProjection          (
                        m, 
                        pPart->getViewportWidth (), 
                        pPart->getViewportHeight());
                    
                    _shadowVP->_lightCameras[i]->getProjectionTranslation(
                        t, 
                        pPart->getViewportWidth (), 
                        pPart->getViewportHeight());
                    
                    pPart->setupProjection(m, t);
                    
                    _shadowVP->_lightCameras[i]->getViewing(
                        m, 
                        pPart->getViewportWidth (),
                        pPart->getViewportHeight());
                    
                    
                    pPart->setupViewing(m);
                    
                    pPart->setNear     (
                        _shadowVP->_lightCameras[i]->getNear());
                    pPart->setFar      (
                        _shadowVP->_lightCameras[i]->getFar ());
                    
                    pPart->calcFrustum();
                    
                    pPart->setBackground(_pClearSMapBack);
                    
                    Node *light  = _shadowVP->_lights[i].first;
                    Node *parent =  light->getParent();
                    
                    if(parent != NULL)
                    {
                        a->pushMatrix(parent->getToWorld());
                    }
                    
                    
                    a->overrideMaterial(_vDepthCmat[uiActiveLightCount], 
                                         a->getActNode());
                    a->recurse(light);
                    a->overrideMaterial( NULL,       
                                         a->getActNode());
                    
                    if(parent != NULL)
                    {
                        a->popMatrix();
                    }
                }
                a->popPartition();

                ++uiActiveLightCount;
            }
        }
    }

    //-------Restoring old states of Window and Viewport----------

    // enable all lights.
    for(UInt32 i = 0;i < _shadowVP->_lights.size();++i)
    {
        // restore old states.
        _shadowVP->_lights[i].second->setOn(lightStates[i]);
    }

    // activate exclude nodes:
    for(UInt32 i = 0;i < _shadowVP->getMFExcludeNodes()->size();++i)
    {
        Node *exnode = _shadowVP->getExcludeNodes(i);
        if(exnode != NULL)
            if(_shadowVP->_excludeNodeActive[i])
                exnode->setTravMask(TypeTraits<UInt32>::BitsSet);
    }
}

void VarianceShadowMapHandler::genMipMapCB(DrawEnv *pEnv,
                                           UInt32   uiLightIdx)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();

    glBindTexture(GL_TEXTURE_2D,
                  pEnv->getWindow()->getGLObjectId(
                      vShadowMaps[uiLightIdx].pTexO->getGLId()));

    glGenerateMipmapEXT(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, 0);
}


void VarianceShadowMapHandler::createColorMapFBO(DrawEnv *pEnv)
{
    RenderAction *a = dynamic_cast<RenderAction *>(pEnv->getAction());

    a->pushPartition((RenderPartition::CopyWindow      |
                      RenderPartition::CopyViewing     |
                      RenderPartition::CopyProjection  |
                      RenderPartition::CopyFrustum     |
                      RenderPartition::CopyNearFar     |
                      RenderPartition::CopyViewportSize),
                     RenderPartition::StateSorting);
    {
        RenderPartition *pPart = a->getActivePartition();

        pPart->setRenderTarget(_pSceneFBO);
        pPart->setDrawBuffer  (GL_COLOR_ATTACHMENT0_EXT);

        Node *parent = _shadowVP->getSceneRoot()->getParent();

        if(parent != NULL)
        {
            a->pushMatrix(parent->getToWorld());
        }
        
        pPart->setBackground(a->getBackground());

        a->recurse(_shadowVP->getSceneRoot());

        if(parent != NULL)
        {
            a->popMatrix();
        }
    }
    a->popPartition();

}


void VarianceShadowMapHandler::createShadowFactorMapFBO(
    DrawEnv      *pEnv,
    UInt32        num,
    UInt32        uiActiveLightCount)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);

    //Finde alle aktiven Lichtquellen
    Real32  activeLights = 0;

    if(_shadowVP->getGlobalShadowIntensity() != 0.0)
    {
        for(UInt32 i = 0;i < _shadowVP->_lights.size();i++)
        {
            if(_shadowVP->_lightStates[i] != 0)
                activeLights++;
        }
    }
    else
    {
        for(UInt32 i = 0;i < _shadowVP->_lights.size();i++)
        {
            if(_shadowVP->_lightStates[i] != 0 &&
               _shadowVP->_lights[i].second->getShadowIntensity() != 0.0)
                activeLights++;
        }
    }

    Real32  shadowIntensity;

    if(_shadowVP->getGlobalShadowIntensity() != 0.0)
    {
        shadowIntensity = (_shadowVP->getGlobalShadowIntensity() /
                           activeLights);
    }
    else
    {
        shadowIntensity = 
            (_shadowVP->_lights[num].second->getShadowIntensity() /
             activeLights);
    }

    if(_shadowVP->_lights[num].second->getShadowIntensity() != 0.0 ||
       _shadowVP->getGlobalShadowIntensity() != 0.0)
    {

        Matrix  LVM, LPM, CVM;
        _shadowVP->_lightCameras[num]->getViewing(LVM,
                                                  pEnv->getPixelWidth(),
                                                  pEnv->getPixelHeight());

        _shadowVP->_lightCameras[num]->getProjection(LPM,
                                                     pEnv->getPixelWidth(),
                                                     pEnv->getPixelHeight());

        CVM = pEnv->getCameraViewing();

        Matrix  iCVM = CVM;
        iCVM.invert();

        Real32  texFactor;
        if(_shadowVP->_lights[num].second->getType() == 
                                               SpotLight::getClassType() ||
           _shadowVP->_lights[num].second->getType() == 
                                               PointLight::getClassType())
        {
            texFactor = Real32(_width) / Real32(_height);
        }
        else
        {
            texFactor = 1.0;
        }

        Matrix  shadowMatrix = LPM;
        shadowMatrix.mult(LVM);
        shadowMatrix.mult(iCVM);

        Matrix  shadowMatrix2 = LVM;
        shadowMatrix2.mult(iCVM);


        Real32  xFactor = 1.0;
        Real32  yFactor = 1.0;

        Pnt3f   lPos;
        bool    isDirLight;
        Real32  sceneDiagLength;

        if(_shadowVP->_lights[num].second->getType() ==
                                                  PointLight::getClassType())
        {
            PointLight *tmpPoint;

            tmpPoint = dynamic_cast<PointLight *>(
                _shadowVP->_lights[num].second.get());

            lPos = tmpPoint->getPosition();

            if(tmpPoint->getBeacon() != NULL)
            {
                Matrix  m = tmpPoint->getBeacon()->getToWorld();
                m.mult(lPos, lPos);
            }

            isDirLight = false;
            Pnt3f           center;

            _shadowVP->getLightRoot(num)->getVolume().getCenter(center);

            Vec3f           dir = lPos - center;
            Real32          dirLength = dir.length();

            Vec3f           diff = (_shadowVP->getLightRoot(num)->getVolume
                                    ().getMax() - center);
            Real32          diffLength = diff.length();

            sceneDiagLength = dirLength + diffLength;
        }

        else if(_shadowVP->_lights[num].second->getType() == 
                                                     SpotLight::getClassType())
        {
            SpotLight *tmpSpot;
            tmpSpot = dynamic_cast<SpotLight *>(
                _shadowVP->_lights[num].second.get());

            lPos = tmpSpot->getPosition();

            if(tmpSpot->getBeacon() != NULL)
            {
                Matrix  m = tmpSpot->getBeacon()->getToWorld();
                m.mult(lPos, lPos);
            }

            isDirLight = false;
            Pnt3f           center;
            _shadowVP->getLightRoot(num)->getVolume().getCenter(center);

            Vec3f           dir = lPos - center;
            Real32          dirLength = dir.length();

            Vec3f           diff = (_shadowVP->getLightRoot(num)->getVolume
                                    ().getMax() - center);
            Real32          diffLength = diff.length();

            sceneDiagLength = dirLength + diffLength;
        }

        else
        {
            isDirLight = true;
            sceneDiagLength = 1.0;
        }


        Real32  lod;

        if(_shadowVP->getShadowSmoothness() <= 0.1999)
            lod = 0.5;
        else if(_shadowVP->getShadowSmoothness() <= 0.3999)
            lod = 1.5;
        else if(_shadowVP->getShadowSmoothness() <= 0.5999)
            lod = 2.5;
        else if(_shadowVP->getShadowSmoothness() <= 0.7999)
            lod = 3.5;
        else
            lod = 4.5;

        if(_vShadowCmat.size() == uiActiveLightCount)
        {
            _vShadowCmat.push_back(ChunkMaterial::createLocal());
        }
        
        OSG_ASSERT( uiActiveLightCount < _vShadowCmat.size());

        if(_vShadowSHLVar.size() == uiActiveLightCount)
        {
            _vShadowSHLVar.push_back(SHLVariableChunk::createLocal());

            _vShadowSHLVar[uiActiveLightCount]->setSHLChunk(_shadowSHL);
        }
        
        OSG_ASSERT(uiActiveLightCount < _vShadowSHLVar.size());

        _shadowSHL->addUniformVariable("shadowMap",    0);
        _shadowSHL->addUniformVariable("oldFactorMap", 1);

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "firstRun",
            (uiActiveLightCount == 0) ? Int32(1) : Int32(0));

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "intensity", shadowIntensity);

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "texFactor", texFactor);
        //_shadowSHL->addUniformVariable("shadowBias", 0.0075f);

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "lightPM", shadowMatrix);

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "lightPM2", shadowMatrix2);

        //_shadowSHL->addUniformVariable("shadowRange", Real32(shadowRange));
        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "xFactor", Real32(xFactor));

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "yFactor", Real32(yFactor));

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "sceneDiagLength", Real32(sceneDiagLength));

        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "Lod", Real32(lod));
        
        _vShadowSHLVar[uiActiveLightCount]->addUniformVariable(
            "isDirLight", bool(isDirLight));


        ShadowStageData::ShadowMapStore &vShadowMaps = 
            _pStageData->getShadowMaps();

        _vShadowCmat[uiActiveLightCount]->clearChunks();

        _vShadowCmat[uiActiveLightCount]->addChunk(
            _shadowSHL);

        _vShadowCmat[uiActiveLightCount]->addChunk(
            _vShadowSHLVar[uiActiveLightCount]);

        _vShadowCmat[uiActiveLightCount]->addChunk(
            vShadowMaps[num].pTexO);

        _vShadowCmat[uiActiveLightCount]->addChunk(
            vShadowMaps[num].pTexE);

        _vShadowCmat[uiActiveLightCount]->addChunk(
            _shadowFactorMapO);

        RenderAction *a = dynamic_cast<RenderAction *>(pEnv->getAction());

        a->pushPartition((RenderPartition::CopyWindow      |
                          RenderPartition::CopyViewing     |
                          RenderPartition::CopyProjection  |
                          RenderPartition::CopyFrustum     |
                          RenderPartition::CopyNearFar     |
                          RenderPartition::CopyViewportSize),
                         RenderPartition::StateSorting);
        {
            RenderPartition *pPart = a->getActivePartition();

            pPart->setRenderTarget(_pSceneFBO);
            pPart->setDrawBuffer  (GL_COLOR_ATTACHMENT1_EXT);
            
            Node *light  = _shadowVP->_lights[num].first;
            Node *parent =  light->getParent();
            
            if(parent != NULL)
            {
                a->pushMatrix(parent->getToWorld());
            }

            if(uiActiveLightCount == 0)
            {
                pPart->setBackground(_pClearBackground);
            }
                             
            commitChanges();

            a->overrideMaterial(_vShadowCmat[uiActiveLightCount], 
                                 a->getActNode());
            a->recurse(light);
            a->overrideMaterial( NULL,       
                                 a->getActNode());
            
            if(parent != NULL)
            {
                a->popMatrix();
            }
        }
        a->popPartition();

        _firstRun = 0;
    }
}

void VarianceShadowMapHandler::initShadowMaps(void)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();

    if(_shadowVP->_lights.size() < vShadowMaps.size())
    {
        vShadowMaps.resize(_shadowVP->_lights.size());
    }
    else
    {
        Real32 maximumAnistropy;

        glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &maximumAnistropy);

        maximumAnistropy = osgMin(maximumAnistropy, Real32(8.0));


        UInt32 uiLSize   = _shadowVP->_lights.size();
        UInt32 uiMapSize = _shadowVP-> getMapSize ();

        if(vShadowMaps.size() == 0) 
        {
            _uiMapSize = uiMapSize;
        }

        for(UInt32 i = vShadowMaps.size(); i < uiLSize; ++i)
        {
            ShadowStageData::ShadowMapElem tmpElem;

            tmpElem.uiType = ShadowStageData::ShadowMapElem::ColorShadowMap;

            tmpElem.pImage = Image            ::createLocal();
            tmpElem.pTexO  = TextureObjChunk  ::createLocal();
            tmpElem.pTexE  = TextureEnvChunk  ::createLocal();
            tmpElem.pFBO   = FrameBufferObject::createLocal();

            tmpElem.pImage->set(Image::OSG_RGBA_PF, 
                                uiMapSize, uiMapSize, 1,
                                1, 1, 0.f, 
                                NULL,
                                Image::OSG_FLOAT16_IMAGEDATA,
                                false);

            TextureBufferUnrecPtr pDepthTex = TextureBuffer::createLocal();

            pDepthTex->setTexture(tmpElem.pTexO);

            tmpElem.pFBO ->setColorAttachment(pDepthTex, 0);

            tmpElem.pTexO->setImage(tmpElem.pImage);

            tmpElem.pTexO->setInternalFormat(GL_RGBA16F_ARB);
            tmpElem.pTexO->setExternalFormat(GL_RGBA);

            tmpElem.pTexO->setMinFilter     (GL_LINEAR_MIPMAP_LINEAR);
            tmpElem.pTexO->setMagFilter     (GL_LINEAR              );

            tmpElem.pTexO->setAnisotropy    (maximumAnistropy       );

            tmpElem.pTexO->setWrapS         (GL_REPEAT              );
            tmpElem.pTexO->setWrapT         (GL_REPEAT              );

            tmpElem.pTexO->setTarget(GL_TEXTURE_2D);



            RenderBufferUnrecPtr pDepthRB = RenderBuffer::create();
            
            pDepthRB->setInternalFormat(GL_DEPTH_COMPONENT24);

            tmpElem.pFBO->setDepthAttachment(pDepthRB);

            tmpElem.pFBO->setSize(uiMapSize, uiMapSize);


            vShadowMaps.push_back(tmpElem);
        }
    }
}

void VarianceShadowMapHandler::updateShadowMapSize(void)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();
 
    UInt32 uiSHMSize    =  vShadowMaps.size();
    UInt32 uiNewMapSize = _shadowVP->getMapSize();

    for(UInt32 i = 0; i < uiSHMSize; ++i)
    {
        if(vShadowMaps[i].pImage->getWidth() != uiNewMapSize)
        {
            vShadowMaps[i].pImage->set(Image::OSG_RGBA_PF, 
                                       uiNewMapSize, uiNewMapSize, 1,
                                       1, 1, 0.f, 
                                       NULL,
                                       Image::OSG_FLOAT16_IMAGEDATA,
                                       false);
        }

        if(vShadowMaps[i].pFBO->getWidth() != uiNewMapSize)
        {  
            vShadowMaps[i].pFBO->setSize(uiNewMapSize, uiNewMapSize);
        }
    }

    _uiMapSize = uiNewMapSize;
}

void VarianceShadowMapHandler::configureShadowMaps(void)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();

    UInt32 uiSHMSize = vShadowMaps.size();

    UInt32 uiMapSize = _shadowVP-> getMapSize ();

    Real32 maximumAnistropy;

    glGetFloatv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT, &maximumAnistropy);

    maximumAnistropy = osgMin(maximumAnistropy, Real32(8.0));

    for(UInt32 i = 0; i < uiSHMSize; ++i)
    {
        if(vShadowMaps[i].uiType == 
                                ShadowStageData::ShadowMapElem::DepthShadowMap)
        {
            vShadowMaps[i].pTexO->setCompareMode(GL_NONE);

            vShadowMaps[i].pTexO->setMinFilter     (GL_LINEAR_MIPMAP_LINEAR);
            vShadowMaps[i].pTexO->setMagFilter     (GL_LINEAR              );

            vShadowMaps[i].pTexO->setInternalFormat(GL_RGBA16F_ARB);
            vShadowMaps[i].pTexO->setExternalFormat(GL_RGBA);

            vShadowMaps[i].pTexO->setAnisotropy    (maximumAnistropy       );

            vShadowMaps[i].pTexO->setWrapS         (GL_REPEAT              );
            vShadowMaps[i].pTexO->setWrapT         (GL_REPEAT              );


            vShadowMaps[i].pImage->set(Image::OSG_RGBA_PF, 
                                uiMapSize, uiMapSize, 1,
                                1, 1, 0.f, 
                                NULL,
                                Image::OSG_FLOAT16_IMAGEDATA,
                                false);

            vShadowMaps[i].pFBO->setColorAttachment(
                vShadowMaps[i].pFBO->getDepthAttachment(), 0);


            RenderBufferUnrecPtr pDepthRB = RenderBuffer::createLocal();
            
            pDepthRB->setInternalFormat(GL_DEPTH_COMPONENT24);

            vShadowMaps[i].pFBO->setDepthAttachment(pDepthRB);

            vShadowMaps[i].pFBO->setSize(uiMapSize, uiMapSize);

            vShadowMaps[i].uiType = 
                                ShadowStageData::ShadowMapElem::ColorShadowMap;

        }
    }

    _bShadowMapsConfigured = true;
}

void VarianceShadowMapHandler::render(DrawEnv *pEnv)
{
    glPushAttrib(GL_ENABLE_BIT);

    if(_pStageData->getShadowMaps().size() != _shadowVP->_lights.size())
    {
        fprintf(stderr, "ShadowMaps.size() != Light.size() (%d|%d)\n",
                _pStageData->getShadowMaps().size(),
                _shadowVP->_lights.size());

        initShadowMaps();
    }

    if(_bShadowMapsConfigured == false)
    {
        fprintf(stderr, "ShadowMaps not configures\n");
        configureShadowMaps();
    }

    if(_uiMapSize != _shadowVP->getMapSize())
    {
        fprintf(stderr, "MapSize changed (%d|%d)\n",
                _uiMapSize,
                _shadowVP->getMapSize());

        updateShadowMapSize();
    }

    if(_pSceneFBO == NULL)
        initSceneFBO(pEnv, false);

    if(_width  != pEnv->getPixelWidth () ||
       _height != pEnv->getPixelHeight()  )
    {
        fprintf(stderr, "SceneSize changed (%d %d|%d %d)\n",
                _width,
                _height,
                 pEnv->getPixelWidth (),
                 pEnv->getPixelHeight());

        updateSceneFBOSize(pEnv, false);
    }

    commitChanges();


    GLfloat globalAmbient[] =
    {
        0.0, 0.0, 0.0, 1.0
    };
    
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, globalAmbient);


    //Used for ShadowFactorMap
    _firstRun = 1;


    if(_shadowVP->getMapAutoUpdate() == true ||
       _shadowVP->_trigger_update    == true  )
    {
        createColorMapFBO(pEnv);


        //deactivate transparent Nodes
        for(UInt32 t = 0;t < _shadowVP->_transparent.size();++t)
        {
            _shadowVP->_transparent[t]->setTravMask(0);
        }


        createShadowMapsFBO(pEnv);


        // switch on all transparent geos
        for(UInt32 t = 0;t < _shadowVP->_transparent.size();++t)
        {
            _shadowVP->_transparent[t]->setTravMask(
                TypeTraits<UInt32>::BitsSet);
        }


        //filterShadowMaps(pEnv);
        
        bool   bClear             = true;
        UInt32 uiActiveLightCount = 0;

        for(UInt32 i = 0;i < _shadowVP->_lights.size();i++)
        {
            if(_shadowVP->_lightStates[i] != 0)
            {
                if(_shadowVP->getGlobalShadowIntensity() != 0.0 ||
                   _shadowVP->_lights[i].second->getShadowIntensity() != 0.0)
                {
                    createShadowFactorMapFBO(pEnv, 
                                             i,
                                             uiActiveLightCount);
                    
                    bClear = false;
                    ++uiActiveLightCount;
                }
            }
        }

        _shadowVP->_trigger_update = false;
    }

    setupDrawCombineMap1(pEnv->getAction());
            
    glPopAttrib();
}

OSG_END_NAMESPACE
