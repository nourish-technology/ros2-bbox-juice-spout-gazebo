// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "juice_spout_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "juice_spout_msgs/msg/spout_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace juice_spout_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_serialize(
  const juice_spout_msgs::msg::SpoutState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_spout_msgs::msg::SpoutState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
get_serialized_size(
  const juice_spout_msgs::msg::SpoutState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
max_serialized_size_SpoutState(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace juice_spout_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, msg, SpoutState)();

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
