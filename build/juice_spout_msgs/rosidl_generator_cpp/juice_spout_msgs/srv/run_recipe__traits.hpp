// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juice_spout_msgs:srv/RunRecipe.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__TRAITS_HPP_
#define JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__TRAITS_HPP_

#include "juice_spout_msgs/srv/run_recipe__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::srv::RunRecipe_Request>()
{
  return "juice_spout_msgs::srv::RunRecipe_Request";
}

template<>
struct has_fixed_size<juice_spout_msgs::srv::RunRecipe_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juice_spout_msgs::srv::RunRecipe_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::srv::RunRecipe_Response>()
{
  return "juice_spout_msgs::srv::RunRecipe_Response";
}

template<>
struct has_fixed_size<juice_spout_msgs::srv::RunRecipe_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juice_spout_msgs::srv::RunRecipe_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juice_spout_msgs::srv::RunRecipe>()
{
  return "juice_spout_msgs::srv::RunRecipe";
}

template<>
struct has_fixed_size<juice_spout_msgs::srv::RunRecipe>
  : std::integral_constant<
    bool,
    has_fixed_size<juice_spout_msgs::srv::RunRecipe_Request>::value &&
    has_fixed_size<juice_spout_msgs::srv::RunRecipe_Response>::value
  >
{
};

template<>
struct has_bounded_size<juice_spout_msgs::srv::RunRecipe>
  : std::integral_constant<
    bool,
    has_bounded_size<juice_spout_msgs::srv::RunRecipe_Request>::value &&
    has_bounded_size<juice_spout_msgs::srv::RunRecipe_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__TRAITS_HPP_
