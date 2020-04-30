// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_scale_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_SCALE_MSGS__MSG__RESPONSE__TRAITS_HPP_
#define NOURISH_SCALE_MSGS__MSG__RESPONSE__TRAITS_HPP_

#include "nourish_scale_msgs/msg/response__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_scale_msgs::msg::Response>()
{
  return "nourish_scale_msgs::msg::Response";
}

template<>
struct has_fixed_size<nourish_scale_msgs::msg::Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nourish_scale_msgs::msg::Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_SCALE_MSGS__MSG__RESPONSE__TRAITS_HPP_
