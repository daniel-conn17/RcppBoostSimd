//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_MEIGHT_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_MEIGHT_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
    @ingroup group-constant

    Generate the constant meight.

    @return The Meight constant for the proper type
  **/
  template<typename T> T Meight();

  namespace functional
  {
    /*!
      @ingroup group-callable-constant
      Generate the  constant meight.

      @return The Meight constant for the proper type
    **/
    Value Meight();
  }
} }
#endif

#include <boost/simd/constant/definition/meight.hpp>
#include <boost/simd/arch/common/scalar/constant/constant_value.hpp>
#include <boost/simd/arch/common/simd/constant/constant_value.hpp>

#endif
