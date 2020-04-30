// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/work_object__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/work_object__struct.h"
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"
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


using _WorkObject__ros_msg_type = nourish_robot_arm_msgs__msg__WorkObject;

static bool _WorkObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WorkObject__ros_msg_type * ros_message = static_cast<const _WorkObject__ros_msg_type *>(untyped_ros_message);
  // Field name: robhold
  {
    cdr << (ros_message->robhold ? true : false);
  }

  // Field name: uframe_pos_x
  {
    cdr << ros_message->uframe_pos_x;
  }

  // Field name: uframe_pos_y
  {
    cdr << ros_message->uframe_pos_y;
  }

  // Field name: uframe_pos_z
  {
    cdr << ros_message->uframe_pos_z;
  }

  // Field name: uframe_orient_q1
  {
    cdr << ros_message->uframe_orient_q1;
  }

  // Field name: uframe_orient_q2
  {
    cdr << ros_message->uframe_orient_q2;
  }

  // Field name: uframe_orient_q3
  {
    cdr << ros_message->uframe_orient_q3;
  }

  // Field name: uframe_orient_q4
  {
    cdr << ros_message->uframe_orient_q4;
  }

  // Field name: oframe_pos_x
  {
    cdr << ros_message->oframe_pos_x;
  }

  // Field name: oframe_pos_y
  {
    cdr << ros_message->oframe_pos_y;
  }

  // Field name: oframe_pos_z
  {
    cdr << ros_message->oframe_pos_z;
  }

  // Field name: oframe_orient_q1
  {
    cdr << ros_message->oframe_orient_q1;
  }

  // Field name: oframe_orient_q2
  {
    cdr << ros_message->oframe_orient_q2;
  }

  // Field name: oframe_orient_q3
  {
    cdr << ros_message->oframe_orient_q3;
  }

  // Field name: oframe_orient_q4
  {
    cdr << ros_message->oframe_orient_q4;
  }

  return true;
}

static bool _WorkObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WorkObject__ros_msg_type * ros_message = static_cast<_WorkObject__ros_msg_type *>(untyped_ros_message);
  // Field name: robhold
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->robhold = tmp ? true : false;
  }

  // Field name: uframe_pos_x
  {
    cdr >> ros_message->uframe_pos_x;
  }

  // Field name: uframe_pos_y
  {
    cdr >> ros_message->uframe_pos_y;
  }

  // Field name: uframe_pos_z
  {
    cdr >> ros_message->uframe_pos_z;
  }

  // Field name: uframe_orient_q1
  {
    cdr >> ros_message->uframe_orient_q1;
  }

  // Field name: uframe_orient_q2
  {
    cdr >> ros_message->uframe_orient_q2;
  }

  // Field name: uframe_orient_q3
  {
    cdr >> ros_message->uframe_orient_q3;
  }

  // Field name: uframe_orient_q4
  {
    cdr >> ros_message->uframe_orient_q4;
  }

  // Field name: oframe_pos_x
  {
    cdr >> ros_message->oframe_pos_x;
  }

  // Field name: oframe_pos_y
  {
    cdr >> ros_message->oframe_pos_y;
  }

  // Field name: oframe_pos_z
  {
    cdr >> ros_message->oframe_pos_z;
  }

  // Field name: oframe_orient_q1
  {
    cdr >> ros_message->oframe_orient_q1;
  }

  // Field name: oframe_orient_q2
  {
    cdr >> ros_message->oframe_orient_q2;
  }

  // Field name: oframe_orient_q3
  {
    cdr >> ros_message->oframe_orient_q3;
  }

  // Field name: oframe_orient_q4
  {
    cdr >> ros_message->oframe_orient_q4;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WorkObject__ros_msg_type * ros_message = static_cast<const _WorkObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robhold
  {
    size_t item_size = sizeof(ros_message->robhold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_pos_x
  {
    size_t item_size = sizeof(ros_message->uframe_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_pos_y
  {
    size_t item_size = sizeof(ros_message->uframe_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_pos_z
  {
    size_t item_size = sizeof(ros_message->uframe_pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_orient_q1
  {
    size_t item_size = sizeof(ros_message->uframe_orient_q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_orient_q2
  {
    size_t item_size = sizeof(ros_message->uframe_orient_q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_orient_q3
  {
    size_t item_size = sizeof(ros_message->uframe_orient_q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uframe_orient_q4
  {
    size_t item_size = sizeof(ros_message->uframe_orient_q4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_pos_x
  {
    size_t item_size = sizeof(ros_message->oframe_pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_pos_y
  {
    size_t item_size = sizeof(ros_message->oframe_pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_pos_z
  {
    size_t item_size = sizeof(ros_message->oframe_pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_orient_q1
  {
    size_t item_size = sizeof(ros_message->oframe_orient_q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_orient_q2
  {
    size_t item_size = sizeof(ros_message->oframe_orient_q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_orient_q3
  {
    size_t item_size = sizeof(ros_message->oframe_orient_q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oframe_orient_q4
  {
    size_t item_size = sizeof(ros_message->oframe_orient_q4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WorkObject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robhold
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uframe_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uframe_pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uframe_pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uframe_orient_q1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uframe_orient_q2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uframe_orient_q3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uframe_orient_q4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_orient_q1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_orient_q2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_orient_q3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oframe_orient_q4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _WorkObject__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WorkObject = {
  "nourish_robot_arm_msgs::msg",
  "WorkObject",
  _WorkObject__cdr_serialize,
  _WorkObject__cdr_deserialize,
  _WorkObject__get_serialized_size,
  _WorkObject__max_serialized_size
};

static rosidl_message_type_support_t _WorkObject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WorkObject,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, WorkObject)() {
  return &_WorkObject__type_support;
}

#if defined(__cplusplus)
}
#endif
