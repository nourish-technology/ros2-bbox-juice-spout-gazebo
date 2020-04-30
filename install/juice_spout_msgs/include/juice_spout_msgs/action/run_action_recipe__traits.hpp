// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juice_spout_msgs:action/RunActionRecipe.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__TRAITS_HPP_
#define JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__TRAITS_HPP_

#include "juice_spout_msgs/action/run_action_recipe__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_Goal>()
{
  return "juice_spout_msgs::action::RunActionRecipe_Goal";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_Goal>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_Result>()
{
  return "juice_spout_msgs::action::RunActionRecipe_Result";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_Result>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_Feedback>()
{
  return "juice_spout_msgs::action::RunActionRecipe_Feedback";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "juice_spout_msgs/action/run_action_recipe__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_SendGoal_Request>()
{
  return "juice_spout_msgs::action::RunActionRecipe_SendGoal_Request";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<juice_spout_msgs::action::RunActionRecipe_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<juice_spout_msgs::action::RunActionRecipe_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_SendGoal_Response>()
{
  return "juice_spout_msgs::action::RunActionRecipe_SendGoal_Response";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_SendGoal>()
{
  return "juice_spout_msgs::action::RunActionRecipe_SendGoal";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Request>::value &&
    has_fixed_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Request>::value &&
    has_bounded_size<juice_spout_msgs::action::RunActionRecipe_SendGoal_Response>::value
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
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_GetResult_Request>()
{
  return "juice_spout_msgs::action::RunActionRecipe_GetResult_Request";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_GetResult_Response>()
{
  return "juice_spout_msgs::action::RunActionRecipe_GetResult_Response";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<juice_spout_msgs::action::RunActionRecipe_Result>::value> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<juice_spout_msgs::action::RunActionRecipe_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_GetResult>()
{
  return "juice_spout_msgs::action::RunActionRecipe_GetResult";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Request>::value &&
    has_fixed_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Request>::value &&
    has_bounded_size<juice_spout_msgs::action::RunActionRecipe_GetResult_Response>::value
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
// #include "juice_spout_msgs/action/run_action_recipe__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::action::RunActionRecipe_FeedbackMessage>()
{
  return "juice_spout_msgs::action::RunActionRecipe_FeedbackMessage";
}

template<>
struct has_fixed_size<juice_spout_msgs::action::RunActionRecipe_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<juice_spout_msgs::action::RunActionRecipe_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<juice_spout_msgs::action::RunActionRecipe_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<juice_spout_msgs::action::RunActionRecipe_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__TRAITS_HPP_
