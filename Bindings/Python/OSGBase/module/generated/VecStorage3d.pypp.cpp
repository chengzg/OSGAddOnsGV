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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "VecStorage3d.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_VecStorage3d_class(){

    { //::OSG::VecStorage3< double >
        typedef bp::class_< OSG::VecStorage3< double >, boost::noncopyable > VecStorage3d_exposer_t;
        VecStorage3d_exposer_t VecStorage3d_exposer = VecStorage3d_exposer_t( "VecStorage3d", bp::init< >() );
        bp::scope VecStorage3d_scope( VecStorage3d_exposer );
        { //::OSG::VecStorage3< double >::setValues
        
            typedef OSG::VecStorage3< double > exported_class_t;
            typedef void ( exported_class_t::*setValues_function_type )( double const,double const,double const ) ;
            
            VecStorage3d_exposer.def( 
                "setValues"
                , setValues_function_type( &::OSG::VecStorage3< double >::setValues )
                , ( bp::arg("rVal1"), bp::arg("rVal2"), bp::arg("rVal3") ) );
        
        }
        { //::OSG::VecStorage3< double >::x
        
            typedef OSG::VecStorage3< double > exported_class_t;
            typedef double ( exported_class_t::*x_function_type )(  ) const;
            
            VecStorage3d_exposer.def( 
                "x"
                , x_function_type( &::OSG::VecStorage3< double >::x ) );
        
        }
        { //::OSG::VecStorage3< double >::y
        
            typedef OSG::VecStorage3< double > exported_class_t;
            typedef double ( exported_class_t::*y_function_type )(  ) const;
            
            VecStorage3d_exposer.def( 
                "y"
                , y_function_type( &::OSG::VecStorage3< double >::y ) );
        
        }
        { //::OSG::VecStorage3< double >::z
        
            typedef OSG::VecStorage3< double > exported_class_t;
            typedef double ( exported_class_t::*z_function_type )(  ) const;
            
            VecStorage3d_exposer.def( 
                "z"
                , z_function_type( &::OSG::VecStorage3< double >::z ) );
        
        }
        VecStorage3d_exposer.def("getSeparateValues",&osgwrap::VecStorage3_getSeparateValues_tuple<OSG::Real64>);
    }

}