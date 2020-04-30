// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/work_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/msg/work_object__struct.hpp"

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
  const nourish_robot_arm_msgs::msg::WorkObject & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robhold
  cdr << (ros_message.robhold ? true : false);
  // Member: uframe_pos_x
  cdr << ros_message.uframe_pos_x;
  // Member: uframe_pos_y
  cdr << ros_message.uframe_pos_y;
  // Member: uframe_pos_z
  cdr << ros_message.uframe_pos_z;
  // Member: uframe_orient_q1
  cdr << ros_message.uframe_orient_q1;
  // Member: uframe_orient_q2
  cdr << ros_message.uframe_orient_q2;
  // Member: uframe_orient_q3
  cdr << ros_message.uframe_orient_q3;
  // Member: uframe_orient_q4
  cdr << ros_message.uframe_orient_q4;
  // Member: oframe_pos_x
  cdr << ros_message.oframe_pos_x;
  // Member: oframe_pos_y
  cdr << ros_message.oframe_pos_y;
  // Member: oframe_pos_z
  cdr << ros_message.oframe_pos_z;
  // Member: oframe_orient_q1
  cdr << ros_message.oframe_orient_q1;
  // Member: oframe_orient_q2
  cdr << ros_message.oframe_orient_q2;
  // Member: oframe_orient_q3
  cdr << ros_message.oframe_orient_q3;
  // Member: oframe_orient_q4
  cdr << ros_message.oframe_orient_q4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::msg::WorkObject & ros_message)
{
  // Member: robhold
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robhold = tmp ? true : false;
  }

  // Member: uframe_pos_x
  cdr >> ros_message.uframe_pos_x;

  // Member: uframe_pos_y
  cdr >> ros_message.uframe_pos_y;

  // Member: uframe_pos_z
  cdr >> ros_message.uframe_pos_z;

  // Member: uframe_orient_q1
  cdr >> ros_message.uframe_orient_q1;

  // Member: uframe_orient_q2
  cdr >> ros_message.uframe_orient_q2;

  // Member: uframe_orient_q3
  cdr >> ros_message.uframe_orient_q3;

  // Member: uframe_orient_q4
  cdr >> ros_message.uframe_orient_q4;

  // Member: oframe_pos_x
  cdr >> ros_message.oframe_pos_x;

  // Member: oframe_pos_y
  cdr >> ros_message.oframe_pos_y;

  // Member: oframe_pos_z
  cdr >> ros_message.oframe_pos_z;

  // Member: oframe_orient_q1
  cdr >> ros_message.oframe_orient_q1;

  // Member: oframe_orient_q2
  cdr >> ros_message.oframe_orient_q2;

  // Member: oframe_orient_q3
  cdr >> ros_message.oframe_orient_q3;

  // Member: oframe_orient_q4
  cdr >> ros_message.oframe_orient_q4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::msg::WorkObject & ros_message,
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
  // Member: uframe_pos_x
  {
    size_t item_size = sizeof(ros_message.uframe_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uframe_pos_y
  {
    size_t item_size = sizeof(ros_message.uframe_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uframe_pos_z
  {
    size_t item_size = sizeof(ros_message.uframe_pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uframe_orient_q1
  {
    size_t item_size = sizeof(ros_message.uframe_orient_q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uframe_orient_q2
  {
    size_t item_size = sizeof(ros_message.uframe_orient_q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uframe_orient_q3
  {
    size_t item_size = sizeof(ros_message.uframe_orient_q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uframe_orient_q4
  {
    size_t item_size = sizeof(ros_message.uframe_orient_q4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_pos_x
  {
    size_t item_size = sizeof(ros_message.oframe_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_pos_y
  {
    size_t item_size = sizeof(ros_message.oframe_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_pos_z
  {
    size_t item_size = sizeof(ros_message.oframe_pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_orient_q1
  {
    size_t item_size = sizeof(ros_message.oframe_orient_q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_orient_q2
  {
    size_t item_size = sizeof(ros_message.oframe_orient_q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_orient_q3
  {
    size_t item_size = sizeof(ros_message.oframe_orient_q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oframe_orient_q4
  {
    size_t item_size = sizeof(ros_message.oframe_orient_q4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_WorkObject(
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

  // Member: uframe_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uframe_pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uframe_pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uframe_orient_q1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uframe_orient_q2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uframe_orient_q3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uframe_orient_q4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_orient_q1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_orient_q2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_orient_q3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oframe_orient_q4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _WorkObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::WorkObject *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WorkObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::msg::WorkObject *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WorkObject__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::WorkObject *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WorkObject__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_WorkObject(full_bounded, 0);
}

static message_type_support_callbacks_t _WorkObject__callbacks = {
  "nourish_robot_arm_msgs::msg",
  "WorkObject",
  _WorkObject__cdr_serialize,
  _WorkObject__cdr_deserialize,
  _WorkObject__get_serialized_size,
  _WorkObject__max_serialized_size
};

static rosidl_message_type_support_t _WorkObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WorkObject__callbacks,
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
get_message_type_support_handle<nourish_robot_arm_msgs::msg::WorkObject>()
{
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_WorkObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, msg, WorkObject)() {
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_WorkObject__handle;
}

#ifdef __cplusplus
}
#endif
