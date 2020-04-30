// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/msg/spout_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "juice_spout_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "juice_spout_msgs/msg/spout_state__struct.h"
#include "juice_spout_msgs/msg/spout_state__functions.h"
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


using _SpoutState__ros_msg_type = juice_spout_msgs__msg__SpoutState;

static bool _SpoutState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpoutState__ros_msg_type * ros_message = static_cast<const _SpoutState__ros_msg_type *>(untyped_ros_message);
  // Field name: is_healthy
  {
    cdr << (ros_message->is_healthy ? true : false);
  }

  // Field name: is_busy
  {
    cdr << (ros_message->is_busy ? true : false);
  }

  // Field name: fill_level
  {
    cdr << ros_message->fill_level;
  }

  return true;
}

static bool _SpoutState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpoutState__ros_msg_type * ros_message = static_cast<_SpoutState__ros_msg_type *>(untyped_ros_message);
  // Field name: is_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_healthy = tmp ? true : false;
  }

  // Field name: is_busy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_busy = tmp ? true : false;
  }

  // Field name: fill_level
  {
    cdr >> ros_message->fill_level;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t get_serialized_size_juice_spout_msgs__msg__SpoutState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpoutState__ros_msg_type * ros_message = static_cast<const _SpoutState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_healthy
  {
    size_t item_size = sizeof(ros_message->is_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_busy
  {
    size_t item_size = sizeof(ros_message->is_busy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fill_level
  {
    size_t item_size = sizeof(ros_message->fill_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpoutState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_spout_msgs__msg__SpoutState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t max_serialized_size_juice_spout_msgs__msg__SpoutState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_busy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fill_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SpoutState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_spout_msgs__msg__SpoutState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpoutState = {
  "juice_spout_msgs::msg",
  "SpoutState",
  _SpoutState__cdr_serialize,
  _SpoutState__cdr_deserialize,
  _SpoutState__get_serialized_size,
  _SpoutState__max_serialized_size
};

static rosidl_message_type_support_t _SpoutState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpoutState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, msg, SpoutState)() {
  return &_SpoutState__type_support;
}

#if defined(__cplusplus)
}
#endif
