// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__TRAITS_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__TRAITS_HPP_

#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::msg::RobotArmState>()
{
  return "nourish_robot_arm_msgs::msg::RobotArmState";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::msg::RobotArmState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::msg::RobotArmState>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__TRAITS_HPP_
