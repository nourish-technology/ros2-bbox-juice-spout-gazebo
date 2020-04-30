// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nourish_scale_msgs:srv/Tare.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_SCALE_MSGS__SRV__TARE__TRAITS_HPP_
#define NOURISH_SCALE_MSGS__SRV__TARE__TRAITS_HPP_

#include "nourish_scale_msgs/srv/tare__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_scale_msgs::srv::Tare_Request>()
{
  return "nourish_scale_msgs::srv::Tare_Request";
}

template<>
struct has_fixed_size<nourish_scale_msgs::srv::Tare_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nourish_scale_msgs::srv::Tare_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
#include "nourish_scale_msgs/msg/response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_scale_msgs::srv::Tare_Response>()
{
  return "nourish_scale_msgs::srv::Tare_Response";
}

template<>
struct has_fixed_size<nourish_scale_msgs::srv::Tare_Response>
  : std::integral_constant<bool, has_fixed_size<nourish_scale_msgs::msg::Response>::value> {};

template<>
struct has_bounded_size<nourish_scale_msgs::srv::Tare_Response>
  : std::integral_constant<bool, has_bounded_size<nourish_scale_msgs::msg::Response>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nourish_scale_msgs::srv::Tare>()
{
  return "nourish_scale_msgs::srv::Tare";
}

template<>
struct has_fixed_size<nourish_scale_msgs::srv::Tare>
  : std::integral_constant<
    bool,
    has_fixed_size<nourish_scale_msgs::srv::Tare_Request>::value &&
    has_fixed_size<nourish_scale_msgs::srv::Tare_Response>::value
  >
{
};

template<>
struct has_bounded_size<nourish_scale_msgs::srv::Tare>
  : std::integral_constant<
    bool,
    has_bounded_size<nourish_scale_msgs::srv::Tare_Request>::value &&
    has_bounded_size<nourish_scale_msgs::srv::Tare_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NOURISH_SCALE_MSGS__SRV__TARE__TRAITS_HPP_
