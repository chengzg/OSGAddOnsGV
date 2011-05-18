/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class BufferPnt3fInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGGeoVectorProperty.h"       // OutValue Class

#include "OSGBufferPnt3fInterpolatorBase.h"
#include "OSGBufferPnt3fInterpolator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BufferPnt3fInterpolator
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          BufferPnt3fInterpolatorBase::_sfInValue
    This is VRML's fraction field.
*/

/*! \var Real32          BufferPnt3fInterpolatorBase::_mfKey
    
*/

/*! \var Pnt3f           BufferPnt3fInterpolatorBase::_mfKeyValue
    
*/

/*! \var GeoVectorProperty * BufferPnt3fInterpolatorBase::_sfOutValue
    This is VRML's value field.
*/

/*! \var UInt32          BufferPnt3fInterpolatorBase::_mfResortIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BufferPnt3fInterpolator *>::_type("BufferPnt3fInterpolatorPtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BufferPnt3fInterpolator *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void BufferPnt3fInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "inValue",
        "This is VRML's fraction field.\n",
        InValueFieldId, InValueFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&BufferPnt3fInterpolator::editHandleInValue),
        static_cast<FieldGetMethodSig >(&BufferPnt3fInterpolator::getHandleInValue));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "key",
        "",
        KeyFieldId, KeyFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&BufferPnt3fInterpolator::editHandleKey),
        static_cast<FieldGetMethodSig >(&BufferPnt3fInterpolator::getHandleKey));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt3f::Description(
        MFPnt3f::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&BufferPnt3fInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&BufferPnt3fInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecGeoVectorPropertyPtr::Description(
        SFUnrecGeoVectorPropertyPtr::getClassType(),
        "outValue",
        "This is VRML's value field.\n",
        OutValueFieldId, OutValueFieldMask,
        true,
        (Field::FThreadLocal|Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BufferPnt3fInterpolator::editHandleOutValue),
        static_cast<FieldGetMethodSig >(&BufferPnt3fInterpolator::getHandleOutValue));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "resortIndex",
        "",
        ResortIndexFieldId, ResortIndexFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&BufferPnt3fInterpolator::editHandleResortIndex),
        static_cast<FieldGetMethodSig >(&BufferPnt3fInterpolator::getHandleResortIndex));

    oType.addInitialDesc(pDesc);
}


BufferPnt3fInterpolatorBase::TypeObject BufferPnt3fInterpolatorBase::_type(
    BufferPnt3fInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BufferPnt3fInterpolatorBase::createEmptyLocal),
    BufferPnt3fInterpolator::initMethod,
    BufferPnt3fInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BufferPnt3fInterpolator::classDescInserter),
    false,
    ResortIndexFieldMask,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"BufferPnt3fInterpolator\"\n"
    "   parent=\"NodeCore\"\n"
    "   library=\"ContribCompute\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"true\"\n"
    "   isBundle=\"false\"\n"
    "   parentFields=\"none\"\n"
    "   fieldsUnmarkedOnCreate=\"ResortIndexFieldMask\"\n"
    "   >\n"
    "  <Field\n"
    "     name=\"inValue\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.f\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "    This is VRML's fraction field.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"key\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"keyValue\"\n"
    "     type=\"Pnt3f\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"outValue\"\n"
    "     type=\"GeoVectorProperty\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     category=\"pointer\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"NULL\"\n"
    "     fieldFlags=\"FThreadLocal|Field::FStdAccess\"\n"
    "     >\n"
    "    This is VRML's value field.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"resortIndex\"\n"
    "     type=\"UInt32\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BufferPnt3fInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &BufferPnt3fInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 BufferPnt3fInterpolatorBase::getContainerSize(void) const
{
    return sizeof(BufferPnt3fInterpolator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *BufferPnt3fInterpolatorBase::editSFInValue(void)
{
    editSField(InValueFieldMask);

    return &_sfInValue;
}

const SFReal32 *BufferPnt3fInterpolatorBase::getSFInValue(void) const
{
    return &_sfInValue;
}


MFReal32 *BufferPnt3fInterpolatorBase::editMFKey(void)
{
    editMField(KeyFieldMask, _mfKey);

    return &_mfKey;
}

const MFReal32 *BufferPnt3fInterpolatorBase::getMFKey(void) const
{
    return &_mfKey;
}


MFPnt3f *BufferPnt3fInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFPnt3f *BufferPnt3fInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


//! Get the BufferPnt3fInterpolator::_sfOutValue field.
const SFUnrecGeoVectorPropertyPtr *BufferPnt3fInterpolatorBase::getSFOutValue(void) const
{
    return &_sfOutValue;
}

SFUnrecGeoVectorPropertyPtr *BufferPnt3fInterpolatorBase::editSFOutValue       (void)
{
    editSField(OutValueFieldMask);

    return &_sfOutValue;
}

MFUInt32 *BufferPnt3fInterpolatorBase::editMFResortIndex(void)
{
    editMField(ResortIndexFieldMask, _mfResortIndex);

    return &_mfResortIndex;
}

const MFUInt32 *BufferPnt3fInterpolatorBase::getMFResortIndex(void) const
{
    return &_mfResortIndex;
}






/*------------------------------ access -----------------------------------*/

