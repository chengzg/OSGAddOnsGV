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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DistanceLOD.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DistanceLOD_class(){

    { //::OSG::DistanceLOD
        typedef bp::class_< OSG::DistanceLOD, bp::bases< OSG::DistanceLODBase >, OSG::DistanceLOD::ObjRecPtr, boost::noncopyable > DistanceLOD_exposer_t;
        DistanceLOD_exposer_t DistanceLOD_exposer = DistanceLOD_exposer_t( "DistanceLOD", bp::no_init );
        bp::scope DistanceLOD_scope( DistanceLOD_exposer );
        { //::OSG::DistanceLOD::changed
        
            typedef void ( ::OSG::DistanceLOD::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DistanceLOD_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DistanceLOD::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::DistanceLOD::dump
        
            typedef void ( ::OSG::DistanceLOD::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DistanceLOD_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DistanceLOD::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::DistanceLOD >::execute();
        bp::implicitly_convertible< OSG::DistanceLOD::ObjRecPtr, OSG::DistanceLOD* >();
        bp::implicitly_convertible< OSG::DistanceLOD::ObjRecPtr, OSG::DistanceLOD::ObjCPtr >();
        bp::implicitly_convertible< OSG::DistanceLOD::ObjRecPtr, OSG::Group* >();
        bp::implicitly_convertible< OSG::DistanceLOD::ObjRecPtr, OSG::Group::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DistanceLOD::ObjRecPtr, OSG::Group::ObjCPtr>();
    }

}