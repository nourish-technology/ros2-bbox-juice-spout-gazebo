// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:msg/Zone.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/zone__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/zone__struct.h"
#include "nourish_robot_arm_msgs/msg/zone__functions.h"
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


using _Zone__ros_msg_type = nourish_robot_arm_msgs__msg__Zone;

static bool _Zone__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Zone__ros_msg_type * ros_message = static_cast<const _Zone__ros_msg_type *>(untyped_ros_message);
  // Field name: fine_point
  {
    cdr << (ros_message->fine_point ? true : false);
  }

  // Field name: pzone_eax
  {
    cdr << ros_message->pzone_eax;
  }

  // Field name: pzone_ori
  {
    cdr << ros_message->pzone_ori;
  }

  // Field name: pzone_tcp
  {
    cdr << ros_message->pzone_tcp;
  }

  // Field name: leax
  {
    cdr << ros_message->leax;
  }

  // Field name: ori
  {
    cdr << ros_message->ori;
  }

  // Field name: reax
  {
    cdr << ros_message->reax;
  }

  return true;
}

static bool _Zone__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Zone__ros_msg_type * ros_message = static_cast<_Zone__ros_msg_type *>(untyped_ros_message);
  // Field name: fine_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fine_point = tmp ? true : false;
  }

  // Field name: pzone_eax
  {
    cdr >> ros_message->pzone_eax;
  }

  // Field name: pzone_ori
  {
    cdr >> ros_message->pzone_ori;
  }

  // Field name: pzone_tcp
  {
    cdr >> ros_message->pzone_tcp;
  }

  // Field name: leax
  {
    cdr >> ros_message->leax;
  }

  // Field name: ori
  {
    cdr >> ros_message->ori;
  }

  // Field name: reax
  {
    cdr >> ros_message->reax;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Zone(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Zone__ros_msg_type * ros_message = static_cast<const _Zone__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fine_point
  {
    size_t item_size = sizeof(ros_message->fine_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pzone_eax
  {
    size_t item_size = sizeof(ros_message->pzone_eax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pzone_ori
  {
    size_t item_size = sizeof(ros_message->pzone_ori);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pzone_tcp
  {
    size_t item_size = sizeof(ros_message->pzone_tcp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name leax
  {
    size_t item_size = sizeof(ros_message->leax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ori
  {
    size_t item_size = sizeof(ros_message->ori);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reax
  {
    size_t item_size = sizeof(ros_message->reax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Zone__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__msg__Zone(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__msg__Zone(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: fine_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pzone_eax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pzone_ori
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pzone_tcp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: leax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ori
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Zone__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__msg__Zone(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Zone = {
  "nourish_robot_arm_msgs::msg",
  "Zone",
  _Zone__cdr_serialize,
  _Zone__cdr_deserialize,
  _Zone__get_serialized_size,
  _Zone__max_serialized_size
};

static rosidl_message_type_support_t _Zone__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Zone,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Zone)() {
  return &_Zone__type_support;
}

#if defined(__cplusplus)
}
#endif
