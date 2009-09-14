/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class RRTStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RRTStageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RRTStageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RRTStageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the RRTStage::_sfBackgroundRoot field.
inline
Node * RRTStageBase::getBackgroundRoot(void) const
{
    return _sfBackgroundRoot.getValue();
}

//! Set the value of the RRTStage::_sfBackgroundRoot field.
inline
void RRTStageBase::setBackgroundRoot(Node * const value)
{
    editSField(BackgroundRootFieldMask);

    _sfBackgroundRoot.setValue(value);
}

//! Get the value of the RRTStage::_sfTextureTarget field.
inline
TextureObjChunk * RRTStageBase::getTextureTarget(void) const
{
    return _sfTextureTarget.getValue();
}

//! Set the value of the RRTStage::_sfTextureTarget field.
inline
void RRTStageBase::setTextureTarget(TextureObjChunk * const value)
{
    editSField(TextureTargetFieldMask);

    _sfTextureTarget.setValue(value);
}
//! Get the value of the RRTStage::_sfWidth field.

inline
UInt32 &RRTStageBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the RRTStage::_sfWidth field.
inline
      UInt32  RRTStageBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the RRTStage::_sfWidth field.
inline
void RRTStageBase::setWidth(const UInt32 value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the RRTStage::_sfHeight field.

inline
UInt32 &RRTStageBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the RRTStage::_sfHeight field.
inline
      UInt32  RRTStageBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

//! Set the value of the RRTStage::_sfHeight field.
inline
void RRTStageBase::setHeight(const UInt32 value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}
//! Get the value of the RRTStage::_sfSplitThreads field.

inline
bool &RRTStageBase::editSplitThreads(void)
{
    editSField(SplitThreadsFieldMask);

    return _sfSplitThreads.getValue();
}

//! Get the value of the RRTStage::_sfSplitThreads field.
inline
      bool  RRTStageBase::getSplitThreads(void) const
{
    return _sfSplitThreads.getValue();
}

//! Set the value of the RRTStage::_sfSplitThreads field.
inline
void RRTStageBase::setSplitThreads(const bool value)
{
    editSField(SplitThreadsFieldMask);

    _sfSplitThreads.setValue(value);
}
//! Get the value of the RRTStage::_sfTiled field.

inline
bool &RRTStageBase::editTiled(void)
{
    editSField(TiledFieldMask);

    return _sfTiled.getValue();
}

//! Get the value of the RRTStage::_sfTiled field.
inline
      bool  RRTStageBase::getTiled(void) const
{
    return _sfTiled.getValue();
}

//! Set the value of the RRTStage::_sfTiled field.
inline
void RRTStageBase::setTiled(const bool value)
{
    editSField(TiledFieldMask);

    _sfTiled.setValue(value);
}

//! Get the value of the RRTStage::_sfRTCamera field.
inline
RTCameraDecorator * RRTStageBase::getRTCamera(void) const
{
    return _sfRTCamera.getValue();
}

//! Set the value of the RRTStage::_sfRTCamera field.
inline
void RRTStageBase::setRTCamera(RTCameraDecorator * const value)
{
    editSField(RTCameraFieldMask);

    _sfRTCamera.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RRTStageBase::execSync (      RRTStageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BackgroundRootFieldMask & whichField))
        _sfBackgroundRoot.syncWith(pFrom->_sfBackgroundRoot);

    if(FieldBits::NoField != (TextureTargetFieldMask & whichField))
        _sfTextureTarget.syncWith(pFrom->_sfTextureTarget);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);

    if(FieldBits::NoField != (SplitThreadsFieldMask & whichField))
        _sfSplitThreads.syncWith(pFrom->_sfSplitThreads);

    if(FieldBits::NoField != (TiledFieldMask & whichField))
        _sfTiled.syncWith(pFrom->_sfTiled);

    if(FieldBits::NoField != (RTCameraFieldMask & whichField))
        _sfRTCamera.syncWith(pFrom->_sfRTCamera);
}
#endif


inline
const Char8 *RRTStageBase::getClassname(void)
{
    return "RRTStage";
}
OSG_GEN_CONTAINERPTR(RRTStage);

OSG_END_NAMESPACE

