//====================================================
//     File data
//====================================================
/**
 * @file cursor.hpp
 * @author Gianluca Bianco (biancogianluca9@gmail.com)
 * @date 2022-06-06
 * @copyright Copyright (c) 2022 Gianluca Bianco under the MIT license.
 */

//====================================================
//     Preprocessor settings
//====================================================
#pragma once
#ifndef OSMANIP_CURSOR_HPP
#define OSMANIP_CURSOR_HPP

//====================================================
//     Headers
//====================================================

//STD headers
#include <string>
#include <unordered_map>
#include <utility>

namespace osm
 {
  //====================================================
  //     Aliases
  //====================================================
  using string_pair_map = std::unordered_map <std::string, std::pair<std::string, std::string>>;

  //====================================================
  //     Variables
  //====================================================
  extern const std::unordered_map <std::string, std::string> tcs;
  extern const string_pair_map crs, tcsc;

  //====================================================
  //     Functions
  //====================================================
  extern const std::string feat( const string_pair_map& generic_map, const std::string& feat_string, int feat_int );
  extern const std::string go_to( int x, int y );
 }

#endif