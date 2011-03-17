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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SkeletonJoint.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SkeletonJoint_class(){

    { //::OSG::SkeletonJoint
        typedef bp::class_< OSG::SkeletonJoint, bp::bases< OSG::SkeletonJointBase >, OSG::SkeletonJoint::ObjRecPtr, boost::noncopyable > SkeletonJoint_exposer_t;
        SkeletonJoint_exposer_t SkeletonJoint_exposer = SkeletonJoint_exposer_t( "SkeletonJoint", bp::no_init );
        bp::scope SkeletonJoint_scope( SkeletonJoint_exposer );
        { //::OSG::SkeletonJoint::accumulateMatrix
        
            typedef void ( ::OSG::SkeletonJoint::*accumulateMatrix_function_type )( ::OSG::Matrix & ) ;
            
            SkeletonJoint_exposer.def( 
                "accumulateMatrix"
                , accumulateMatrix_function_type( &::OSG::SkeletonJoint::accumulateMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::SkeletonJoint::adjustVolume
        
            typedef void ( ::OSG::SkeletonJoint::*adjustVolume_function_type )( ::OSG::Volume & ) ;
            
            SkeletonJoint_exposer.def( 
                "adjustVolume"
                , adjustVolume_function_type( &::OSG::SkeletonJoint::adjustVolume )
                , ( bp::arg("volume") ) );
        
        }
        { //::OSG::SkeletonJoint::animBindEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkeletonJoint::*animBindEnter_function_type )( ::OSG::Action * ) ;
            
            SkeletonJoint_exposer.def( 
                "animBindEnter"
                , animBindEnter_function_type( &::OSG::SkeletonJoint::animBindEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::SkeletonJoint::changed
        
            typedef void ( ::OSG::SkeletonJoint::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SkeletonJoint_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SkeletonJoint::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::SkeletonJoint::dump
        
            typedef void ( ::OSG::SkeletonJoint::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SkeletonJoint_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SkeletonJoint::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::SkeletonJoint::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkeletonJoint::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            SkeletonJoint_exposer.def( 
                "renderEnter"
                , renderEnter_function_type( &::OSG::SkeletonJoint::renderEnter )
                , ( bp::arg("action") ) );
        
        }
        { //::OSG::SkeletonJoint::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::SkeletonJoint::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            SkeletonJoint_exposer.def( 
                "renderLeave"
                , renderLeave_function_type( &::OSG::SkeletonJoint::renderLeave )
                , ( bp::arg("action") ) );
        
        }
        pyopensg::register_transit< OSG::SkeletonJoint >::execute();
        bp::implicitly_convertible< OSG::SkeletonJoint::ObjRecPtr, OSG::SkeletonJoint* >();
        bp::implicitly_convertible< OSG::SkeletonJoint::ObjRecPtr, OSG::SkeletonJoint::ObjCPtr >();
        bp::implicitly_convertible< OSG::SkeletonJoint::ObjRecPtr, OSG::BaseSkeletonJoint* >();
        bp::implicitly_convertible< OSG::SkeletonJoint::ObjRecPtr, OSG::BaseSkeletonJoint::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SkeletonJoint::ObjRecPtr, OSG::BaseSkeletonJoint::ObjCPtr>();
    }

}