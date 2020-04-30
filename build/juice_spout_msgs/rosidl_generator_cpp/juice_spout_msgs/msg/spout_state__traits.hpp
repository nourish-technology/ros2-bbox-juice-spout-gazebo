// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__TRAITS_HPP_
#define JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__TRAITS_HPP_

#include "juice_spout_msgs/msg/spout_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::msg::SpoutState>()
{
  return "juice_spout_msgs::msg::SpoutState";
}

template<>
struct has_fixed_size<juice_spout_msgs::msg::SpoutState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juice_spout_msgs::msg::SpoutState>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__TRAITS_HPP_
