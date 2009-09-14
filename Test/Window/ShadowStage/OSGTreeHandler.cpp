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

#include "OSGTreeHandler.h"
#include "OSGShadowStage.h"
#include "OSGRenderBuffer.h"
#include "OSGTextureBuffer.h"
#include "OSGShadowStageData.h"

#include "OSGPointLight.h"
#include "OSGRenderAction.h"
#include "OSGMatrixUtility.h"

OSG_BEGIN_NAMESPACE


std::string TreeHandler::_shadow_combine_vp =
    "varying vec2 texCoord;\n"
    "\n"
    "void main(void)\n"
    "{\n"
    "    texCoord = gl_MultiTexCoord0.xy;\n"
    "    gl_Position = ftransform();\n"
    "}\n";

std::string TreeHandler::_shadow_combine_fp =
    "uniform sampler2D colorMap;\n"
    "uniform sampler2D shadowFactorMap;\n"
    "uniform float xFactor;\n"
    "uniform float yFactor;\n"
    "uniform bool hasFactorMap;\n"
    "varying vec2 texCoord;\n"
    "\n"
    "void main(void)\n"
    "{\n"
    "    vec2 tc = texCoord * vec2(xFactor, yFactor);\n"
    "    vec3 color = texture2D(colorMap, tc).rgb;\n"
    "    color *= hasFactorMap ? (1.0 - texture2D(shadowFactorMap, tc).r) : 1.0;\n"
    "    gl_FragColor = vec4(color, 1.0);\n"
    "}\n";




TreeHandler::TreeHandler(ShadowStage     *pSource,
                         ShadowStageData *pData) :
     Inherited            (                      ),

    _uiMode               (ShadowStage::NO_SHADOW),
    _uiMapSize            (0                     ),
    _bShadowMapsConfigured(false                 ),
    _activeFactorMap      (1                     ),

    _width                (1                     ),
    _height               (1                     ),

    _maxPLMapSize         (0                     ),
    _PLMapSize            (1                     ),
    _maxTexSize           (0                     ),

    _shadowVP             (pSource               ),
    _pStageData           (pData                 ),

    _colorMapO            (NULL                  ),
    _shadowFactorMapO     (NULL                  ),
    _shadowFactorMap2O    (NULL                  ),

    _colorMapImage        (NULL                  ),
    _shadowFactorMapImage (NULL                  ),
    _shadowFactorMapImage2(NULL                  ),

    _pSceneFBO            (NULL                  ),

    _pClearBackground     (NULL                  ),

    _unlitMat             (NULL                  ),

    _combineSHL           (NULL                  ),
    _combineDepth         (NULL                  ),
    _combineCmat          (NULL                  ),

    _aCubeTrans           (                      )
{
    GLint   max_tex_size = 0;

    glGetIntegerv(GL_MAX_TEXTURE_SIZE, &max_tex_size);

    _maxTexSize   = max_tex_size;
    _maxPLMapSize = _maxTexSize / 4;

    _unlitMat = SimpleMaterial::createLocal();

    _unlitMat->setLit(false);

    _pClearBackground = SolidBackground::createLocal();


    _aCubeTrans[0] = Matrix(1,  0,  0, 0,
                            0, -1,  0, 0,
                            0,  0, -1, 0,
                            0,  0,  0, 1);

    _aCubeTrans[1] = Matrix(1, 0, 0, 0,
                            0, 1, 0, 0,
                            0, 0, 1, 0,
                            0, 0, 0, 1);

    _aCubeTrans[2] = Matrix(1,  0, 0, 0,
                            0,  0, 1, 0,
                            0, -1, 0, 0,
                            0,  0, 0, 1);

    _aCubeTrans[3] = Matrix(1, 0,  0, 0,
                            0, 0, -1, 0,
                            0, 1,  0, 0,
                            0, 0,  0, 1);

    _aCubeTrans[4] = Matrix( 0, 0, 1, 0,
                             0, 1, 0, 0,
                            -1, 0, 0, 0,
                             0, 0, 0, 1);

    _aCubeTrans[5] = Matrix(0, 0, -1, 0,
                            0, 1,  0, 0,
                            1, 0,  0, 0,
                            0, 0,  0, 1);

    //Prepare Color Map grabbing
    _colorMapO     = TextureObjChunk::createLocal();
    _colorMapImage = Image          ::createLocal();

    _colorMapO->setImage         (_colorMapImage);
    _colorMapO->setInternalFormat(GL_RGB);
    _colorMapO->setExternalFormat(GL_RGB);
    _colorMapO->setMinFilter     (GL_NEAREST);
    _colorMapO->setMagFilter     (GL_NEAREST);
    _colorMapO->setWrapS         (GL_REPEAT);
    _colorMapO->setWrapT         (GL_REPEAT);
    _colorMapO->setTarget        (GL_TEXTURE_2D);

    //Prepare Shadow Factor Map grabbing
    _shadowFactorMapO     = TextureObjChunk::createLocal();
    _shadowFactorMapImage = Image          ::createLocal();

    _shadowFactorMapO->setImage         (_shadowFactorMapImage);
    _shadowFactorMapO->setInternalFormat(GL_RGB);
    _shadowFactorMapO->setExternalFormat(GL_RGB);
    _shadowFactorMapO->setMinFilter     (GL_LINEAR);
    _shadowFactorMapO->setMagFilter     (GL_LINEAR);
    _shadowFactorMapO->setWrapS         (GL_REPEAT);
    _shadowFactorMapO->setWrapT         (GL_REPEAT);
    _shadowFactorMapO->setTarget        (GL_TEXTURE_2D);

    //SHL Chunk 2
    _combineSHL = SHLChunk::createLocal();
    _combineSHL->setVertexProgram  (_shadow_combine_vp);
    _combineSHL->setFragmentProgram(_shadow_combine_fp);

    _combineDepth = DepthChunk::createLocal();
    _combineDepth->setReadOnly(true);

    //Combine Shader
    _combineCmat = ChunkMaterial::createLocal();
    _combineCmat->addChunk(_combineSHL);
    _combineCmat->addChunk(_colorMapO);
    _combineCmat->addChunk(_shadowFactorMapO);
    _combineCmat->addChunk(_combineDepth);
}


