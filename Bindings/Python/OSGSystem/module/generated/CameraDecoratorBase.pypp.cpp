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

#include "boost/python.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CameraDecoratorBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CameraDecoratorBase_class(){

    { //::OSG::CameraDecoratorBase
        typedef bp::class_< OSG::CameraDecoratorBase, bp::bases< OSG::Camera >, boost::noncopyable > CameraDecoratorBase_exposer_t;
        CameraDecoratorBase_exposer_t CameraDecoratorBase_exposer = CameraDecoratorBase_exposer_t( "CameraDecoratorBase", bp::no_init );
        bp::scope CameraDecoratorBase_scope( CameraDecoratorBase_exposer );
        bp::scope().attr("DecorateeFieldId") = (int)OSG::CameraDecoratorBase::DecorateeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CameraDecoratorBase::NextFieldId;
        { //::OSG::CameraDecoratorBase::copyFromBin
        
            typedef void ( ::OSG::CameraDecoratorBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CameraDecoratorBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CameraDecoratorBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CameraDecoratorBase::copyToBin
        
            typedef void ( ::OSG::CameraDecoratorBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CameraDecoratorBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CameraDecoratorBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CameraDecoratorBase::getBeacon
        
            typedef ::OSG::Node * ( ::OSG::CameraDecoratorBase::*getBeacon_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getBeacon"
                , getBeacon_function_type( &::OSG::CameraDecoratorBase::getBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::CameraDecoratorBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CameraDecoratorBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CameraDecoratorBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CameraDecoratorBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CameraDecoratorBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CameraDecoratorBase::getClassGroupId ) );
        
        }
        { //::OSG::CameraDecoratorBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CameraDecoratorBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CameraDecoratorBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CameraDecoratorBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CameraDecoratorBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CameraDecoratorBase::getClassTypeId ) );
        
        }
        { //::OSG::CameraDecoratorBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CameraDecoratorBase::*getContainerSize_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CameraDecoratorBase::getContainerSize ) );
        
        }
        { //::OSG::CameraDecoratorBase::getDecoratee
        
            typedef ::OSG::Camera * ( ::OSG::CameraDecoratorBase::*getDecoratee_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getDecoratee"
                , getDecoratee_function_type( &::OSG::CameraDecoratorBase::getDecoratee )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getFar
        
            typedef ::OSG::Real32 ( ::OSG::CameraDecoratorBase::*getFar_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getFar"
                , getFar_function_type( &::OSG::CameraDecoratorBase::getFar ) );
        
        }
        { //::OSG::CameraDecoratorBase::getNear
        
            typedef ::OSG::Real32 ( ::OSG::CameraDecoratorBase::*getNear_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getNear"
                , getNear_function_type( &::OSG::CameraDecoratorBase::getNear ) );
        
        }
        { //::OSG::CameraDecoratorBase::getSFBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::CameraDecoratorBase::*getSFBeacon_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getSFBeacon"
                , getSFBeacon_function_type( &::OSG::CameraDecoratorBase::getSFBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getSFDecoratee
        
            typedef ::OSG::SFUnrecCameraPtr const * ( ::OSG::CameraDecoratorBase::*getSFDecoratee_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getSFDecoratee"
                , getSFDecoratee_function_type( &::OSG::CameraDecoratorBase::getSFDecoratee )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getSFFar
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CameraDecoratorBase::*getSFFar_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getSFFar"
                , getSFFar_function_type( &::OSG::CameraDecoratorBase::getSFFar )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getSFNear
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CameraDecoratorBase::*getSFNear_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getSFNear"
                , getSFNear_function_type( &::OSG::CameraDecoratorBase::getSFNear )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CameraDecoratorBase::*getType_function_type )(  ) ;
            
            CameraDecoratorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CameraDecoratorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CameraDecoratorBase::*getType_function_type )(  ) const;
            
            CameraDecoratorBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CameraDecoratorBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CameraDecoratorBase::setBeacon
        
            typedef void ( ::OSG::CameraDecoratorBase::*setBeacon_function_type )( ::OSG::Node * const ) ;
            
            CameraDecoratorBase_exposer.def( 
                "setBeacon"
                , setBeacon_function_type( &::OSG::CameraDecoratorBase::setBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CameraDecoratorBase::setDecoratee
        
            typedef void ( ::OSG::CameraDecoratorBase::*setDecoratee_function_type )( ::OSG::Camera * const ) ;
            
            CameraDecoratorBase_exposer.def( 
                "setDecoratee"
                , setDecoratee_function_type( &::OSG::CameraDecoratorBase::setDecoratee )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CameraDecoratorBase::setFar
        
            typedef void ( ::OSG::CameraDecoratorBase::*setFar_function_type )( ::OSG::Real32 const ) ;
            
            CameraDecoratorBase_exposer.def( 
                "setFar"
                , setFar_function_type( &::OSG::CameraDecoratorBase::setFar )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CameraDecoratorBase::setNear
        
            typedef void ( ::OSG::CameraDecoratorBase::*setNear_function_type )( ::OSG::Real32 const ) ;
            
            CameraDecoratorBase_exposer.def( 
                "setNear"
                , setNear_function_type( &::OSG::CameraDecoratorBase::setNear )
                , ( bp::arg("value") ) );
        
        }
        CameraDecoratorBase_exposer.staticmethod( "getClassGroupId" );
        CameraDecoratorBase_exposer.staticmethod( "getClassType" );
        CameraDecoratorBase_exposer.staticmethod( "getClassTypeId" );
    }

}