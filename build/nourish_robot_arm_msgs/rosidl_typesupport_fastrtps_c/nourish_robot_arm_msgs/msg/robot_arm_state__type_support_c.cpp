// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/robot_arm_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.h"
#include "nourish_robot_arm_msgs/msg/robot_arm_state__functions.h"
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


using _RobotArmState__ros_msg_type = nourish_robot_arm_msgs__msg__RobotArmState;

static bool _RobotArmState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotArmState__ros_msg_type * ros_message = static_cast<const _RobotArmState__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    cdr << (ros_message->is_connected ? true : false);
  }

  // Field name: motion_program_is_running
  {
    cdr << (ros_message->motion_program_is_running ? true : false);
  }

  // Field name: registration_sensor_is_activated
  {
    cdr << (ros_message->registration_sensor_is_activated ? true : false);
  }

  // Field name: is_waiting
  {
    cdr << (ros_message->is_waiting ? true : false);
  }

  return true;
}

static bool _RobotArmState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotArmState__ros_msg_type * ros_message = static_cast<_RobotArmState__ros_msg_type *>(untyped_ros_message);
  // Field name: is_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_connected = tmp ? true : false;
  }

  // Field name: motion_program_is_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motion_program_is_running = tmp ? true : false;
  }

  // Field name: registration_sensor_is_activated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->registration_sensor_is_activated = tmp ? true : false;
  }

  // Field name: is_waiting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_waiting = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__msg__RobotArmState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotArmState__ros_msg_type * ros_message = static_cast<const _RobotArmState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_connected
  {
    size_t item_size = sizeof(ros_message->is_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_program_is_running
  {
    size_t item_size = sizeof(ros_message->motion_program_is_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name registration_sensor_is_activated
  {
    size_t item_size = sizeof(ros_message->registration_sensor_is_activated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_waiting
  {
    size_t item_size = sizeof(ros_message->is_waiting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotArmState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__msg__RobotArmState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__msg__RobotArmState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motion_program_is_running
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: registration_sensor_is_activated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_waiting
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotArmState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__msg__RobotArmState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotArmState = {
  "nourish_robot_arm_msgs::msg",
  "RobotArmState",
  _RobotArmState__cdr_serialize,
  _RobotArmState__cdr_deserialize,
  _RobotArmState__get_serialized_size,
  _RobotArmState__max_serialized_size
};

static rosidl_message_type_support_t _RobotArmState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotArmState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, RobotArmState)() {
  return &_RobotArmState__type_support;
}

#if defined(__cplusplus)
}
#endif