TreeHandler::~TreeHandler(void)
{
    _shadowVP             = NULL;
    _pStageData           = NULL;
 
    _colorMapO            = NULL;
    _shadowFactorMapO     = NULL;
    _shadowFactorMap2O    = NULL;
 
    _colorMapImage         = NULL;
    _shadowFactorMapImage  = NULL;
    _shadowFactorMapImage2 = NULL;

    _pSceneFBO             = NULL;

    _pClearBackground      = NULL;

    _unlitMat              = NULL;

    _combineSHL            = NULL;
    _combineDepth          = NULL;
    _combineCmat           = NULL;
}








bool TreeHandler::initSceneFBO(DrawEnv *pEnv,
                               bool     bHaveTwoFactorMaps)
{
    Int32   width  = pEnv->getPixelWidth();
    Int32   height = pEnv->getPixelHeight();

    if(width <= 0 || height <= 0)
        return false;

#ifdef MAPS_IN_STAGE
    if(_pSceneFBO != NULL)
        return true;
#endif

    Window *win = pEnv->getWindow();

    _width  = pEnv->getPixelWidth();
    _height = pEnv->getPixelHeight();


    _colorMapImage->set        (GL_RGB, 
                                _width, _height, 1, 
                                1, 1, 0.f,
                                NULL,
                                Image::OSG_UINT8_IMAGEDATA,
                                false);
        
    _shadowFactorMapImage->set (GL_RGB, 
                                _width, _height, 1, 
                                1, 1, 0.f,
                                NULL,
                                Image::OSG_UINT8_IMAGEDATA,
                                false);
    
    if(bHaveTwoFactorMaps == true)
    {
        _shadowFactorMapImage2->set( GL_RGB, 
                                    _width, _height, 1, 
                                     1, 1, 0.f,
                                     NULL,
                                     Image::OSG_UINT8_IMAGEDATA,
                                     false);
    }

    _pSceneFBO = FrameBufferObject::createLocal();
    
    _pSceneFBO->setSize(_width, _height);
        

    RenderBufferUnrecPtr pDepthRB = RenderBuffer::createLocal();
        
    pDepthRB->setInternalFormat(GL_DEPTH_COMPONENT24);


    TextureBufferUnrecPtr pTexBuffer = TextureBuffer::createLocal();

    pTexBuffer->setTexture(_colorMapO);

    _pSceneFBO->setColorAttachment(pTexBuffer, 0);


    pTexBuffer = TextureBuffer::createLocal();

    pTexBuffer->setTexture(_shadowFactorMapO);

    _pSceneFBO->setColorAttachment(pTexBuffer, 1);


    if(bHaveTwoFactorMaps == true)
    {
        pTexBuffer = TextureBuffer::createLocal();

        pTexBuffer->setTexture(_shadowFactorMap2O);

        _pSceneFBO->setColorAttachment(pTexBuffer, 2);
    }

    _pSceneFBO->setDepthAttachment(pDepthRB);


    commitChanges();

    return true;
}

