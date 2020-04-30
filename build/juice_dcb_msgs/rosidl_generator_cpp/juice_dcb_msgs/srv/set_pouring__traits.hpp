// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__SRV__SET_POURING__TRAITS_HPP_
#define JUICE_DCB_MSGS__SRV__SET_POURING__TRAITS_HPP_

#include "juice_dcb_msgs/srv/set_pouring__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_dcb_msgs::srv::SetPouring_Request>()
{
  return "juice_dcb_msgs::srv::SetPouring_Request";
}

template<>
struct has_fixed_size<juice_dcb_msgs::srv::SetPouring_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juice_dcb_msgs::srv::SetPouring_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "juice_dcb_msgs/msg/command_result__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_dcb_msgs::srv::SetPouring_Response>()
{
  return "juice_dcb_msgs::srv::SetPouring_Response";
}

template<>
struct has_fixed_size<juice_dcb_msgs::srv::SetPouring_Response>
  : std::integral_constant<bool, has_fixed_size<juice_dcb_msgs::msg::CommandResult>::value> {};

template<>
struct has_bounded_size<juice_dcb_msgs::srv::SetPouring_Response>
  : std::integral_constant<bool, has_bounded_size<juice_dcb_msgs::msg::CommandResult>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_dcb_msgs::srv::SetPouring>()
{
  return "juice_dcb_msgs::srv::SetPouring";
}

template<>
struct has_fixed_size<juice_dcb_msgs::srv::SetPouring>
  : std::integral_constant<
    bool,
    has_fixed_size<juice_dcb_msgs::srv::SetPouring_Request>::value &&
    has_fixed_size<juice_dcb_msgs::srv::SetPouring_Response>::value
  >
{
};

template<>
struct has_bounded_size<juice_dcb_msgs::srv::SetPouring>
  : std::integral_constant<
    bool,
    has_bounded_size<juice_dcb_msgs::srv::SetPouring_Request>::value &&
    has_bounded_size<juice_dcb_msgs::srv::SetPouring_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // JUICE_DCB_MSGS__SRV__SET_POURING__TRAITS_HPP_
