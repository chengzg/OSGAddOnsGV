/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class SimpleCudaComputeAlgorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &SimpleCudaComputeAlgorithmBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SimpleCudaComputeAlgorithmBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SimpleCudaComputeAlgorithmBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SimpleCudaComputeAlgorithm::_sfMode field.

inline
UInt32 &SimpleCudaComputeAlgorithmBase::editMode(void)
{
    editSField(ModeFieldMask);

    return _sfMode.getValue();
}

//! Get the value of the SimpleCudaComputeAlgorithm::_sfMode field.
inline
      UInt32  SimpleCudaComputeAlgorithmBase::getMode(void) const
{
    return _sfMode.getValue();
}

//! Set the value of the SimpleCudaComputeAlgorithm::_sfMode field.
inline
void SimpleCudaComputeAlgorithmBase::setMode(const UInt32 value)
{
    editSField(ModeFieldMask);

    _sfMode.setValue(value);
}
//! Get the value of the SimpleCudaComputeAlgorithm::_sfIntensity field.

inline
Real32 &SimpleCudaComputeAlgorithmBase::editIntensity(void)
{
    editSField(IntensityFieldMask);

    return _sfIntensity.getValue();
}

//! Get the value of the SimpleCudaComputeAlgorithm::_sfIntensity field.
inline
      Real32  SimpleCudaComputeAlgorithmBase::getIntensity(void) const
{
    return _sfIntensity.getValue();
}

//! Set the value of the SimpleCudaComputeAlgorithm::_sfIntensity field.
inline
void SimpleCudaComputeAlgorithmBase::setIntensity(const Real32 value)
{
    editSField(IntensityFieldMask);

    _sfIntensity.setValue(value);
}
//! Get the value of the SimpleCudaComputeAlgorithm::_sfScale field.

inline
Real32 &SimpleCudaComputeAlgorithmBase::editScale(void)
{
    editSField(ScaleFieldMask);

    return _sfScale.getValue();
}

//! Get the value of the SimpleCudaComputeAlgorithm::_sfScale field.
inline
      Real32  SimpleCudaComputeAlgorithmBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the SimpleCudaComputeAlgorithm::_sfScale field.
inline
void SimpleCudaComputeAlgorithmBase::setScale(const Real32 value)
{
    editSField(ScaleFieldMask);

    _sfScale.setValue(value);
}
//! Get the value of the SimpleCudaComputeAlgorithm::_sfScaleStep field.

inline
Real32 &SimpleCudaComputeAlgorithmBase::editScaleStep(void)
{
    editSField(ScaleStepFieldMask);

    return _sfScaleStep.getValue();
}

//! Get the value of the SimpleCudaComputeAlgorithm::_sfScaleStep field.
inline
      Real32  SimpleCudaComputeAlgorithmBase::getScaleStep(void) const
{
    return _sfScaleStep.getValue();
}

//! Set the value of the SimpleCudaComputeAlgorithm::_sfScaleStep field.
inline
void SimpleCudaComputeAlgorithmBase::setScaleStep(const Real32 value)
{
    editSField(ScaleStepFieldMask);

    _sfScaleStep.setValue(value);
}
//! Get the value of the SimpleCudaComputeAlgorithm::_sfScaleMax field.

inline
Real32 &SimpleCudaComputeAlgorithmBase::editScaleMax(void)
{
    editSField(ScaleMaxFieldMask);

    return _sfScaleMax.getValue();
}

//! Get the value of the SimpleCudaComputeAlgorithm::_sfScaleMax field.
inline
      Real32  SimpleCudaComputeAlgorithmBase::getScaleMax(void) const
{
    return _sfScaleMax.getValue();
}

//! Set the value of the SimpleCudaComputeAlgorithm::_sfScaleMax field.
inline
void SimpleCudaComputeAlgorithmBase::setScaleMax(const Real32 value)
{
    editSField(ScaleMaxFieldMask);

    _sfScaleMax.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SimpleCudaComputeAlgorithmBase::execSync (      SimpleCudaComputeAlgorithmBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pFrom->_sfMode);

    if(FieldBits::NoField != (IntensityFieldMask & whichField))
        _sfIntensity.syncWith(pFrom->_sfIntensity);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pFrom->_sfScale);

    if(FieldBits::NoField != (ScaleStepFieldMask & whichField))
        _sfScaleStep.syncWith(pFrom->_sfScaleStep);

    if(FieldBits::NoField != (ScaleMaxFieldMask & whichField))
        _sfScaleMax.syncWith(pFrom->_sfScaleMax);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
        _sfTarget.syncWith(pFrom->_sfTarget);
}
#endif


inline
const Char8 *SimpleCudaComputeAlgorithmBase::getClassname(void)
{
    return "SimpleCudaComputeAlgorithm";
}
OSG_GEN_CONTAINERPTR(SimpleCudaComputeAlgorithm);

OSG_END_NAMESPACE

