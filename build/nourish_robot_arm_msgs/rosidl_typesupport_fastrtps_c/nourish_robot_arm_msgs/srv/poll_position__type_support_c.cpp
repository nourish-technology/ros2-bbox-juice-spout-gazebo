// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/srv/poll_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/srv/poll_position__struct.h"
#include "nourish_robot_arm_msgs/srv/poll_position__functions.h"
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

#include "nourish_robot_arm_msgs/msg/tool__functions.h"  // tool
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"  // work_object

// forward declare type support functions
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


using _PollPosition_Request__ros_msg_type = nourish_robot_arm_msgs__srv__PollPosition_Request;

static bool _PollPosition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PollPosition_Request__ros_msg_type * ros_message = static_cast<const _PollPosition_Request__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _PollPosition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PollPosition_Request__ros_msg_type * ros_message = static_cast<_PollPosition_Request__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PollPosition_Request__ros_msg_type * ros_message = static_cast<const _PollPosition_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name work_object

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
    &(ros_message->work_object), current_alignment);
  // field.name tool

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Tool(
    &(ros_message->tool), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PollPosition_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: work_object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__WorkObject(
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

  return current_alignment - initial_alignment;
}

static size_t _PollPosition_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PollPosition_Request = {
  "nourish_robot_arm_msgs::srv",
  "PollPosition_Request",
  _PollPosition_Request__cdr_serialize,
  _PollPosition_Request__cdr_deserialize,
  _PollPosition_Request__get_serialized_size,
  _PollPosition_Request__max_serialized_size
};

static rosidl_message_type_support_t _PollPosition_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PollPosition_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, srv, PollPosition_Request)() {
  return &_PollPosition_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_position__struct.h"
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_position__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "nourish_robot_arm_msgs/msg/joint__functions.h"  // joint
#include "nourish_robot_arm_msgs/msg/pose__functions.h"  // pose

// forward declare type support functions
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


using _PollPosition_Response__ros_msg_type = nourish_robot_arm_msgs__srv__PollPosition_Response;

static bool _PollPosition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PollPosition_Response__ros_msg_type * ros_message = static_cast<const _PollPosition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
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

  return true;
}

static bool _PollPosition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PollPosition_Response__ros_msg_type * ros_message = static_cast<_PollPosition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t get_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PollPosition_Response__ros_msg_type * ros_message = static_cast<const _PollPosition_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Joint(
    &(ros_message->joint), current_alignment);
  // field.name pose

  current_alignment += get_serialized_size_nourish_robot_arm_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PollPosition_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_robot_arm_msgs
size_t max_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
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
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_robot_arm_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PollPosition_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_robot_arm_msgs__srv__PollPosition_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PollPosition_Response = {
  "nourish_robot_arm_msgs::srv",
  "PollPosition_Response",
  _PollPosition_Response__cdr_serialize,
  _PollPosition_Response__cdr_deserialize,
  _PollPosition_Response__get_serialized_size,
  _PollPosition_Response__max_serialized_size
};

static rosidl_message_type_support_t _PollPosition_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PollPosition_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, srv, PollPosition_Response)() {
  return &_PollPosition_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_robot_arm_msgs/srv/poll_position.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PollPosition__callbacks = {
  "nourish_robot_arm_msgs::srv",
  "PollPosition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, srv, PollPosition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, srv, PollPosition_Response)(),
};

static rosidl_service_type_support_t PollPosition__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PollPosition__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, srv, PollPosition)() {
  return &PollPosition__handle;
}

#if defined(__cplusplus)
}
#endif
