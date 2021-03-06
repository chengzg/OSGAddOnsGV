/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class DynamicTerrain
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDYNAMICTERRAINBASE_H_
#define _OSGDYNAMICTERRAINBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGAddOnsConfig.h"
#include "OSGContribDynamicTerrainDef.h"

//#include "OSGBaseTypes.h"

#include "OSGMaterialDrawable.h" // Parent

#include "OSGSysFields.h"               // LevelSize type
#include "OSGImageFields.h"             // HeightData type
#include "OSGTextureObjChunkFields.h"   // HeightColorTexture type
#include "OSGBaseFields.h"              // CpuVertexProgram type

#include "OSGDynamicTerrainFields.h"

OSG_BEGIN_NAMESPACE


class DynamicTerrain;

//! \brief DynamicTerrain Base Class.

class OSG_CONTRIBDYNAMICTERRAIN_DLLMAPPING DynamicTerrainBase : public MaterialDrawable
{
  public:

    typedef MaterialDrawable Inherited;
    typedef MaterialDrawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DynamicTerrain);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LevelSizeFieldId = Inherited::NextFieldId,
        HeightDataFieldId = LevelSizeFieldId + 1,
        HeightDataScaleFieldId = HeightDataFieldId + 1,
        HeightDataOffsetFieldId = HeightDataScaleFieldId + 1,
        SampleDistanceFieldId = HeightDataOffsetFieldId + 1,
        TextureDataFieldId = SampleDistanceFieldId + 1,
        HeightColorTextureFieldId = TextureDataFieldId + 1,
        SampleUpdateBudgetFieldId = HeightColorTextureFieldId + 1,
        EnableFrustumCullingFieldId = SampleUpdateBudgetFieldId + 1,
        UseGpuRendererFieldId = EnableFrustumCullingFieldId + 1,
        UseVboExtensionFieldId = UseGpuRendererFieldId + 1,
        EnableSmoothTransitionFieldId = UseVboExtensionFieldId + 1,
        ShowBoundingBoxesFieldId = EnableSmoothTransitionFieldId + 1,
        ShowTransitionRegionsFieldId = ShowBoundingBoxesFieldId + 1,
        DisableUpdateFieldId = ShowTransitionRegionsFieldId + 1,
        CpuVertexProgramFieldId = DisableUpdateFieldId + 1,
        CpuFragmentProgramFieldId = CpuVertexProgramFieldId + 1,
        NextFieldId = CpuFragmentProgramFieldId + 1
    };

    static const OSG::BitVector LevelSizeFieldMask =
        (TypeTraits<BitVector>::One << LevelSizeFieldId);
    static const OSG::BitVector HeightDataFieldMask =
        (TypeTraits<BitVector>::One << HeightDataFieldId);
    static const OSG::BitVector HeightDataScaleFieldMask =
        (TypeTraits<BitVector>::One << HeightDataScaleFieldId);
    static const OSG::BitVector HeightDataOffsetFieldMask =
        (TypeTraits<BitVector>::One << HeightDataOffsetFieldId);
    static const OSG::BitVector SampleDistanceFieldMask =
        (TypeTraits<BitVector>::One << SampleDistanceFieldId);
    static const OSG::BitVector TextureDataFieldMask =
        (TypeTraits<BitVector>::One << TextureDataFieldId);
    static const OSG::BitVector HeightColorTextureFieldMask =
        (TypeTraits<BitVector>::One << HeightColorTextureFieldId);
    static const OSG::BitVector SampleUpdateBudgetFieldMask =
        (TypeTraits<BitVector>::One << SampleUpdateBudgetFieldId);
    static const OSG::BitVector EnableFrustumCullingFieldMask =
        (TypeTraits<BitVector>::One << EnableFrustumCullingFieldId);
    static const OSG::BitVector UseGpuRendererFieldMask =
        (TypeTraits<BitVector>::One << UseGpuRendererFieldId);
    static const OSG::BitVector UseVboExtensionFieldMask =
        (TypeTraits<BitVector>::One << UseVboExtensionFieldId);
    static const OSG::BitVector EnableSmoothTransitionFieldMask =
        (TypeTraits<BitVector>::One << EnableSmoothTransitionFieldId);
    static const OSG::BitVector ShowBoundingBoxesFieldMask =
        (TypeTraits<BitVector>::One << ShowBoundingBoxesFieldId);
    static const OSG::BitVector ShowTransitionRegionsFieldMask =
        (TypeTraits<BitVector>::One << ShowTransitionRegionsFieldId);
    static const OSG::BitVector DisableUpdateFieldMask =
        (TypeTraits<BitVector>::One << DisableUpdateFieldId);
    static const OSG::BitVector CpuVertexProgramFieldMask =
        (TypeTraits<BitVector>::One << CpuVertexProgramFieldId);
    static const OSG::BitVector CpuFragmentProgramFieldMask =
        (TypeTraits<BitVector>::One << CpuFragmentProgramFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFInt32           SFLevelSizeType;
    typedef SFUnrecImagePtr   SFHeightDataType;
    typedef SFReal32          SFHeightDataScaleType;
    typedef SFReal32          SFHeightDataOffsetType;
    typedef SFReal32          SFSampleDistanceType;
    typedef SFUnrecImagePtr   SFTextureDataType;
    typedef SFUnrecTextureObjChunkPtr SFHeightColorTextureType;
    typedef SFInt32           SFSampleUpdateBudgetType;
    typedef SFBool            SFEnableFrustumCullingType;
    typedef SFBool            SFUseGpuRendererType;
    typedef SFBool            SFUseVboExtensionType;
    typedef SFBool            SFEnableSmoothTransitionType;
    typedef SFBool            SFShowBoundingBoxesType;
    typedef SFBool            SFShowTransitionRegionsType;
    typedef SFBool            SFDisableUpdateType;
    typedef SFString          SFCpuVertexProgramType;
    typedef SFString          SFCpuFragmentProgramType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFInt32             *editSFLevelSize      (void);
            const SFInt32             *getSFLevelSize       (void) const;
            const SFUnrecImagePtr     *getSFHeightData     (void) const;
                  SFUnrecImagePtr     *editSFHeightData     (void);

                  SFReal32            *editSFHeightDataScale(void);
            const SFReal32            *getSFHeightDataScale (void) const;

                  SFReal32            *editSFHeightDataOffset(void);
            const SFReal32            *getSFHeightDataOffset (void) const;

                  SFReal32            *editSFSampleDistance (void);
            const SFReal32            *getSFSampleDistance  (void) const;
            const SFUnrecImagePtr     *getSFTextureData    (void) const;
                  SFUnrecImagePtr     *editSFTextureData    (void);
            const SFUnrecTextureObjChunkPtr *getSFHeightColorTexture(void) const;
                  SFUnrecTextureObjChunkPtr *editSFHeightColorTexture(void);

                  SFInt32             *editSFSampleUpdateBudget(void);
            const SFInt32             *getSFSampleUpdateBudget (void) const;

                  SFBool              *editSFEnableFrustumCulling(void);
            const SFBool              *getSFEnableFrustumCulling (void) const;

                  SFBool              *editSFUseGpuRenderer (void);
            const SFBool              *getSFUseGpuRenderer  (void) const;

                  SFBool              *editSFUseVboExtension(void);
            const SFBool              *getSFUseVboExtension (void) const;

                  SFBool              *editSFEnableSmoothTransition(void);
            const SFBool              *getSFEnableSmoothTransition (void) const;

                  SFBool              *editSFShowBoundingBoxes(void);
            const SFBool              *getSFShowBoundingBoxes (void) const;

                  SFBool              *editSFShowTransitionRegions(void);
            const SFBool              *getSFShowTransitionRegions (void) const;

                  SFBool              *editSFDisableUpdate  (void);
            const SFBool              *getSFDisableUpdate   (void) const;

                  SFString            *editSFCpuVertexProgram(void);
            const SFString            *getSFCpuVertexProgram (void) const;

                  SFString            *editSFCpuFragmentProgram(void);
            const SFString            *getSFCpuFragmentProgram (void) const;


                  Int32               &editLevelSize      (void);
                  Int32                getLevelSize       (void) const;

                  Image * getHeightData     (void) const;

                  Real32              &editHeightDataScale(void);
                  Real32               getHeightDataScale (void) const;

                  Real32              &editHeightDataOffset(void);
                  Real32               getHeightDataOffset (void) const;

                  Real32              &editSampleDistance (void);
                  Real32               getSampleDistance  (void) const;

                  Image * getTextureData    (void) const;

                  TextureObjChunk * getHeightColorTexture(void) const;

                  Int32               &editSampleUpdateBudget(void);
                  Int32                getSampleUpdateBudget (void) const;

                  bool                &editEnableFrustumCulling(void);
                  bool                 getEnableFrustumCulling (void) const;

                  bool                &editUseGpuRenderer (void);
                  bool                 getUseGpuRenderer  (void) const;

                  bool                &editUseVboExtension(void);
                  bool                 getUseVboExtension (void) const;

                  bool                &editEnableSmoothTransition(void);
                  bool                 getEnableSmoothTransition (void) const;

                  bool                &editShowBoundingBoxes(void);
                  bool                 getShowBoundingBoxes (void) const;

                  bool                &editShowTransitionRegions(void);
                  bool                 getShowTransitionRegions (void) const;

                  bool                &editDisableUpdate  (void);
                  bool                 getDisableUpdate   (void) const;

                  std::string         &editCpuVertexProgram(void);
            const std::string         &getCpuVertexProgram (void) const;

                  std::string         &editCpuFragmentProgram(void);
            const std::string         &getCpuFragmentProgram (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLevelSize      (const Int32 value);
            void setHeightData     (Image * const value);
            void setHeightDataScale(const Real32 value);
            void setHeightDataOffset(const Real32 value);
            void setSampleDistance (const Real32 value);
            void setTextureData    (Image * const value);
            void setHeightColorTexture(TextureObjChunk * const value);
            void setSampleUpdateBudget(const Int32 value);
            void setEnableFrustumCulling(const bool value);
            void setUseGpuRenderer (const bool value);
            void setUseVboExtension(const bool value);
            void setEnableSmoothTransition(const bool value);
            void setShowBoundingBoxes(const bool value);
            void setShowTransitionRegions(const bool value);
            void setDisableUpdate  (const bool value);
            void setCpuVertexProgram(const std::string &value);
            void setCpuFragmentProgram(const std::string &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  DynamicTerrainTransitPtr  create          (void);
    static  DynamicTerrain           *createEmpty     (void);

    static  DynamicTerrainTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DynamicTerrain            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DynamicTerrainTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFInt32           _sfLevelSize;
    SFUnrecImagePtr   _sfHeightData;
    SFReal32          _sfHeightDataScale;
    SFReal32          _sfHeightDataOffset;
    SFReal32          _sfSampleDistance;
    SFUnrecImagePtr   _sfTextureData;
    SFUnrecTextureObjChunkPtr _sfHeightColorTexture;
    SFInt32           _sfSampleUpdateBudget;
    SFBool            _sfEnableFrustumCulling;
    SFBool            _sfUseGpuRenderer;
    SFBool            _sfUseVboExtension;
    SFBool            _sfEnableSmoothTransition;
    SFBool            _sfShowBoundingBoxes;
    SFBool            _sfShowTransitionRegions;
    SFBool            _sfDisableUpdate;
    SFString          _sfCpuVertexProgram;
    SFString          _sfCpuFragmentProgram;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DynamicTerrainBase(void);
    DynamicTerrainBase(const DynamicTerrainBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DynamicTerrainBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const DynamicTerrain *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLevelSize       (void) const;
    EditFieldHandlePtr editHandleLevelSize      (void);
    GetFieldHandlePtr  getHandleHeightData      (void) const;
    EditFieldHandlePtr editHandleHeightData     (void);
    GetFieldHandlePtr  getHandleHeightDataScale (void) const;
    EditFieldHandlePtr editHandleHeightDataScale(void);
    GetFieldHandlePtr  getHandleHeightDataOffset (void) const;
    EditFieldHandlePtr editHandleHeightDataOffset(void);
    GetFieldHandlePtr  getHandleSampleDistance  (void) const;
    EditFieldHandlePtr editHandleSampleDistance (void);
    GetFieldHandlePtr  getHandleTextureData     (void) const;
    EditFieldHandlePtr editHandleTextureData    (void);
    GetFieldHandlePtr  getHandleHeightColorTexture (void) const;
    EditFieldHandlePtr editHandleHeightColorTexture(void);
    GetFieldHandlePtr  getHandleSampleUpdateBudget (void) const;
    EditFieldHandlePtr editHandleSampleUpdateBudget(void);
    GetFieldHandlePtr  getHandleEnableFrustumCulling (void) const;
    EditFieldHandlePtr editHandleEnableFrustumCulling(void);
    GetFieldHandlePtr  getHandleUseGpuRenderer  (void) const;
    EditFieldHandlePtr editHandleUseGpuRenderer (void);
    GetFieldHandlePtr  getHandleUseVboExtension (void) const;
    EditFieldHandlePtr editHandleUseVboExtension(void);
    GetFieldHandlePtr  getHandleEnableSmoothTransition (void) const;
    EditFieldHandlePtr editHandleEnableSmoothTransition(void);
    GetFieldHandlePtr  getHandleShowBoundingBoxes (void) const;
    EditFieldHandlePtr editHandleShowBoundingBoxes(void);
    GetFieldHandlePtr  getHandleShowTransitionRegions (void) const;
    EditFieldHandlePtr editHandleShowTransitionRegions(void);
    GetFieldHandlePtr  getHandleDisableUpdate   (void) const;
    EditFieldHandlePtr editHandleDisableUpdate  (void);
    GetFieldHandlePtr  getHandleCpuVertexProgram (void) const;
    EditFieldHandlePtr editHandleCpuVertexProgram(void);
    GetFieldHandlePtr  getHandleCpuFragmentProgram (void) const;
    EditFieldHandlePtr editHandleCpuFragmentProgram(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      DynamicTerrainBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DynamicTerrainBase &source);
};

typedef DynamicTerrainBase *DynamicTerrainBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDYNAMICTERRAINBASE_H_ */
