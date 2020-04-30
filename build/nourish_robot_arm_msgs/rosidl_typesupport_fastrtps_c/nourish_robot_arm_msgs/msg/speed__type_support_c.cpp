// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:msg/Speed.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/speed__struct.h"
#include "nourish_robot_arm_msgs/msg/speed__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Speed__ros_msg_type = nourish_robot_arm_msgs__msg__Speed;

static bool _Speed__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Speed__ros_msg_type * ros_message = static_cast<const _Speed__ros_msg_type *>(untyped_ros_message);
  // Field name: v_leax
  {
    cdr << ros_message->v_leax;
  }

  // Field name: v_ori
  {
    cdr << ros_message->v_ori;
  }

  // Field name: v_reax
  {
    cdr << ros_message->v_reax;
  }

  // Field name: v_tcp
  {
    cdr << ros_message->v_tcp;
  }

  return true;
}

static bool _Speed__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Speed__ros_msg_type * ros_message = static_cast<_Speed__ros_msg_type *>(untyped_ros_message);
  // Field name: v_leax
  {
    cdr >> ros_message->v_leax;
  }

  // Field name: v_ori
  {
    cdr >> ros_message->v_ori;
  }

  // Field name: v_reax
  {
    cdr >> ros_message->v_reax;
  }

  // Field name: v_tcp
  {
    cdr >> ros_message->v_tcp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Speed(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Speed__ros_msg_type * ros_message = static_cast<const _Speed__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name v_leax
  {
    size_t item_size = sizeof(ros_message->v_leax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_ori
  {
    size_t item_size = sizeof(ros_message->v_ori);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_reax
  {
    size_t item_size = sizeof(ros_message->v_reax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_tcp
  {
    size_t item_size = sizeof(ros_message->v_tcp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Speed__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__msg__Speed(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__msg__Speed(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: v_leax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_ori
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_reax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_tcp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Speed__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__msg__Speed(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Speed = {
  "nourish_robot_arm_msgs::msg",
  "Speed",
  _Speed__cdr_serialize,
  _Speed__cdr_deserialize,
  _Speed__get_serialized_size,
  _Speed__max_serialized_size
};

static rosidl_message_type_support_t _Speed__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Speed,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Speed)() {
  return &_Speed__type_support;
}

#if defined(__cplusplus)
}
#endif
