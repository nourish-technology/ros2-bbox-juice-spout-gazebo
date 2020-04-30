// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juice_dcb_msgs:msg/CommandResult.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__MSG__COMMAND_RESULT__TRAITS_HPP_
#define JUICE_DCB_MSGS__MSG__COMMAND_RESULT__TRAITS_HPP_

#include "juice_dcb_msgs/msg/command_result__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_dcb_msgs::msg::CommandResult>()
{
  return "juice_dcb_msgs::msg::CommandResult";
}

template<>
struct has_fixed_size<juice_dcb_msgs::msg::CommandResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juice_dcb_msgs::msg::CommandResult>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // JUICE_DCB_MSGS__MSG__COMMAND_RESULT__TRAITS_HPP_
