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
#include "Matrix.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Matrix_class(){

    { //::OSG::TransformationMatrix< float >
        typedef bp::class_< OSG::TransformationMatrix< float > > Matrix_exposer_t;
        Matrix_exposer_t Matrix_exposer = Matrix_exposer_t( "Matrix", bp::init< >() );
        bp::scope Matrix_scope( Matrix_exposer );
        Matrix_exposer.def( bp::init< OSG::TransformationMatrix< float > const & >(( bp::arg("source") )) );
        Matrix_exposer.def( bp::init< OSG::Vector< float, 3u > const &, OSG::Vector< float, 3u > const &, OSG::Vector< float, 3u > const & >(( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3") )) );
        Matrix_exposer.def( bp::init< OSG::Vector< float, 4u > const &, OSG::Vector< float, 4u > const &, OSG::Vector< float, 4u > const &, OSG::Vector< float, 4u > const & >(( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3"), bp::arg("vector4") )) );
        Matrix_exposer.def( bp::init< OSG::Vector< float, 3u > const &, OSG::Vector< float, 3u > const &, OSG::Vector< float, 3u > const &, OSG::Vector< float, 3u > const & >(( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3"), bp::arg("vector4") )) );
        Matrix_exposer.def( bp::init< float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float >(( bp::arg("rVal00"), bp::arg("rVal10"), bp::arg("rVal20"), bp::arg("rVal30"), bp::arg("rVal01"), bp::arg("rVal11"), bp::arg("rVal21"), bp::arg("rVal31"), bp::arg("rVal02"), bp::arg("rVal12"), bp::arg("rVal22"), bp::arg("rVal32"), bp::arg("rVal03"), bp::arg("rVal13"), bp::arg("rVal23"), bp::arg("rVal33") )) );
        { //::OSG::TransformationMatrix< float >::add
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*add_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "add"
                , add_function_type( &::OSG::TransformationMatrix< float >::add )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::addScaled
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*addScaled_function_type )( ::OSG::TransformationMatrix< float > const &,float ) ;
            
            Matrix_exposer.def( 
                "addScaled"
                , addScaled_function_type( &::OSG::TransformationMatrix< float >::addScaled )
                , ( bp::arg("matrix"), bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::det
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef float ( exported_class_t::*det_function_type )(  ) const;
            
            Matrix_exposer.def( 
                "det"
                , det_function_type( &::OSG::TransformationMatrix< float >::det ) );
        
        }
        { //::OSG::TransformationMatrix< float >::det3
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef float ( exported_class_t::*det3_function_type )(  ) const;
            
            Matrix_exposer.def( 
                "det3"
                , det3_function_type( &::OSG::TransformationMatrix< float >::det3 ) );
        
        }
        { //::OSG::TransformationMatrix< float >::equals
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*equals_function_type )( ::OSG::TransformationMatrix< float > const &,float const ) const;
            
            Matrix_exposer.def( 
                "equals"
                , equals_function_type( &::OSG::TransformationMatrix< float >::equals )
                , ( bp::arg("matrix"), bp::arg("tolerance") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::exp
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*exp_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "exp"
                , exp_function_type( &::OSG::TransformationMatrix< float >::exp )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::expOf
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*expOf_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "expOf"
                , expOf_function_type( &::OSG::TransformationMatrix< float >::expOf )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::factor
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*factor_function_type )( ::OSG::TransformationMatrix< float > &,::OSG::Vector< float, 3u > &,::OSG::TransformationMatrix< float > &,::OSG::Vector< float, 3u > &,::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "factor"
                , factor_function_type( &::OSG::TransformationMatrix< float >::factor )
                , ( bp::arg("r"), bp::arg("s"), bp::arg("u"), bp::arg("t"), bp::arg("proj") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::identity
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef ::OSG::TransformationMatrix< float > const & ( *identity_function_type )(  );
            
            Matrix_exposer.def( 
                "identity"
                , identity_function_type( &::OSG::TransformationMatrix< float >::identity )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::TransformationMatrix< float >::inverse
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*inverse_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "inverse"
                , inverse_function_type( &::OSG::TransformationMatrix< float >::inverse )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::inverse3
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*inverse3_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "inverse3"
                , inverse3_function_type( &::OSG::TransformationMatrix< float >::inverse3 )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::invert
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*invert_function_type )(  ) ;
            
            Matrix_exposer.def( 
                "invert"
                , invert_function_type( &::OSG::TransformationMatrix< float >::invert ) );
        
        }
        { //::OSG::TransformationMatrix< float >::invert3
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*invert3_function_type )(  ) ;
            
            Matrix_exposer.def( 
                "invert3"
                , invert3_function_type( &::OSG::TransformationMatrix< float >::invert3 ) );
        
        }
        { //::OSG::TransformationMatrix< float >::invertFrom
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*invertFrom_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "invertFrom"
                , invertFrom_function_type( &::OSG::TransformationMatrix< float >::invertFrom )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::invertFrom3
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*invertFrom3_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "invertFrom3"
                , invertFrom3_function_type( &::OSG::TransformationMatrix< float >::invertFrom3 )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::log
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*log_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "log"
                , log_function_type( &::OSG::TransformationMatrix< float >::log )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::logOf
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*logOf_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "logOf"
                , logOf_function_type( &::OSG::TransformationMatrix< float >::logOf )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::mult
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Point< float, 4u > const &,::OSG::Point< float, 4u > & ) const;
            
            Matrix_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< float >::mult )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::mult
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Point< float, 3u > const &,::OSG::Point< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< float >::mult )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::mult
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Vector< float, 4u > const &,::OSG::Vector< float, 4u > & ) const;
            
            Matrix_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< float >::mult )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::mult
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*mult_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "mult"
                , mult_function_type( &::OSG::TransformationMatrix< float >::mult )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::mult3x3
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*mult3x3_function_type )( ::OSG::Point< float, 3u > const &,::OSG::Point< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "mult3x3"
                , mult3x3_function_type( &::OSG::TransformationMatrix< float >::mult3x3 )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::mult3x3
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*mult3x3_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "mult3x3"
                , mult3x3_function_type( &::OSG::TransformationMatrix< float >::mult3x3 )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::multFull
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*multFull_function_type )( ::OSG::Point< float, 3u > const &,::OSG::Point< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "multFull"
                , multFull_function_type( &::OSG::TransformationMatrix< float >::multFull )
                , ( bp::arg("pntIn"), bp::arg("pntOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::multFull
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*multFull_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "multFull"
                , multFull_function_type( &::OSG::TransformationMatrix< float >::multFull )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::multLeft
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*multLeft_function_type )( ::OSG::Point< float, 3u > const &,::OSG::Point< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "multLeft"
                , multLeft_function_type( &::OSG::TransformationMatrix< float >::multLeft )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::multLeft
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*multLeft_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "multLeft"
                , multLeft_function_type( &::OSG::TransformationMatrix< float >::multLeft )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::multLeftFull
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*multLeftFull_function_type )( ::OSG::Point< float, 3u > const &,::OSG::Point< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "multLeftFull"
                , multLeftFull_function_type( &::OSG::TransformationMatrix< float >::multLeftFull )
                , ( bp::arg("src"), bp::arg("dst") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::multLeftFull
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*multLeftFull_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > & ) const;
            
            Matrix_exposer.def( 
                "multLeftFull"
                , multLeftFull_function_type( &::OSG::TransformationMatrix< float >::multLeftFull )
                , ( bp::arg("vecIn"), bp::arg("vecOut") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::negate
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*negate_function_type )(  ) ;
            
            Matrix_exposer.def( 
                "negate"
                , negate_function_type( &::OSG::TransformationMatrix< float >::negate ) );
        
        }
        { //::OSG::TransformationMatrix< float >::norm1
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef float ( exported_class_t::*norm1_function_type )(  ) const;
            
            Matrix_exposer.def( 
                "norm1"
                , norm1_function_type( &::OSG::TransformationMatrix< float >::norm1 ) );
        
        }
        { //::OSG::TransformationMatrix< float >::norm2
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef float ( exported_class_t::*norm2_function_type )(  ) const;
            
            Matrix_exposer.def( 
                "norm2"
                , norm2_function_type( &::OSG::TransformationMatrix< float >::norm2 ) );
        
        }
        { //::OSG::TransformationMatrix< float >::normInfinity
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef float ( exported_class_t::*normInfinity_function_type )(  ) const;
            
            Matrix_exposer.def( 
                "normInfinity"
                , normInfinity_function_type( &::OSG::TransformationMatrix< float >::normInfinity ) );
        
        }
        Matrix_exposer.def( bp::self != bp::self );
        Matrix_exposer.def( bp::self * bp::other< OSG::Point< float, 4u > >() );
        Matrix_exposer.def( bp::self * bp::other< OSG::Point< float, 3u > >() );
        Matrix_exposer.def( bp::self * bp::other< OSG::Vector< float, 4u > >() );
        Matrix_exposer.def( bp::self * bp::other< OSG::Vector< float, 3u > >() );
        Matrix_exposer.def( bp::self == bp::self );
        { //::OSG::TransformationMatrix< float >::operator[]
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef ::OSG::Vector< float, 4u > & ( exported_class_t::*__getitem___function_type )( ::OSG::UInt32 ) ;
            
            Matrix_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::OSG::TransformationMatrix< float >::operator[] )
                , ( bp::arg("uiIndex") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TransformationMatrix< float >::scale
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*scale_function_type )( float ) ;
            
            Matrix_exposer.def( 
                "scale"
                , scale_function_type( &::OSG::TransformationMatrix< float >::scale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setIdentity
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setIdentity_function_type )(  ) ;
            
            Matrix_exposer.def( 
                "setIdentity"
                , setIdentity_function_type( &::OSG::TransformationMatrix< float >::setIdentity ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setRotate
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setRotate_function_type )( ::OSG::QuaternionBase< float > const & ) ;
            
            Matrix_exposer.def( 
                "setRotate"
                , setRotate_function_type( &::OSG::TransformationMatrix< float >::setRotate )
                , ( bp::arg("q") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setScale
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setScale_function_type )( float const ) ;
            
            Matrix_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::TransformationMatrix< float >::setScale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setScale
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setScale_function_type )( float const,float const,float const ) ;
            
            Matrix_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::TransformationMatrix< float >::setScale )
                , ( bp::arg("sx"), bp::arg("sy"), bp::arg("sz") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setScale
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setScale_function_type )( ::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setScale"
                , setScale_function_type( &::OSG::TransformationMatrix< float >::setScale )
                , ( bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTransform
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< float >::setTransform )
                , ( bp::arg("t") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTransform
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::QuaternionBase< float > const & ) ;
            
            Matrix_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< float >::setTransform )
                , ( bp::arg("r") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTransform
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::QuaternionBase< float > const & ) ;
            
            Matrix_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< float >::setTransform )
                , ( bp::arg("t"), bp::arg("r") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTransform
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::QuaternionBase< float > const &,::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< float >::setTransform )
                , ( bp::arg("t"), bp::arg("r"), bp::arg("s") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTransform
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::QuaternionBase< float > const &,::OSG::Vector< float, 3u > const &,::OSG::QuaternionBase< float > const & ) ;
            
            Matrix_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< float >::setTransform )
                , ( bp::arg("t"), bp::arg("r"), bp::arg("s"), bp::arg("so") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTransform
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTransform_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::QuaternionBase< float > const &,::OSG::Vector< float, 3u > const &,::OSG::QuaternionBase< float > const &,::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setTransform"
                , setTransform_function_type( &::OSG::TransformationMatrix< float >::setTransform )
                , ( bp::arg("translation"), bp::arg("rotation"), bp::arg("scaleFactor"), bp::arg("scaleOrientation"), bp::arg("center") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTranslate
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTranslate_function_type )( float const,float const,float const ) ;
            
            Matrix_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::OSG::TransformationMatrix< float >::setTranslate )
                , ( bp::arg("tx"), bp::arg("ty"), bp::arg("tz") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTranslate
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTranslate_function_type )( ::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::OSG::TransformationMatrix< float >::setTranslate )
                , ( bp::arg("t") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setTranslate
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setTranslate_function_type )( ::OSG::Point< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setTranslate"
                , setTranslate_function_type( &::OSG::TransformationMatrix< float >::setTranslate )
                , ( bp::arg("t") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("mat") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > const &,::OSG::Vector< float, 3u > const & ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("vector1"), bp::arg("vector2"), bp::arg("vector3"), bp::arg("vector4") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("rVal00"), bp::arg("rVal10"), bp::arg("rVal20"), bp::arg("rVal30"), bp::arg("rVal01"), bp::arg("rVal11"), bp::arg("rVal21"), bp::arg("rVal31"), bp::arg("rVal02"), bp::arg("rVal12"), bp::arg("rVal22"), bp::arg("rVal32"), bp::arg("rVal03"), bp::arg("rVal13"), bp::arg("rVal23"), bp::arg("rVal33") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< float, 4u > const * ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("pMat") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Vector< float, 3u > const * ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("pMat") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValue
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValue_function_type )( ::OSG::Char8 const *,bool ) ;
            
            Matrix_exposer.def( 
                "setValue"
                , setValue_function_type( &::OSG::TransformationMatrix< float >::setValue )
                , ( bp::arg("str"), bp::arg("bTransposed")=(bool)(true) ) );
        
        }
        { //::OSG::TransformationMatrix< float >::setValueTransposed
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef void ( exported_class_t::*setValueTransposed_function_type )( float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const,float const ) ;
            
            Matrix_exposer.def( 
                "setValueTransposed"
                , setValueTransposed_function_type( &::OSG::TransformationMatrix< float >::setValueTransposed )
                , ( bp::arg("rVal00"), bp::arg("rVal01"), bp::arg("rVal02"), bp::arg("rVal03"), bp::arg("rVal10"), bp::arg("rVal11"), bp::arg("rVal12"), bp::arg("rVal13"), bp::arg("rVal20"), bp::arg("rVal21"), bp::arg("rVal22"), bp::arg("rVal23"), bp::arg("rVal30"), bp::arg("rVal31"), bp::arg("rVal32"), bp::arg("rVal33") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::sqrt
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*sqrt_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "sqrt"
                , sqrt_function_type( &::OSG::TransformationMatrix< float >::sqrt )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::sqrt
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*sqrt_function_type )(  ) ;
            
            Matrix_exposer.def( 
                "sqrt"
                , sqrt_function_type( &::OSG::TransformationMatrix< float >::sqrt ) );
        
        }
        { //::OSG::TransformationMatrix< float >::sqrtOf
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*sqrtOf_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "sqrtOf"
                , sqrtOf_function_type( &::OSG::TransformationMatrix< float >::sqrtOf )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::transpose
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*transpose_function_type )(  ) ;
            
            Matrix_exposer.def( 
                "transpose"
                , transpose_function_type( &::OSG::TransformationMatrix< float >::transpose ) );
        
        }
        { //::OSG::TransformationMatrix< float >::transposeFrom
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*transposeFrom_function_type )( ::OSG::TransformationMatrix< float > const & ) ;
            
            Matrix_exposer.def( 
                "transposeFrom"
                , transposeFrom_function_type( &::OSG::TransformationMatrix< float >::transposeFrom )
                , ( bp::arg("matrix") ) );
        
        }
        { //::OSG::TransformationMatrix< float >::transposed
        
            typedef OSG::TransformationMatrix< float > exported_class_t;
            typedef bool ( exported_class_t::*transposed_function_type )( ::OSG::TransformationMatrix< float > & ) const;
            
            Matrix_exposer.def( 
                "transposed"
                , transposed_function_type( &::OSG::TransformationMatrix< float >::transposed )
                , ( bp::arg("result") ) );
        
        }
        Matrix_exposer.staticmethod( "identity" );
        Matrix_exposer.def("setValue", &osgwrap::setValueMatrix<float>, ( bp::arg("pMat"), bp::arg("bTransposed")=(bool)(true) ) );
        Matrix_exposer.def("getValues",osgwrap::getValuesMatrix<float>);
        Matrix_exposer.def("getTransform",osgwrap::getTransform_Matrix<float>);
        Matrix_exposer.def("mult",osgwrap::wrapMatrixMult<OSG::Real32, OSG::Real32>);
        Matrix_exposer.def("multLeft",osgwrap::wrapMatrixMultLeft<OSG::Real32, OSG::Real32>);
        Matrix_exposer.def("mult",osgwrap::wrapMatrixMult<OSG::Real32, OSG::Real64>);
        Matrix_exposer.def("multLeft",osgwrap::wrapMatrixMultLeft<OSG::Real32, OSG::Real64>);
        Matrix_exposer.def(boost::python::self_ns::str(boost::python::self));
    }

}