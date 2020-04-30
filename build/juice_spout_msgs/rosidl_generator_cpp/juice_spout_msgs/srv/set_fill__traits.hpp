// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juice_spout_msgs:srv/SetFill.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__SRV__SET_FILL__TRAITS_HPP_
#define JUICE_SPOUT_MSGS__SRV__SET_FILL__TRAITS_HPP_

#include "juice_spout_msgs/srv/set_fill__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::srv::SetFill_Request>()
{
  return "juice_spout_msgs::srv::SetFill_Request";
}

template<>
struct has_fixed_size<juice_spout_msgs::srv::SetFill_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juice_spout_msgs::srv::SetFill_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::srv::SetFill_Response>()
{
  return "juice_spout_msgs::srv::SetFill_Response";
}

template<>
struct has_fixed_size<juice_spout_msgs::srv::SetFill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juice_spout_msgs::srv::SetFill_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::srv::SetFill>()
{
  return "juice_spout_msgs::srv::SetFill";
}

template<>
struct has_fixed_size<juice_spout_msgs::srv::SetFill>
  : std::integral_constant<
    bool,
    has_fixed_size<juice_spout_msgs::srv::SetFill_Request>::value &&
    has_fixed_size<juice_spout_msgs::srv::SetFill_Response>::value
  >
{
};

template<>
struct has_bounded_size<juice_spout_msgs::srv::SetFill>
  : std::integral_constant<
    bool,
    has_bounded_size<juice_spout_msgs::srv::SetFill_Request>::value &&
    has_bounded_size<juice_spout_msgs::srv::SetFill_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // JUICE_SPOUT_MSGS__SRV__SET_FILL__TRAITS_HPP_
