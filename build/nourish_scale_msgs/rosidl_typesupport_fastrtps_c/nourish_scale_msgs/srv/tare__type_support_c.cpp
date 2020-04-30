// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from nourish_scale_msgs:srv/Tare.idl
// generated code does not contain a copyright notice
#include "nourish_scale_msgs/srv/tare__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "nourish_scale_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_scale_msgs/srv/tare__struct.h"
#include "nourish_scale_msgs/srv/tare__functions.h"
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


using _Tare_Request__ros_msg_type = nourish_scale_msgs__srv__Tare_Request;

static bool _Tare_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tare_Request__ros_msg_type * ros_message = static_cast<const _Tare_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Tare_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tare_Request__ros_msg_type * ros_message = static_cast<_Tare_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_scale_msgs
size_t get_serialized_size_nourish_scale_msgs__srv__Tare_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tare_Request__ros_msg_type * ros_message = static_cast<const _Tare_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tare_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_scale_msgs__srv__Tare_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_scale_msgs
size_t max_serialized_size_nourish_scale_msgs__srv__Tare_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Tare_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_scale_msgs__srv__Tare_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tare_Request = {
  "nourish_scale_msgs::srv",
  "Tare_Request",
  _Tare_Request__cdr_serialize,
  _Tare_Request__cdr_deserialize,
  _Tare_Request__get_serialized_size,
  _Tare_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tare_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tare_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, srv, Tare_Request)() {
  return &_Tare_Request__type_support;
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
// #include "nourish_scale_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "nourish_scale_msgs/srv/tare__struct.h"
// already included above
// #include "nourish_scale_msgs/srv/tare__functions.h"
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

#include "nourish_scale_msgs/msg/response__functions.h"  // response

// forward declare type support functions
size_t get_serialized_size_nourish_scale_msgs__msg__Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nourish_scale_msgs__msg__Response(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, msg, Response)();


using _Tare_Response__ros_msg_type = nourish_scale_msgs__srv__Tare_Response;

static bool _Tare_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tare_Response__ros_msg_type * ros_message = static_cast<const _Tare_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, msg, Response
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Tare_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tare_Response__ros_msg_type * ros_message = static_cast<_Tare_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, msg, Response
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_scale_msgs
size_t get_serialized_size_nourish_scale_msgs__srv__Tare_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tare_Response__ros_msg_type * ros_message = static_cast<const _Tare_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response

  current_alignment += get_serialized_size_nourish_scale_msgs__msg__Response(
    &(ros_message->response), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Tare_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_nourish_scale_msgs__srv__Tare_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_nourish_scale_msgs
size_t max_serialized_size_nourish_scale_msgs__srv__Tare_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nourish_scale_msgs__msg__Response(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Tare_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_nourish_scale_msgs__srv__Tare_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tare_Response = {
  "nourish_scale_msgs::srv",
  "Tare_Response",
  _Tare_Response__cdr_serialize,
  _Tare_Response__cdr_deserialize,
  _Tare_Response__get_serialized_size,
  _Tare_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tare_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tare_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, srv, Tare_Response)() {
  return &_Tare_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "nourish_scale_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "nourish_scale_msgs/srv/tare.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Tare__callbacks = {
  "nourish_scale_msgs::srv",
  "Tare",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, srv, Tare_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, srv, Tare_Response)(),
};

static rosidl_service_type_support_t Tare__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Tare__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_scale_msgs, srv, Tare)() {
  return &Tare__handle;
}

#if defined(__cplusplus)
}
#endif
