// Copyright Abel Sinkovics (abel@sinkovics.hu) 2010.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <boost/metaparse/util/is_whitespace.hpp>

#include "common.hpp"

#include <boost/mpl/apply_wrap.hpp>
#include <boost/mpl/not.hpp>
#include <boost/mpl/assert.hpp>

#include "test_case.hpp"

BOOST_METAPARSE_TEST_CASE(util_is_whitespace)
{
  using boost::metaparse::util::is_whitespace;
  
  using boost::mpl::apply_wrap1;
  using boost::mpl::not_;

  // test_space
  BOOST_MPL_ASSERT((apply_wrap1<is_whitespace<>, char_space>));
  
  // test_tab
  BOOST_MPL_ASSERT((apply_wrap1<is_whitespace<>, char_tab>));
  
  // test_non_whitespace
  BOOST_MPL_ASSERT((not_<apply_wrap1<is_whitespace<>, char_a> >));
}