UInt32 BufferPnt3fInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (InValueFieldMask & whichField))
    {
        returnValue += _sfInValue.getBinSize();
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        returnValue += _mfKey.getBinSize();
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        returnValue += _sfOutValue.getBinSize();
    }
    if(FieldBits::NoField != (ResortIndexFieldMask & whichField))
    {
        returnValue += _mfResortIndex.getBinSize();
    }

    return returnValue;
}

void BufferPnt3fInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (InValueFieldMask & whichField))
    {
        _sfInValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        _sfOutValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResortIndexFieldMask & whichField))
    {
        _mfResortIndex.copyToBin(pMem);
    }
}

void BufferPnt3fInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (InValueFieldMask & whichField))
    {
        editSField(InValueFieldMask);
        _sfInValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        editMField(KeyFieldMask, _mfKey);
        _mfKey.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        editMField(KeyValueFieldMask, _mfKeyValue);
        _mfKeyValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OutValueFieldMask & whichField))
    {
        editSField(OutValueFieldMask);
        _sfOutValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResortIndexFieldMask & whichField))
    {
        editMField(ResortIndexFieldMask, _mfResortIndex);
        _mfResortIndex.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BufferPnt3fInterpolatorTransitPtr BufferPnt3fInterpolatorBase::createLocal(BitVector bFlags)
{
    BufferPnt3fInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BufferPnt3fInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BufferPnt3fInterpolatorTransitPtr BufferPnt3fInterpolatorBase::createDependent(BitVector bFlags)
{
    BufferPnt3fInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BufferPnt3fInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BufferPnt3fInterpolatorTransitPtr BufferPnt3fInterpolatorBase::create(void)
{
    BufferPnt3fInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BufferPnt3fInterpolator>(tmpPtr);
    }

    return fc;
}

BufferPnt3fInterpolator *BufferPnt3fInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    BufferPnt3fInterpolator *returnValue;

    newPtr<BufferPnt3fInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BufferPnt3fInterpolator *BufferPnt3fInterpolatorBase::createEmpty(void)
{
    BufferPnt3fInterpolator *returnValue;

    newPtr<BufferPnt3fInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr BufferPnt3fInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BufferPnt3fInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BufferPnt3fInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BufferPnt3fInterpolatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BufferPnt3fInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BufferPnt3fInterpolator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BufferPnt3fInterpolatorBase::shallowCopy(void) const
{
    BufferPnt3fInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BufferPnt3fInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

BufferPnt3fInterpolatorBase::BufferPnt3fInterpolatorBase(void) :
    Inherited(),
    _sfInValue                (Real32(0.f)),
    _mfKey                    (),
    _mfKeyValue               (),
    _sfOutValue               (NULL),
    _mfResortIndex            ()
{
}

BufferPnt3fInterpolatorBase::BufferPnt3fInterpolatorBase(const BufferPnt3fInterpolatorBase &source) :
    Inherited(source),
    _sfInValue                (source._sfInValue                ),
    _mfKey                    (source._mfKey                    ),
    _mfKeyValue               (source._mfKeyValue               ),
    _sfOutValue               (NULL),
    _mfResortIndex            (source._mfResortIndex            )
{
}


/*-------------------------- destructors ----------------------------------*/

BufferPnt3fInterpolatorBase::~BufferPnt3fInterpolatorBase(void)
{
}

void BufferPnt3fInterpolatorBase::onCreate(const BufferPnt3fInterpolator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        BufferPnt3fInterpolator *pThis = static_cast<BufferPnt3fInterpolator *>(this);

        pThis->setOutValue(source->getOutValue());
    }
}

GetFieldHandlePtr BufferPnt3fInterpolatorBase::getHandleInValue         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfInValue,
             this->getType().getFieldDesc(InValueFieldId),
             const_cast<BufferPnt3fInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BufferPnt3fInterpolatorBase::editHandleInValue        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfInValue,
             this->getType().getFieldDesc(InValueFieldId),
             this));


    editSField(InValueFieldMask);

    return returnValue;
}

