// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__TRAITS_HPP_
#define NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__TRAITS_HPP_

#include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'sensor_tool'
#include "nourish_robot_arm_msgs/msg/tool__traits.hpp"
// Member 'speed'
#include "nourish_robot_arm_msgs/msg/speed__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_Goal>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_Goal";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_Goal>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::Speed>::value && has_fixed_size<nourish_robot_arm_msgs::msg::Tool>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_Goal>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::Speed>::value && has_bounded_size<nourish_robot_arm_msgs::msg::Tool>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_Result>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_Result";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_Result>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_Result>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::msg::Pose>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_Feedback";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "nourish_robot_arm_msgs/action/register_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_SendGoal";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>::value &&
    has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>::value &&
    has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_Result>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_GetResult>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_GetResult";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>::value &&
    has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>::value &&
    has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage>()
{
  return "nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage";
}

template<>
struct has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__TRAITS_HPP_
