// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:msg/Acceleration.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/acceleration__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/msg/acceleration__struct.hpp"

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
  const nourish_robot_arm_msgs::msg::Acceleration & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: acceleration
  cdr << ros_message.acceleration;
  // Member: deceleration
  cdr << ros_message.deceleration;
  // Member: ramp
  cdr << ros_message.ramp;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::msg::Acceleration & ros_message)
{
  // Member: acceleration
  cdr >> ros_message.acceleration;

  // Member: deceleration
  cdr >> ros_message.deceleration;

  // Member: ramp
  cdr >> ros_message.ramp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::msg::Acceleration & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: acceleration
  {
    size_t item_size = sizeof(ros_message.acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: deceleration
  {
    size_t item_size = sizeof(ros_message.deceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ramp
  {
    size_t item_size = sizeof(ros_message.ramp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_Acceleration(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: deceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ramp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Acceleration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::Acceleration *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Acceleration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::msg::Acceleration *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Acceleration__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::Acceleration *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Acceleration__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Acceleration(full_bounded, 0);
}

static message_type_support_callbacks_t _Acceleration__callbacks = {
  "nourish_robot_arm_msgs::msg",
  "Acceleration",
  _Acceleration__cdr_serialize,
  _Acceleration__cdr_deserialize,
  _Acceleration__get_serialized_size,
  _Acceleration__max_serialized_size
};

static rosidl_message_type_support_t _Acceleration__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Acceleration__callbacks,
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
get_message_type_support_handle<nourish_robot_arm_msgs::msg::Acceleration>()
{
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_Acceleration__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, msg, Acceleration)() {
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_Acceleration__handle;
}

#ifdef __cplusplus
}
#endif
