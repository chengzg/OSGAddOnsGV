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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DepthClearBackground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DepthClearBackground_class(){

    { //::OSG::DepthClearBackground
        typedef bp::class_< OSG::DepthClearBackground, bp::bases< OSG::DepthClearBackgroundBase >, OSG::DepthClearBackground::ObjRecPtr, boost::noncopyable > DepthClearBackground_exposer_t;
        DepthClearBackground_exposer_t DepthClearBackground_exposer = DepthClearBackground_exposer_t( "DepthClearBackground", bp::no_init );
        bp::scope DepthClearBackground_scope( DepthClearBackground_exposer );
        { //::OSG::DepthClearBackground::changed
        
            typedef void ( ::OSG::DepthClearBackground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DepthClearBackground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DepthClearBackground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::DepthClearBackground::clear
        
            typedef void ( ::OSG::DepthClearBackground::*clear_function_type )( ::OSG::DrawEnv * ) ;
            
            DepthClearBackground_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::DepthClearBackground::clear )
                , ( bp::arg("arg0") ) );
        
        }
        { //::OSG::DepthClearBackground::dump
        
            typedef void ( ::OSG::DepthClearBackground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DepthClearBackground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DepthClearBackground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::DepthClearBackground >::execute();
        bp::implicitly_convertible< OSG::DepthClearBackground::ObjRecPtr, OSG::DepthClearBackground* >();
        bp::implicitly_convertible< OSG::DepthClearBackground::ObjRecPtr, OSG::DepthClearBackground::ObjCPtr >();
        bp::implicitly_convertible< OSG::DepthClearBackground::ObjRecPtr, OSG::Background* >();
        bp::implicitly_convertible< OSG::DepthClearBackground::ObjRecPtr, OSG::Background::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DepthClearBackground::ObjRecPtr, OSG::Background::ObjCPtr>();
    }

}