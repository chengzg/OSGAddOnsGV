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
 **     class VLCVideoTextureObjChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGAddOnsConfig.h"




#include "OSGVLCVideoTextureObjChunkBase.h"
#include "OSGVLCVideoTextureObjChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VLCVideoTextureObjChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           VLCVideoTextureObjChunkBase::_sfStatus
    video status like pause play
*/

/*! \var Int64           VLCVideoTextureObjChunkBase::_sfTimestamp
    video time stamp or -1 if not used
*/

/*! \var Int64           VLCVideoTextureObjChunkBase::_sfUpdatefreq
    video sync update frequency in ms
*/

/*! \var std::string     VLCVideoTextureObjChunkBase::_sfUrl
    URL of the video to play
*/

/*! \var Int32           VLCVideoTextureObjChunkBase::_sfWidth
    video render width
*/

/*! \var Int32           VLCVideoTextureObjChunkBase::_sfHeight
    video render height
*/

/*! \var bool            VLCVideoTextureObjChunkBase::_sfIsMaster
    master of cluster playback
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<VLCVideoTextureObjChunk *, nsOSG>::_type(
    "VLCVideoTextureObjChunkPtr", 
    "TextureObjChunkPtr", 
    VLCVideoTextureObjChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(VLCVideoTextureObjChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VLCVideoTextureObjChunk *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VLCVideoTextureObjChunk *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VLCVideoTextureObjChunkBase::classDescInserter(TypeObject &oType)
{
    Inherited::classDescInserter(oType);

    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "status",
        "video status like pause play\n",
        StatusFieldId, StatusFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleStatus),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleStatus));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt64::Description(
        SFInt64::getClassType(),
        "timestamp",
        "video time stamp or -1 if not used\n",
        TimestampFieldId, TimestampFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleTimestamp),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleTimestamp));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt64::Description(
        SFInt64::getClassType(),
        "updatefreq",
        "video sync update frequency in ms\n",
        UpdatefreqFieldId, UpdatefreqFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleUpdatefreq),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleUpdatefreq));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "url",
        "URL of the video to play\n",
        UrlFieldId, UrlFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleUrl),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleUrl));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "width",
        "video render width\n",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleWidth),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "height",
        "video render height\n",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleHeight),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "isMaster",
        "master of cluster playback\n",
        IsMasterFieldId, IsMasterFieldMask,
        false,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&VLCVideoTextureObjChunk::editHandleIsMaster),
        static_cast<FieldGetMethodSig >(&VLCVideoTextureObjChunk::getHandleIsMaster));

    oType.addInitialDesc(pDesc);
}


VLCVideoTextureObjChunkBase::TypeObject VLCVideoTextureObjChunkBase::_type(
    VLCVideoTextureObjChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&VLCVideoTextureObjChunkBase::createEmptyLocal),
    VLCVideoTextureObjChunk::initMethod,
    VLCVideoTextureObjChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&VLCVideoTextureObjChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"VLCVideoTextureObjChunk\"\n"
    "    parent=\"TextureObjChunk\"\n"
    "    mixinparent=\"DynamicTextureObjParent\"\n"
    "    library=\"VLCVideoTexture\"\n"
    "    package=\"OSGAddOns\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"status\"\n"
    "      type=\"Int32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "    video status like pause play\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"timestamp\"\n"
    "      type=\"Int64\"\n"
    "      defaultValue=\"-1\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "    video time stamp or -1 if not used\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"updatefreq\"\n"
    "      type=\"Int64\"\n"
    "      defaultValue=\"2000\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "    video sync update frequency in ms\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"url\"\n"
    "      type=\"std::string\"\n"
    "      defaultValue='\"\"'\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "    URL of the video to play\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"width\"\n"
    "      type=\"Int32\"\n"
    "      defaultValue=\"32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "    video render width\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"height\"\n"
    "      type=\"Int32\"\n"
    "      defaultValue=\"32\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "    video render height\n"
    "  </Field>    \n"
    "  <Field\n"
    "      name=\"isMaster\"\n"
    "      type=\"bool\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      defaultValue=\"true\"\n"
    "      access=\"public\"\n"
    "      fieldFlags=\"FClusterLocal\"\n"
    "      >\n"
    "    master of cluster playback\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VLCVideoTextureObjChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &VLCVideoTextureObjChunkBase::getType(void) const
{
    return _type;
}

UInt32 VLCVideoTextureObjChunkBase::getContainerSize(void) const
{
    return sizeof(VLCVideoTextureObjChunk);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *VLCVideoTextureObjChunkBase::editSFStatus(void)
{
    editSField(StatusFieldMask);

    return &_sfStatus;
}

const SFInt32 *VLCVideoTextureObjChunkBase::getSFStatus(void) const
{
    return &_sfStatus;
}


SFInt64 *VLCVideoTextureObjChunkBase::editSFTimestamp(void)
{
    editSField(TimestampFieldMask);

    return &_sfTimestamp;
}

const SFInt64 *VLCVideoTextureObjChunkBase::getSFTimestamp(void) const
{
    return &_sfTimestamp;
}


SFInt64 *VLCVideoTextureObjChunkBase::editSFUpdatefreq(void)
{
    editSField(UpdatefreqFieldMask);

    return &_sfUpdatefreq;
}

const SFInt64 *VLCVideoTextureObjChunkBase::getSFUpdatefreq(void) const
{
    return &_sfUpdatefreq;
}


SFString *VLCVideoTextureObjChunkBase::editSFUrl(void)
{
    editSField(UrlFieldMask);

    return &_sfUrl;
}

const SFString *VLCVideoTextureObjChunkBase::getSFUrl(void) const
{
    return &_sfUrl;
}


SFInt32 *VLCVideoTextureObjChunkBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFInt32 *VLCVideoTextureObjChunkBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFInt32 *VLCVideoTextureObjChunkBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFInt32 *VLCVideoTextureObjChunkBase::getSFHeight(void) const
{
    return &_sfHeight;
}


SFBool *VLCVideoTextureObjChunkBase::editSFIsMaster(void)
{
    editSField(IsMasterFieldMask);

    return &_sfIsMaster;
}

const SFBool *VLCVideoTextureObjChunkBase::getSFIsMaster(void) const
{
    return &_sfIsMaster;
}






/*------------------------------ access -----------------------------------*/

