// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:msg/Tool.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/tool__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/msg/tool__struct.hpp"

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
  const nourish_robot_arm_msgs::msg::Tool & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robhold
  cdr << (ros_message.robhold ? true : false);
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: z
  cdr << ros_message.z;
  // Member: q1
  cdr << ros_message.q1;
  // Member: q2
  cdr << ros_message.q2;
  // Member: q3
  cdr << ros_message.q3;
  // Member: q4
  cdr << ros_message.q4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::msg::Tool & ros_message)
{
  // Member: robhold
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robhold = tmp ? true : false;
  }

  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: z
  cdr >> ros_message.z;

  // Member: q1
  cdr >> ros_message.q1;

  // Member: q2
  cdr >> ros_message.q2;

  // Member: q3
  cdr >> ros_message.q3;

  // Member: q4
  cdr >> ros_message.q4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::msg::Tool & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robhold
  {
    size_t item_size = sizeof(ros_message.robhold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q1
  {
    size_t item_size = sizeof(ros_message.q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q2
  {
    size_t item_size = sizeof(ros_message.q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q3
  {
    size_t item_size = sizeof(ros_message.q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q4
  {
    size_t item_size = sizeof(ros_message.q4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_Tool(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: robhold
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: q1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: q2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: q3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: q4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Tool__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::Tool *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tool__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::msg::Tool *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tool__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::Tool *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tool__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tool(full_bounded, 0);
}

static message_type_support_callbacks_t _Tool__callbacks = {
  "nourish_robot_arm_msgs::msg",
  "Tool",
  _Tool__cdr_serialize,
  _Tool__cdr_deserialize,
  _Tool__get_serialized_size,
  _Tool__max_serialized_size
};

static rosidl_message_type_support_t _Tool__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tool__callbacks,
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
get_message_type_support_handle<nourish_robot_arm_msgs::msg::Tool>()
{
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_Tool__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, msg, Tool)() {
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_Tool__handle;
}

#ifdef __cplusplus
}
#endif
