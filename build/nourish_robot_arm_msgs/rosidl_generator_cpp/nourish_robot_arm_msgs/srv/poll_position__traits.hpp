// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__TRAITS_HPP_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__TRAITS_HPP_

#include "nourish_robot_arm_msgs/srv/poll_position__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'work_object'
#include "nourish_robot_arm_msgs/msg/work_object__traits.hpp"
// Member 'tool'
#include "nourish_robot_arm_msgs/msg/tool__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::srv::PollPosition_Request>()
{
  return "nourish_robot_arm_msgs::srv::PollPosition_Request";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::srv::PollPosition_Request>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::Tool>::value && has_fixed_size<nourish_robot_arm_msgs::msg::WorkObject>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::srv::PollPosition_Request>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::Tool>::value && has_bounded_size<nourish_robot_arm_msgs::msg::WorkObject>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__traits.hpp"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::srv::PollPosition_Response>()
{
  return "nourish_robot_arm_msgs::srv::PollPosition_Response";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::srv::PollPosition_Response>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::Joint>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::srv::PollPosition_Response>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::Joint>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Pose>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::srv::PollPosition>()
{
  return "nourish_robot_arm_msgs::srv::PollPosition";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::srv::PollPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<nourish_robot_arm_msgs::srv::PollPosition_Request>::value &&
    has_fixed_size<nourish_robot_arm_msgs::srv::PollPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::srv::PollPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<nourish_robot_arm_msgs::srv::PollPosition_Request>::value &&
    has_bounded_size<nourish_robot_arm_msgs::srv::PollPosition_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__TRAITS_HPP_