GetFieldHandlePtr BufferPnt3fInterpolatorBase::getHandleKey             (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId),
             const_cast<BufferPnt3fInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BufferPnt3fInterpolatorBase::editHandleKey            (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId),
             this));


    editMField(KeyFieldMask, _mfKey);

    return returnValue;
}

GetFieldHandlePtr BufferPnt3fInterpolatorBase::getHandleKeyValue        (void) const
{
    MFPnt3f::GetHandlePtr returnValue(
        new  MFPnt3f::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             const_cast<BufferPnt3fInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BufferPnt3fInterpolatorBase::editHandleKeyValue       (void)
{
    MFPnt3f::EditHandlePtr returnValue(
        new  MFPnt3f::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             this));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr BufferPnt3fInterpolatorBase::getHandleOutValue        (void) const
{
    SFUnrecGeoVectorPropertyPtr::GetHandlePtr returnValue(
        new  SFUnrecGeoVectorPropertyPtr::GetHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             const_cast<BufferPnt3fInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BufferPnt3fInterpolatorBase::editHandleOutValue       (void)
{
    SFUnrecGeoVectorPropertyPtr::EditHandlePtr returnValue(
        new  SFUnrecGeoVectorPropertyPtr::EditHandle(
             &_sfOutValue,
             this->getType().getFieldDesc(OutValueFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&BufferPnt3fInterpolator::setOutValue,
                    static_cast<BufferPnt3fInterpolator *>(this), _1));

    editSField(OutValueFieldMask);

    return returnValue;
}

GetFieldHandlePtr BufferPnt3fInterpolatorBase::getHandleResortIndex     (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfResortIndex,
             this->getType().getFieldDesc(ResortIndexFieldId),
             const_cast<BufferPnt3fInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr BufferPnt3fInterpolatorBase::editHandleResortIndex    (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfResortIndex,
             this->getType().getFieldDesc(ResortIndexFieldId),
             this));


    editMField(ResortIndexFieldMask, _mfResortIndex);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BufferPnt3fInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BufferPnt3fInterpolator *pThis = static_cast<BufferPnt3fInterpolator *>(this);

    pThis->execSync(static_cast<BufferPnt3fInterpolator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BufferPnt3fInterpolatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BufferPnt3fInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BufferPnt3fInterpolator *>(pRefAspect),
                  dynamic_cast<const BufferPnt3fInterpolator *>(this));

    return returnValue;
}
#endif

void BufferPnt3fInterpolatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<BufferPnt3fInterpolator *>(this)->setOutValue(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKey.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfKeyValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfResortIndex.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
