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
 **     class BbqTerrain!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BbqTerrainBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BbqTerrainBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BbqTerrainBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the BbqTerrain::_sfBeacon field.
inline
NodePtrConst BbqTerrainBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the BbqTerrain::_sfBeacon field.
inline
void BbqTerrainBase::setBeacon(NodePtrConstArg value)
{
    editSField(BeaconFieldMask);

    setRefd(_sfBeacon.getValue(), value);

}

//! Get the value of the BbqTerrain::_sfDataSource field.
inline
BbqDataSourcePtrConst BbqTerrainBase::getDataSource(void) const
{
    return _sfDataSource.getValue();
}

//! Set the value of the BbqTerrain::_sfDataSource field.
inline
void BbqTerrainBase::setDataSource(BbqDataSourcePtrConstArg value)
{
    editSField(DataSourceFieldMask);

    setRefd(_sfDataSource.getValue(), value);

}
//! Get the value of the BbqTerrain::_sfMaxNumResidentNodes field.

inline
UInt32 &BbqTerrainBase::editMaxNumResidentNodes(void)
{
    editSField(MaxNumResidentNodesFieldMask);

    return _sfMaxNumResidentNodes.getValue();
}

//! Get the value of the BbqTerrain::_sfMaxNumResidentNodes field.
inline
const UInt32 &BbqTerrainBase::getMaxNumResidentNodes(void) const
{
    return _sfMaxNumResidentNodes.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &BbqTerrainBase::getMaxNumResidentNodes(void)
{
    return this->editMaxNumResidentNodes();
}
#endif

//! Set the value of the BbqTerrain::_sfMaxNumResidentNodes field.
inline
void BbqTerrainBase::setMaxNumResidentNodes(const UInt32 &value)
{
    editSField(MaxNumResidentNodesFieldMask);

    _sfMaxNumResidentNodes.setValue(value);
}
//! Get the value of the BbqTerrain::_sfShowSwitchDistance field.

inline
bool &BbqTerrainBase::editShowSwitchDistance(void)
{
    editSField(ShowSwitchDistanceFieldMask);

    return _sfShowSwitchDistance.getValue();
}

//! Get the value of the BbqTerrain::_sfShowSwitchDistance field.
inline
const bool &BbqTerrainBase::getShowSwitchDistance(void) const
{
    return _sfShowSwitchDistance.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &BbqTerrainBase::getShowSwitchDistance(void)
{
    return this->editShowSwitchDistance();
}
#endif

//! Set the value of the BbqTerrain::_sfShowSwitchDistance field.
inline
void BbqTerrainBase::setShowSwitchDistance(const bool &value)
{
    editSField(ShowSwitchDistanceFieldMask);

    _sfShowSwitchDistance.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BbqTerrainBase::execSync (      BbqTerrainBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (DataSourceFieldMask & whichField))
        _sfDataSource.syncWith(pFrom->_sfDataSource);

    if(FieldBits::NoField != (MaxNumResidentNodesFieldMask & whichField))
        _sfMaxNumResidentNodes.syncWith(pFrom->_sfMaxNumResidentNodes);

    if(FieldBits::NoField != (ShowSwitchDistanceFieldMask & whichField))
        _sfShowSwitchDistance.syncWith(pFrom->_sfShowSwitchDistance);
}
#endif


inline
Char8 *BbqTerrainBase::getClassname(void)
{
    return "BbqTerrain";
}
OSG_GEN_CONTAINERPTR(BbqTerrain);

OSG_END_NAMESPACE