void TreeHandler::updateSceneFBOSize(DrawEnv *pEnv,
                                     bool     bHaveTwoFactorMaps)
{
    _width  = pEnv->getPixelWidth();
    _height = pEnv->getPixelHeight();


    _colorMapImage->set        (GL_RGB, 
                                _width, _height, 1, 
                                1, 1, 0.f,
                                NULL,
                                Image::OSG_UINT8_IMAGEDATA,
                                false);
        
    _shadowFactorMapImage->set (GL_RGB, 
                                _width, _height, 1, 
                                1, 1, 0.f,
                                NULL,
                                Image::OSG_UINT8_IMAGEDATA,
                                false);

    if(bHaveTwoFactorMaps == true)
    {
        _shadowFactorMapImage2->set( GL_RGB, 
                                    _width, _height, 1, 
                                     1, 1, 0.f,
                                     NULL,
                                     Image::OSG_UINT8_IMAGEDATA,
                                     false);
    }

    _pSceneFBO->setSize(_width, _height);
}


void TreeHandler::initShadowMaps(void)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();

    if(_shadowVP->_lights.size() < vShadowMaps.size())
    {
        vShadowMaps.resize(_shadowVP->_lights.size());
    }
    else
    {
        UInt32 uiLSize   = _shadowVP->_lights.size();
        UInt32 uiMapSize = _shadowVP-> getMapSize ();

        if(vShadowMaps.size() == 0) 
        {
            _uiMapSize = uiMapSize;
        }

        for(UInt32 i = vShadowMaps.size(); i < uiLSize; ++i)
        {
            if(_shadowVP->_lights[i].second->getType() != 
                                                   PointLight::getClassType())
            {
                ShadowStageData::ShadowMapElem tmpElem;

                tmpElem.pImage = Image            ::createLocal();
                tmpElem.pTexO  = TextureObjChunk  ::createLocal();
                tmpElem.pTexE  = TextureEnvChunk  ::createLocal();
                tmpElem.pFBO   = FrameBufferObject::createLocal();


                // creates a image without allocating main memory.
                tmpElem.pImage->set(Image::OSG_L_PF, 
                                    uiMapSize, uiMapSize, 1, 
                                    1, 1, 0.f, 
                                    NULL,
                                    Image::OSG_UINT8_IMAGEDATA, 
                                    false);
                


                TextureBufferUnrecPtr pDepthTex = TextureBuffer::createLocal();

                pDepthTex->setTexture(tmpElem.pTexO);

                tmpElem.pFBO->setDepthAttachment(pDepthTex);

            // Preparation of Texture be a Depth-Texture
                tmpElem.pTexO->setImage         (tmpElem.pImage);

                tmpElem.pTexO->setInternalFormat(GL_DEPTH_COMPONENT);
                tmpElem.pTexO->setExternalFormat(GL_DEPTH_COMPONENT);

                tmpElem.pTexO->setMinFilter     (GL_LINEAR);
                tmpElem.pTexO->setMagFilter     (GL_LINEAR);

                tmpElem.pTexO->setWrapS         (GL_CLAMP_TO_EDGE);
                tmpElem.pTexO->setWrapT         (GL_CLAMP_TO_EDGE);

                tmpElem.pTexO->setTarget        (GL_TEXTURE_2D);

                tmpElem.pTexE->setEnvMode       (GL_MODULATE);

                vShadowMaps.push_back(tmpElem);
            }
            else   //Light is a point light
            {
#if 0
                //TODO: Texturgr�se anpassen, je nach Bedarf

                GLint   max_texture_size;

                glGetIntegerv(GL_MAX_TEXTURE_SIZE, &max_texture_size);
                
#endif
                ShadowStageData::ShadowMapElem tmpElem;

                tmpElem.pImage = Image            ::createLocal();
                tmpElem.pTexO  = TextureObjChunk  ::createLocal();
                tmpElem.pTexE  = TextureEnvChunk  ::createLocal();
                tmpElem.pFBO   = FrameBufferObject::createLocal();

                // creates a image without allocating main memory.
                if((_uiMode == ShadowStage::STD_SHADOW_MAP         ||
                    _uiMode == ShadowStage::PERSPECTIVE_SHADOW_MAP ||
                    _uiMode == ShadowStage::DITHER_SHADOW_MAP      ||
                    _uiMode == ShadowStage::PCF_SHADOW_MAP         ))
                {
                    tmpElem.pImage->set(Image::OSG_L_PF, 
                                        uiMapSize, uiMapSize, 1,
                                        1, 1, 0.f, 
                                        NULL,
                                        Image::OSG_UINT8_IMAGEDATA, 
                                        false);
                }
                else
                {
                    tmpElem.pImage->set(Image::OSG_L_PF, 
                                        uiMapSize, uiMapSize, 1, 
                                        1, 1, 0.f, 
                                        NULL,
                                        Image::OSG_UINT8_IMAGEDATA, 
                                        false);
                }

                TextureBufferUnrecPtr pDepthTex = TextureBuffer::createLocal();

                pDepthTex->setTexture(tmpElem.pTexO);

                tmpElem.pFBO->setDepthAttachment(pDepthTex);

                // Preparation of Texture be a Depth-Texture
                tmpElem.pTexO->setImage(tmpElem.pImage);

                tmpElem.pTexO->setInternalFormat(GL_DEPTH_COMPONENT);
                tmpElem.pTexO->setExternalFormat(GL_DEPTH_COMPONENT);

                tmpElem.pTexO->setMinFilter     (GL_LINEAR);
                tmpElem.pTexO->setMagFilter     (GL_LINEAR);

                tmpElem.pTexO->setWrapS         (GL_CLAMP_TO_BORDER_ARB);
                tmpElem.pTexO->setWrapT         (GL_CLAMP_TO_BORDER_ARB);

                tmpElem.pTexE->setEnvMode       (GL_MODULATE);

                tmpElem.pTexO->setTarget        (GL_TEXTURE_2D);

                vShadowMaps.push_back(tmpElem);
            }
            
        }
    }
}

