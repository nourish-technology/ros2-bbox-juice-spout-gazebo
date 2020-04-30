// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice
#include "juice_dcb_msgs/srv/set_pouring__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "juice_dcb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "juice_dcb_msgs/srv/set_pouring__struct.h"
#include "juice_dcb_msgs/srv/set_pouring__functions.h"
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


using _SetPouring_Request__ros_msg_type = juice_dcb_msgs__srv__SetPouring_Request;

static bool _SetPouring_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPouring_Request__ros_msg_type * ros_message = static_cast<const _SetPouring_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: spout_num
  {
    cdr << ros_message->spout_num;
  }

  // Field name: pour
  {
    cdr << (ros_message->pour ? true : false);
  }

  return true;
}

static bool _SetPouring_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPouring_Request__ros_msg_type * ros_message = static_cast<_SetPouring_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: spout_num
  {
    cdr >> ros_message->spout_num;
  }

  // Field name: pour
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pour = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_dcb_msgs
size_t get_serialized_size_juice_dcb_msgs__srv__SetPouring_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPouring_Request__ros_msg_type * ros_message = static_cast<const _SetPouring_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name spout_num
  {
    size_t item_size = sizeof(ros_message->spout_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pour
  {
    size_t item_size = sizeof(ros_message->pour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPouring_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_dcb_msgs__srv__SetPouring_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_dcb_msgs
size_t max_serialized_size_juice_dcb_msgs__srv__SetPouring_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: spout_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pour
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPouring_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_dcb_msgs__srv__SetPouring_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPouring_Request = {
  "juice_dcb_msgs::srv",
  "SetPouring_Request",
  _SetPouring_Request__cdr_serialize,
  _SetPouring_Request__cdr_deserialize,
  _SetPouring_Request__get_serialized_size,
  _SetPouring_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPouring_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPouring_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, srv, SetPouring_Request)() {
  return &_SetPouring_Request__type_support;
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
// #include "juice_dcb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "juice_dcb_msgs/srv/set_pouring__struct.h"
// already included above
// #include "juice_dcb_msgs/srv/set_pouring__functions.h"
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

#include "juice_dcb_msgs/msg/command_result__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_juice_dcb_msgs__msg__CommandResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_juice_dcb_msgs__msg__CommandResult(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, msg, CommandResult)();


using _SetPouring_Response__ros_msg_type = juice_dcb_msgs__srv__SetPouring_Response;

static bool _SetPouring_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPouring_Response__ros_msg_type * ros_message = static_cast<const _SetPouring_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, msg, CommandResult
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SetPouring_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPouring_Response__ros_msg_type * ros_message = static_cast<_SetPouring_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, msg, CommandResult
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_dcb_msgs
size_t get_serialized_size_juice_dcb_msgs__srv__SetPouring_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPouring_Response__ros_msg_type * ros_message = static_cast<const _SetPouring_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result

  current_alignment += get_serialized_size_juice_dcb_msgs__msg__CommandResult(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetPouring_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_dcb_msgs__srv__SetPouring_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_dcb_msgs
size_t max_serialized_size_juice_dcb_msgs__srv__SetPouring_Response(
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


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_juice_dcb_msgs__msg__CommandResult(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPouring_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_dcb_msgs__srv__SetPouring_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPouring_Response = {
  "juice_dcb_msgs::srv",
  "SetPouring_Response",
  _SetPouring_Response__cdr_serialize,
  _SetPouring_Response__cdr_deserialize,
  _SetPouring_Response__get_serialized_size,
  _SetPouring_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPouring_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPouring_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, srv, SetPouring_Response)() {
  return &_SetPouring_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "juice_dcb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "juice_dcb_msgs/srv/set_pouring.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPouring__callbacks = {
  "juice_dcb_msgs::srv",
  "SetPouring",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, srv, SetPouring_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, srv, SetPouring_Response)(),
};

static rosidl_service_type_support_t SetPouring__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPouring__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_dcb_msgs, srv, SetPouring)() {
  return &SetPouring__handle;
}

#if defined(__cplusplus)
}
#endif
