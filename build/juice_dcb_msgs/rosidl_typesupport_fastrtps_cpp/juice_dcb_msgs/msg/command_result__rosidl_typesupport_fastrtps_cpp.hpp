// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from juice_dcb_msgs:msg/CommandResult.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__MSG__COMMAND_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define JUICE_DCB_MSGS__MSG__COMMAND_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "juice_dcb_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "juice_dcb_msgs/msg/command_result__struct.hpp"

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

namespace juice_dcb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
cdr_serialize(
  const juice_dcb_msgs::msg::CommandResult & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_dcb_msgs::msg::CommandResult & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
get_serialized_size(
  const juice_dcb_msgs::msg::CommandResult & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
max_serialized_size_CommandResult(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace juice_dcb_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_dcb_msgs, msg, CommandResult)();

#ifdef __cplusplus
}
#endif

#endif  // JUICE_DCB_MSGS__MSG__COMMAND_RESULT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_