void TreeHandler::updateShadowMapSize(void)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();
 
    UInt32 uiSHMSize    =  vShadowMaps.size();
    UInt32 uiNewMapSize = _shadowVP->getMapSize();

    for(UInt32 i = 0; i < uiSHMSize; ++i)
    {
        if(vShadowMaps[i].pImage->getWidth() != uiNewMapSize)
        {
            vShadowMaps[i].pImage->set(Image::OSG_L_PF, 
                                       uiNewMapSize, uiNewMapSize, 1,
                                       1, 1, 0.f, 
                                       NULL,
                                       Image::OSG_UINT8_IMAGEDATA, 
                                       false);
        }
    }

    _uiMapSize = uiNewMapSize;
}

void TreeHandler::configureShadowMaps(void)
{
    ShadowStageData::ShadowMapStore &vShadowMaps = _pStageData->getShadowMaps();

    UInt32 uiSHMSize = vShadowMaps.size();

    UInt32 uiMapSize = _shadowVP-> getMapSize ();

    for(UInt32 i = 0; i < uiSHMSize; ++i)
    {
        vShadowMaps[i].pTexO->setCompareMode(GL_COMPARE_R_TO_TEXTURE_ARB);
        vShadowMaps[i].pTexO->setCompareFunc(GL_LEQUAL                  );
        vShadowMaps[i].pTexO->setDepthMode  (GL_LUMINANCE               );

        vShadowMaps[i].pTexO->setMinFilter  (GL_LINEAR);
        vShadowMaps[i].pTexO->setMagFilter  (GL_LINEAR);

        if(vShadowMaps[i].uiType == 
                                ShadowStageData::ShadowMapElem::ColorShadowMap)
        {
            vShadowMaps[i].pTexO->setInternalFormat(GL_DEPTH_COMPONENT);
            vShadowMaps[i].pTexO->setExternalFormat(GL_DEPTH_COMPONENT);

            if(_shadowVP->_lights[i].second->getType() != 
                                                   PointLight::getClassType())
            {
                vShadowMaps[i].pTexO->setWrapS(GL_CLAMP_TO_EDGE);
                vShadowMaps[i].pTexO->setWrapT(GL_CLAMP_TO_EDGE);
            }
            else
            {
                vShadowMaps[i].pTexO->setWrapS(GL_CLAMP_TO_BORDER_ARB);
                vShadowMaps[i].pTexO->setWrapT(GL_CLAMP_TO_BORDER_ARB);
            }

            vShadowMaps[i].pTexO->setAnisotropy(1.0);

            vShadowMaps[i].pImage->set(Image::OSG_L_PF, 
                                       uiMapSize, uiMapSize, 1, 
                                       1, 1, 0.f, 
                                       NULL,
                                       Image::OSG_UINT8_IMAGEDATA, 
                                       false);

            vShadowMaps[i].pFBO->setDepthAttachment(
                vShadowMaps[i].pFBO->getColorAttachments(0));

            vShadowMaps[i].pFBO->setColorAttachment(NULL, 0);

            vShadowMaps[i].uiType = 
                                ShadowStageData::ShadowMapElem::DepthShadowMap;
        }
    }

    _bShadowMapsConfigured = true;
}


