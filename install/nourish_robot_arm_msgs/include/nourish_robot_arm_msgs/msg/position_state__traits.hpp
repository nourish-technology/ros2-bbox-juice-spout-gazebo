// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_robot_arm_msgs:msg/PositionState.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__POSITION_STATE__TRAITS_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__POSITION_STATE__TRAITS_HPP_

#include "nourish_robot_arm_msgs/msg/position_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__traits.hpp"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::msg::PositionState>()
{
  return "nourish_robot_arm_msgs::msg::PositionState";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::msg::PositionState>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::Joint>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::msg::PositionState>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::Joint>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Pose>::value> {};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__POSITION_STATE__TRAITS_HPP_