SizeT VLCVideoTextureObjChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (StatusFieldMask & whichField))
    {
        returnValue += _sfStatus.getBinSize();
    }
    if(FieldBits::NoField != (TimestampFieldMask & whichField))
    {
        returnValue += _sfTimestamp.getBinSize();
    }
    if(FieldBits::NoField != (UpdatefreqFieldMask & whichField))
    {
        returnValue += _sfUpdatefreq.getBinSize();
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        returnValue += _sfUrl.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (IsMasterFieldMask & whichField))
    {
        returnValue += _sfIsMaster.getBinSize();
    }

    return returnValue;
}

void VLCVideoTextureObjChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (StatusFieldMask & whichField))
    {
        _sfStatus.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimestampFieldMask & whichField))
    {
        _sfTimestamp.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UpdatefreqFieldMask & whichField))
    {
        _sfUpdatefreq.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IsMasterFieldMask & whichField))
    {
        _sfIsMaster.copyToBin(pMem);
    }
}

void VLCVideoTextureObjChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (StatusFieldMask & whichField))
    {
        editSField(StatusFieldMask);
        _sfStatus.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimestampFieldMask & whichField))
    {
        editSField(TimestampFieldMask);
        _sfTimestamp.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UpdatefreqFieldMask & whichField))
    {
        editSField(UpdatefreqFieldMask);
        _sfUpdatefreq.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        editSField(UrlFieldMask);
        _sfUrl.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        editSField(WidthFieldMask);
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        editSField(HeightFieldMask);
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IsMasterFieldMask & whichField))
    {
        editSField(IsMasterFieldMask);
        _sfIsMaster.copyFromBin(pMem);
    }
}

