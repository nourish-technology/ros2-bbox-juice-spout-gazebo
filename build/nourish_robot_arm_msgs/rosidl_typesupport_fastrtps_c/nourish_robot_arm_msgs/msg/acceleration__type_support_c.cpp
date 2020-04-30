// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:msg/Acceleration.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/acceleration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/acceleration__struct.h"
#include "nourish_robot_arm_msgs/msg/acceleration__functions.h"
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


using _Acceleration__ros_msg_type = nourish_robot_arm_msgs__msg__Acceleration;

static bool _Acceleration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Acceleration__ros_msg_type * ros_message = static_cast<const _Acceleration__ros_msg_type *>(untyped_ros_message);
  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: deceleration
  {
    cdr << ros_message->deceleration;
  }

  // Field name: ramp
  {
    cdr << ros_message->ramp;
  }

  return true;
}

static bool _Acceleration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Acceleration__ros_msg_type * ros_message = static_cast<_Acceleration__ros_msg_type *>(untyped_ros_message);
  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: deceleration
  {
    cdr >> ros_message->deceleration;
  }

  // Field name: ramp
  {
    cdr >> ros_message->ramp;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Acceleration__ros_msg_type * ros_message = static_cast<const _Acceleration__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name deceleration
  {
    size_t item_size = sizeof(ros_message->deceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ramp
  {
    size_t item_size = sizeof(ros_message->ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Acceleration__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: deceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ramp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Acceleration__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Acceleration = {
  "nourish_robot_arm_msgs::msg",
  "Acceleration",
  _Acceleration__cdr_serialize,
  _Acceleration__cdr_deserialize,
  _Acceleration__get_serialized_size,
  _Acceleration__max_serialized_size
};

static rosidl_message_type_support_t _Acceleration__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Acceleration,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Acceleration)() {
  return &_Acceleration__type_support;
}

#if defined(__cplusplus)
}
#endif