void TreeHandler::setupDrawCombineMap2(Action  *pAction)
{
    RenderAction *a = dynamic_cast<RenderAction *>(pAction);
    
    a->pushPartition((RenderPartition::CopyWindow      |
                      RenderPartition::CopyViewportSize),
                     RenderPartition::SimpleCallback);
    {
        RenderPartition *pPart  = a->getActivePartition();
        Matrix m, t;
        
        m.setIdentity();
        t.setIdentity();
        
        MatrixOrthogonal( m,
                          0.f, 1.f,
                          0.f, 1.f,
                         -1.f, 1.f);
        
        pPart->setupProjection(m, t);
        
        RenderPartition::SimpleDrawCallback f;
        
        f = boost::bind(&TreeHandler::doDrawCombineMap2, this, _1);
        
        pPart->dropFunctor(f);
    }
    a->popPartition();
}

void TreeHandler::doDrawCombineMap2(DrawEnv *pEnv)
{
    Real32  xFactor = 1.0f;
    Real32  yFactor = 1.0f;

    _combineCmat->clearChunks();

    _combineCmat->addChunk(_combineSHL);
    _combineCmat->addChunk(_colorMapO);

    if(_activeFactorMap == 0)
    {
        _combineCmat->addChunk(_shadowFactorMap2O);
    }
    else
    {
        _combineCmat->addChunk(_shadowFactorMapO);
    }

    _combineCmat->addChunk(_combineDepth);

    _combineSHL->addUniformVariable("colorMap",        0);
    _combineSHL->addUniformVariable("shadowFactorMap", 1);
    _combineSHL->addUniformVariable("xFactor",         Real32(xFactor));
    _combineSHL->addUniformVariable("yFactor",         Real32(yFactor));
    _combineSHL->addUniformVariable("hasFactorMap",    hasFactorMap());

    commitChanges();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glLoadIdentity();

    State *pCombineState = _combineCmat->getState();

    pEnv->activateState(pCombineState, NULL);

    glBegin(GL_QUADS);
    {
        glTexCoord2f(0.00, 0.00);
        glVertex2f  (0.00, 0.00);
        
        glTexCoord2f(1.00, 0.00);
        glVertex2f  (1.00, 0.00);
        
        glTexCoord2f(1.00, 1.00);
        glVertex2f  (1.00, 1.00);
        
        glTexCoord2f(0.00, 1.00);
        glVertex2f  (0.00, 1.00);
    }
    glEnd();

    pEnv->deactivateState();

    glPopMatrix();
}


