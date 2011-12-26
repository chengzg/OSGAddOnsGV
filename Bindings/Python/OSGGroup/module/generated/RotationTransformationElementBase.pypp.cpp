// This file has been generated by Py++.


// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "RotationTransformationElementBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RotationTransformationElementBase_class(){

    { //::OSG::RotationTransformationElementBase
        typedef bp::class_< OSG::RotationTransformationElementBase, bp::bases< OSG::TransformationElement >, boost::noncopyable > RotationTransformationElementBase_exposer_t;
        RotationTransformationElementBase_exposer_t RotationTransformationElementBase_exposer = RotationTransformationElementBase_exposer_t( "RotationTransformationElementBase", bp::no_init );
        bp::scope RotationTransformationElementBase_scope( RotationTransformationElementBase_exposer );
        bp::scope().attr("AxisFieldId") = (int)OSG::RotationTransformationElementBase::AxisFieldId;
        bp::scope().attr("AngleFieldId") = (int)OSG::RotationTransformationElementBase::AngleFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::RotationTransformationElementBase::NextFieldId;
        { //::OSG::RotationTransformationElementBase::copyFromBin
        
            typedef void ( ::OSG::RotationTransformationElementBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RotationTransformationElementBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::RotationTransformationElementBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RotationTransformationElementBase::copyToBin
        
            typedef void ( ::OSG::RotationTransformationElementBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RotationTransformationElementBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::RotationTransformationElementBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RotationTransformationElementBase::create
        
            typedef ::OSG::RotationTransformationElementTransitPtr ( *create_function_type )(  );
            
            RotationTransformationElementBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::RotationTransformationElementBase::create ) );
        
        }
        { //::OSG::RotationTransformationElementBase::createDependent
        
            typedef ::OSG::RotationTransformationElementTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            RotationTransformationElementBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::RotationTransformationElementBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::RotationTransformationElementBase::createLocal
        
            typedef ::OSG::RotationTransformationElementTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            RotationTransformationElementBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::RotationTransformationElementBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::RotationTransformationElementBase::getAngle
        
            typedef ::OSG::Real32 ( ::OSG::RotationTransformationElementBase::*getAngle_function_type )(  ) const;
            
            RotationTransformationElementBase_exposer.def( 
                "getAngle"
                , getAngle_function_type( &::OSG::RotationTransformationElementBase::getAngle ) );
        
        }
        { //::OSG::RotationTransformationElementBase::getAxis
        
            typedef ::OSG::Vec3f const & ( ::OSG::RotationTransformationElementBase::*getAxis_function_type )(  ) const;
            
            RotationTransformationElementBase_exposer.def( 
                "getAxis"
                , getAxis_function_type( &::OSG::RotationTransformationElementBase::getAxis )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::RotationTransformationElementBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::RotationTransformationElementBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            RotationTransformationElementBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::RotationTransformationElementBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::RotationTransformationElementBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            RotationTransformationElementBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::RotationTransformationElementBase::getClassGroupId ) );
        
        }
        { //::OSG::RotationTransformationElementBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            RotationTransformationElementBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::RotationTransformationElementBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::RotationTransformationElementBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            RotationTransformationElementBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::RotationTransformationElementBase::getClassTypeId ) );
        
        }
        { //::OSG::RotationTransformationElementBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::RotationTransformationElementBase::*getContainerSize_function_type )(  ) const;
            
            RotationTransformationElementBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::RotationTransformationElementBase::getContainerSize ) );
        
        }
        { //::OSG::RotationTransformationElementBase::getSFAngle
        
            typedef ::OSG::SFReal32 const * ( ::OSG::RotationTransformationElementBase::*getSFAngle_function_type )(  ) const;
            
            RotationTransformationElementBase_exposer.def( 
                "getSFAngle"
                , getSFAngle_function_type( &::OSG::RotationTransformationElementBase::getSFAngle )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RotationTransformationElementBase::getSFAxis
        
            typedef ::OSG::SFVec3f const * ( ::OSG::RotationTransformationElementBase::*getSFAxis_function_type )(  ) const;
            
            RotationTransformationElementBase_exposer.def( 
                "getSFAxis"
                , getSFAxis_function_type( &::OSG::RotationTransformationElementBase::getSFAxis )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RotationTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::RotationTransformationElementBase::*getType_function_type )(  ) ;
            
            RotationTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RotationTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RotationTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::RotationTransformationElementBase::*getType_function_type )(  ) const;
            
            RotationTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RotationTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RotationTransformationElementBase::setAngle
        
            typedef void ( ::OSG::RotationTransformationElementBase::*setAngle_function_type )( ::OSG::Real32 const ) ;
            
            RotationTransformationElementBase_exposer.def( 
                "setAngle"
                , setAngle_function_type( &::OSG::RotationTransformationElementBase::setAngle )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::RotationTransformationElementBase::setAxis
        
            typedef void ( ::OSG::RotationTransformationElementBase::*setAxis_function_type )( ::OSG::Vec3f const & ) ;
            
            RotationTransformationElementBase_exposer.def( 
                "setAxis"
                , setAxis_function_type( &::OSG::RotationTransformationElementBase::setAxis )
                , ( bp::arg("value") ) );
        
        }
        RotationTransformationElementBase_exposer.staticmethod( "create" );
        RotationTransformationElementBase_exposer.staticmethod( "createDependent" );
        RotationTransformationElementBase_exposer.staticmethod( "createLocal" );
        RotationTransformationElementBase_exposer.staticmethod( "getClassGroupId" );
        RotationTransformationElementBase_exposer.staticmethod( "getClassType" );
        RotationTransformationElementBase_exposer.staticmethod( "getClassTypeId" );
    }

}