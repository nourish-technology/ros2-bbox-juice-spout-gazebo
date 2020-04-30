// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_robot_arm_msgs:srv/PollStatus.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__TRAITS_HPP_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__TRAITS_HPP_

#include "nourish_robot_arm_msgs/srv/poll_status__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::srv::PollStatus_Request>()
{
  return "nourish_robot_arm_msgs::srv::PollStatus_Request";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::srv::PollStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::srv::PollStatus_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "nourish_robot_arm_msgs/msg/robot_arm_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::srv::PollStatus_Response>()
{
  return "nourish_robot_arm_msgs::srv::PollStatus_Response";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::srv::PollStatus_Response>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::RobotArmState>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::srv::PollStatus_Response>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::RobotArmState>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::srv::PollStatus>()
{
  return "nourish_robot_arm_msgs::srv::PollStatus";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::srv::PollStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<nourish_robot_arm_msgs::srv::PollStatus_Request>::value &&
    has_fixed_size<nourish_robot_arm_msgs::srv::PollStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::srv::PollStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<nourish_robot_arm_msgs::srv::PollStatus_Request>::value &&
    has_bounded_size<nourish_robot_arm_msgs::srv::PollStatus_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__TRAITS_HPP_