//! create a new instance of the class
VLCVideoTextureObjChunkTransitPtr VLCVideoTextureObjChunkBase::createLocal(BitVector bFlags)
{
    VLCVideoTextureObjChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VLCVideoTextureObjChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VLCVideoTextureObjChunkTransitPtr VLCVideoTextureObjChunkBase::createDependent(BitVector bFlags)
{
    VLCVideoTextureObjChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VLCVideoTextureObjChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VLCVideoTextureObjChunkTransitPtr VLCVideoTextureObjChunkBase::create(void)
{
    VLCVideoTextureObjChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VLCVideoTextureObjChunk>(tmpPtr);
    }

    return fc;
}

VLCVideoTextureObjChunk *VLCVideoTextureObjChunkBase::createEmptyLocal(BitVector bFlags)
{
    VLCVideoTextureObjChunk *returnValue;

    newPtr<VLCVideoTextureObjChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VLCVideoTextureObjChunk *VLCVideoTextureObjChunkBase::createEmpty(void)
{
    VLCVideoTextureObjChunk *returnValue;

    newPtr<VLCVideoTextureObjChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VLCVideoTextureObjChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VLCVideoTextureObjChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VLCVideoTextureObjChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VLCVideoTextureObjChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VLCVideoTextureObjChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VLCVideoTextureObjChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VLCVideoTextureObjChunkBase::shallowCopy(void) const
{
    VLCVideoTextureObjChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VLCVideoTextureObjChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VLCVideoTextureObjChunkBase::VLCVideoTextureObjChunkBase(void) :
    Inherited(),
    _sfStatus                 (),
    _sfTimestamp              (Int64(-1)),
    _sfUpdatefreq             (Int64(2000)),
    _sfUrl                    (std::string("")),
    _sfWidth                  (Int32(32)),
    _sfHeight                 (Int32(32)),
    _sfIsMaster               (bool(true))
{
}

VLCVideoTextureObjChunkBase::VLCVideoTextureObjChunkBase(const VLCVideoTextureObjChunkBase &source) :
    Inherited(source),
    _sfStatus                 (source._sfStatus                 ),
    _sfTimestamp              (source._sfTimestamp              ),
    _sfUpdatefreq             (source._sfUpdatefreq             ),
    _sfUrl                    (source._sfUrl                    ),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfIsMaster               (source._sfIsMaster               )
{
}


/*-------------------------- destructors ----------------------------------*/

VLCVideoTextureObjChunkBase::~VLCVideoTextureObjChunkBase(void)
{
}


GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleStatus          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfStatus,
             this->getType().getFieldDesc(StatusFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleStatus         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfStatus,
             this->getType().getFieldDesc(StatusFieldId),
             this));


    editSField(StatusFieldMask);

    return returnValue;
}

GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleTimestamp       (void) const
{
    SFInt64::GetHandlePtr returnValue(
        new  SFInt64::GetHandle(
             &_sfTimestamp,
             this->getType().getFieldDesc(TimestampFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleTimestamp      (void)
{
    SFInt64::EditHandlePtr returnValue(
        new  SFInt64::EditHandle(
             &_sfTimestamp,
             this->getType().getFieldDesc(TimestampFieldId),
             this));


    editSField(TimestampFieldMask);

    return returnValue;
}

GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleUpdatefreq      (void) const
{
    SFInt64::GetHandlePtr returnValue(
        new  SFInt64::GetHandle(
             &_sfUpdatefreq,
             this->getType().getFieldDesc(UpdatefreqFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleUpdatefreq     (void)
{
    SFInt64::EditHandlePtr returnValue(
        new  SFInt64::EditHandle(
             &_sfUpdatefreq,
             this->getType().getFieldDesc(UpdatefreqFieldId),
             this));


    editSField(UpdatefreqFieldMask);

    return returnValue;
}

GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleUrl             (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfUrl,
             this->getType().getFieldDesc(UrlFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleUrl            (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfUrl,
             this->getType().getFieldDesc(UrlFieldId),
             this));


    editSField(UrlFieldMask);

    return returnValue;
}

GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleWidth           (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleWidth          (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleHeight          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleHeight         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr VLCVideoTextureObjChunkBase::getHandleIsMaster        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIsMaster,
             this->getType().getFieldDesc(IsMasterFieldId),
             const_cast<VLCVideoTextureObjChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr VLCVideoTextureObjChunkBase::editHandleIsMaster       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIsMaster,
             this->getType().getFieldDesc(IsMasterFieldId),
             this));


    editSField(IsMasterFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void VLCVideoTextureObjChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VLCVideoTextureObjChunk *pThis = static_cast<VLCVideoTextureObjChunk *>(this);

    pThis->execSync(static_cast<VLCVideoTextureObjChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VLCVideoTextureObjChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VLCVideoTextureObjChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VLCVideoTextureObjChunk *>(pRefAspect),
                  dynamic_cast<const VLCVideoTextureObjChunk *>(this));

    return returnValue;
}
#endif

void VLCVideoTextureObjChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
