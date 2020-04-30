// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/robot_arm_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace nourish_robot_arm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::msg::RobotArmState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_connected
  cdr << (ros_message.is_connected ? true : false);
  // Member: motion_program_is_running
  cdr << (ros_message.motion_program_is_running ? true : false);
  // Member: registration_sensor_is_activated
  cdr << (ros_message.registration_sensor_is_activated ? true : false);
  // Member: is_waiting
  cdr << (ros_message.is_waiting ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::msg::RobotArmState & ros_message)
{
  // Member: is_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_connected = tmp ? true : false;
  }

  // Member: motion_program_is_running
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.motion_program_is_running = tmp ? true : false;
  }

  // Member: registration_sensor_is_activated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.registration_sensor_is_activated = tmp ? true : false;
  }

  // Member: is_waiting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_waiting = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::msg::RobotArmState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_connected
  {
    size_t item_size = sizeof(ros_message.is_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motion_program_is_running
  {
    size_t item_size = sizeof(ros_message.motion_program_is_running);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: registration_sensor_is_activated
  {
    size_t item_size = sizeof(ros_message.registration_sensor_is_activated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_waiting
  {
    size_t item_size = sizeof(ros_message.is_waiting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RobotArmState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motion_program_is_running
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: registration_sensor_is_activated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_waiting
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RobotArmState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::RobotArmState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotArmState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::msg::RobotArmState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotArmState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::RobotArmState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotArmState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotArmState(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotArmState__callbacks = {
  "nourish_robot_arm_msgs::msg",
  "RobotArmState",
  _RobotArmState__cdr_serialize,
  _RobotArmState__cdr_deserialize,
  _RobotArmState__get_serialized_size,
  _RobotArmState__max_serialized_size
};

static rosidl_message_type_support_t _RobotArmState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotArmState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::msg::RobotArmState>()
{
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_RobotArmState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, msg, RobotArmState)() {
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_RobotArmState__handle;
}

#ifdef __cplusplus
}
#endif
