// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/robot_move__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/robot_move__struct.h"
#include "nourish_robot_arm_msgs/msg/robot_move__functions.h"
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

#include "nourish_robot_arm_msgs/msg/acceleration__functions.h"  // acceleration
#include "nourish_robot_arm_msgs/msg/joint__functions.h"  // joint
#include "nourish_robot_arm_msgs/msg/pose__functions.h"  // pose
#include "nourish_robot_arm_msgs/msg/speed__functions.h"  // speed
#include "nourish_robot_arm_msgs/msg/tool__functions.h"  // tool
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"  // work_object
#include "nourish_robot_arm_msgs/msg/zone__functions.h"  // zone

// forward declare type support functions
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Acceleration)();
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Joint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__Joint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Joint)();
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Pose)();
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Speed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__Speed(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Speed)();
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Tool(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__Tool(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Tool)();
size_t get_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, WorkObject)();
size_t get_serialized_size_nourish_robot_arm_msgs__msg__Zone(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_robot_arm_msgs__msg__Zone(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Zone)();


using _RobotMove__ros_msg_type = nourish_robot_arm_msgs__msg__RobotMove;

static bool _RobotMove__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotMove__ros_msg_type * ros_message = static_cast<const _RobotMove__ros_msg_type *>(untyped_ros_message);
  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->speed, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Acceleration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acceleration, cdr))
    {
      return false;
    }
  }

  // Field name: zone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Zone
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->zone, cdr))
    {
      return false;
    }
  }

  // Field name: tool
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Tool
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tool, cdr))
    {
      return false;
    }
  }

  // Field name: work_object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, WorkObject
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->work_object, cdr))
    {
      return false;
    }
  }

  // Field name: interpolation
  {
    cdr << ros_message->interpolation;
  }

  // Field name: target_type
  {
    cdr << ros_message->target_type;
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  // Field name: joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joint, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RobotMove__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotMove__ros_msg_type * ros_message = static_cast<_RobotMove__ros_msg_type *>(untyped_ros_message);
  // Field name: speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Speed
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->speed))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Acceleration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acceleration))
    {
      return false;
    }
  }

  // Field name: zone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Zone
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->zone))
    {
      return false;
    }
  }

  // Field name: tool
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Tool
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tool))
    {
      return false;
    }
  }

  // Field name: work_object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, WorkObject
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->work_object))
    {
      return false;
    }
  }

  // Field name: interpolation
  {
    cdr >> ros_message->interpolation;
  }

  // Field name: target_type
  {
    cdr >> ros_message->target_type;
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  // Field name: joint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Joint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joint))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__msg__RobotMove(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotMove__ros_msg_type * ros_message = static_cast<const _RobotMove__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name speed

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Speed(
    &(ros_message->speed), current_alignment);
  // field.name acceleration

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
    &(ros_message->acceleration), current_alignment);
  // field.name zone

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Zone(
    &(ros_message->zone), current_alignment);
  // field.name tool

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Tool(
    &(ros_message->tool), current_alignment);
  // field.name work_object

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
    &(ros_message->work_object), current_alignment);
  // field.name interpolation
  {
    size_t item_size = sizeof(ros_message->interpolation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_type
  {
    size_t item_size = sizeof(ros_message->target_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);
  // field.name joint

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Joint(
    &(ros_message->joint), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RobotMove__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__msg__RobotMove(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__msg__RobotMove(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Speed(
        full_bounded, current_alignment);
    }
  }
  // member: acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Acceleration(
        full_bounded, current_alignment);
    }
  }
  // member: zone
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Zone(
        full_bounded, current_alignment);
    }
  }
  // member: tool
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Tool(
        full_bounded, current_alignment);
    }
  }
  // member: work_object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
        full_bounded, current_alignment);
    }
  }
  // member: interpolation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }
  // member: joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Joint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotMove__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__msg__RobotMove(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotMove = {
  "nourish_robot_arm_msgs::msg",
  "RobotMove",
  _RobotMove__cdr_serialize,
  _RobotMove__cdr_deserialize,
  _RobotMove__get_serialized_size,
  _RobotMove__max_serialized_size
};

static rosidl_message_type_support_t _RobotMove__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotMove,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, RobotMove)() {
  return &_RobotMove__type_support;
}

#if defined(__cplusplus)
}
#endif
