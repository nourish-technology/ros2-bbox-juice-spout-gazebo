// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from juice_spout_msgs:srv/SetFill.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/srv/set_fill__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "juice_spout_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "juice_spout_msgs/srv/set_fill__struct.h"
#include "juice_spout_msgs/srv/set_fill__functions.h"
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


using _SetFill_Request__ros_msg_type = juice_spout_msgs__srv__SetFill_Request;

static bool _SetFill_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetFill_Request__ros_msg_type * ros_message = static_cast<const _SetFill_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grams
  {
    cdr << ros_message->grams;
  }

  return true;
}

static bool _SetFill_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetFill_Request__ros_msg_type * ros_message = static_cast<_SetFill_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grams
  {
    cdr >> ros_message->grams;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t get_serialized_size_juice_spout_msgs__srv__SetFill_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetFill_Request__ros_msg_type * ros_message = static_cast<const _SetFill_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name grams
  {
    size_t item_size = sizeof(ros_message->grams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetFill_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_spout_msgs__srv__SetFill_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t max_serialized_size_juice_spout_msgs__srv__SetFill_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: grams
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetFill_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_spout_msgs__srv__SetFill_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetFill_Request = {
  "juice_spout_msgs::srv",
  "SetFill_Request",
  _SetFill_Request__cdr_serialize,
  _SetFill_Request__cdr_deserialize,
  _SetFill_Request__get_serialized_size,
  _SetFill_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetFill_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetFill_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, SetFill_Request)() {
  return &_SetFill_Request__type_support;
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
// #include "juice_spout_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "juice_spout_msgs/srv/set_fill__struct.h"
// already included above
// #include "juice_spout_msgs/srv/set_fill__functions.h"
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


// forward declare type support functions


using _SetFill_Response__ros_msg_type = juice_spout_msgs__srv__SetFill_Response;

static bool _SetFill_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetFill_Response__ros_msg_type * ros_message = static_cast<const _SetFill_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _SetFill_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetFill_Response__ros_msg_type * ros_message = static_cast<_SetFill_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t get_serialized_size_juice_spout_msgs__srv__SetFill_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetFill_Response__ros_msg_type * ros_message = static_cast<const _SetFill_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _SetFill_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_spout_msgs__srv__SetFill_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t max_serialized_size_juice_spout_msgs__srv__SetFill_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _SetFill_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_spout_msgs__srv__SetFill_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetFill_Response = {
  "juice_spout_msgs::srv",
  "SetFill_Response",
  _SetFill_Response__cdr_serialize,
  _SetFill_Response__cdr_deserialize,
  _SetFill_Response__get_serialized_size,
  _SetFill_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetFill_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetFill_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, SetFill_Response)() {
  return &_SetFill_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "juice_spout_msgs/srv/set_fill.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetFill__callbacks = {
  "juice_spout_msgs::srv",
  "SetFill",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, SetFill_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, SetFill_Response)(),
};

static rosidl_service_type_support_t SetFill__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetFill__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, SetFill)() {
  return &SetFill__handle;
}

#if defined(__cplusplus)
}
#endif