void TreeHandler::setupDrawCombineMap1(Action  *pAction)
{
    RenderAction *a = dynamic_cast<RenderAction *>(pAction);
    
    a->pushPartition((RenderPartition::CopyWindow      |
                      RenderPartition::CopyViewportSize),
                     RenderPartition::SimpleCallback);
    {
        RenderPartition *pPart  = a->getActivePartition();
        Matrix m, t;
        
        m.setIdentity();
        t.setIdentity();
        
        MatrixOrthogonal( m,
                          0.f, 1.f,
                          0.f, 1.f,
                         -1.f, 1.f);
        
        pPart->setupProjection(m, t);
        
        RenderPartition::SimpleDrawCallback f;
        
        f = boost::bind(&TreeHandler::doDrawCombineMap1, this, _1);
        
        pPart->dropFunctor(f);
    }
    a->popPartition();
}

void TreeHandler::doDrawCombineMap1(DrawEnv *pEnv)
{
    Real32  xFactor = 1.0f;
    Real32  yFactor = 1.0f;

    _combineSHL->addUniformVariable("colorMap",        0);
    _combineSHL->addUniformVariable("shadowFactorMap", 1);
    _combineSHL->addUniformVariable("xFactor",         Real32(xFactor));
    _combineSHL->addUniformVariable("yFactor",         Real32(yFactor));
    _combineSHL->addUniformVariable("hasFactorMap",    hasFactorMap());

    commitChanges();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glLoadIdentity();

    State *pCombineState = _combineCmat->getState();

    pEnv->activateState(pCombineState, NULL);

    glBegin(GL_QUADS);
    {
        glTexCoord2f(0.00, 0.00);
        glVertex2f  (0.00, 0.00);
        
        glTexCoord2f(1.00, 0.00);
        glVertex2f  (1.00, 0.00);
        
        glTexCoord2f(1.00, 1.00);
        glVertex2f  (1.00, 1.00);
        
        glTexCoord2f(0.00, 1.00);
        glVertex2f  (0.00, 1.00);
    }
    glEnd();

    pEnv->deactivateState();

    glPopMatrix();
}

bool TreeHandler::hasFactorMap(void)
{
    for(UInt32 i = 0;i < _shadowVP->_lights.size();i++)
    {
        if (_shadowVP->_lightStates[i] != 0 &&
            (_shadowVP->_lights[i].second->getShadowIntensity() != 0.0 ||
			_shadowVP->getGlobalShadowIntensity() != 0.0))
        {
            return true;
        }
    }

    return false;
}

OSG_END_NAMESPACE
