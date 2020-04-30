// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/msg/spout_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "juice_spout_msgs/msg/spout_state__struct.hpp"

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_healthy
  cdr << (ros_message.is_healthy ? true : false);
  // Member: is_busy
  cdr << (ros_message.is_busy ? true : false);
  // Member: fill_level
  cdr << ros_message.fill_level;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_spout_msgs::msg::SpoutState & ros_message)
{
  // Member: is_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_healthy = tmp ? true : false;
  }

  // Member: is_busy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_busy = tmp ? true : false;
  }

  // Member: fill_level
  cdr >> ros_message.fill_level;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
get_serialized_size(
  const juice_spout_msgs::msg::SpoutState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_healthy
  {
    size_t item_size = sizeof(ros_message.is_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_busy
  {
    size_t item_size = sizeof(ros_message.is_busy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fill_level
  {
    size_t item_size = sizeof(ros_message.fill_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
max_serialized_size_SpoutState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_busy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fill_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SpoutState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const juice_spout_msgs::msg::SpoutState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpoutState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<juice_spout_msgs::msg::SpoutState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpoutState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const juice_spout_msgs::msg::SpoutState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpoutState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpoutState(full_bounded, 0);
}

static message_type_support_callbacks_t _SpoutState__callbacks = {
  "juice_spout_msgs::msg",
  "SpoutState",
  _SpoutState__cdr_serialize,
  _SpoutState__cdr_deserialize,
  _SpoutState__get_serialized_size,
  _SpoutState__max_serialized_size
};

static rosidl_message_type_support_t _SpoutState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpoutState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace juice_spout_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<juice_spout_msgs::msg::SpoutState>()
{
  return &juice_spout_msgs::msg::typesupport_fastrtps_cpp::_SpoutState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, msg, SpoutState)() {
  return &juice_spout_msgs::msg::typesupport_fastrtps_cpp::_SpoutState__handle;
}

#ifdef __cplusplus
}
#endif
