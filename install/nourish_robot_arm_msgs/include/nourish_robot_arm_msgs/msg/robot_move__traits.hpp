// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__TRAITS_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__TRAITS_HPP_

#include "nourish_robot_arm_msgs/msg/robot_move__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'speed'
#include "nourish_robot_arm_msgs/msg/speed__traits.hpp"
// Member 'acceleration'
#include "nourish_robot_arm_msgs/msg/acceleration__traits.hpp"
// Member 'zone'
#include "nourish_robot_arm_msgs/msg/zone__traits.hpp"
// Member 'tool'
#include "nourish_robot_arm_msgs/msg/tool__traits.hpp"
// Member 'work_object'
#include "nourish_robot_arm_msgs/msg/work_object__traits.hpp"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__traits.hpp"
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::msg::RobotMove>()
{
  return "nourish_robot_arm_msgs::msg::RobotMove";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::msg::RobotMove>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::Acceleration>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Joint>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Pose>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Speed>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Tool>::value && has_fixed_size<nourish_robot_arm_msgs::msg::WorkObject>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Zone>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::msg::RobotMove>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::Acceleration>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Joint>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Pose>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Speed>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Tool>::value && has_bounded_size<nourish_robot_arm_msgs::msg::WorkObject>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Zone>::value> {};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__TRAITS_HPP_
