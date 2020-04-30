// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from juice_spout_msgs:srv/RunRecipe.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/srv/run_recipe__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "juice_spout_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "juice_spout_msgs/srv/run_recipe__struct.h"
#include "juice_spout_msgs/srv/run_recipe__functions.h"
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

#include "rosidl_generator_c/string.h"  // recipe_name
#include "rosidl_generator_c/string_functions.h"  // recipe_name

// forward declare type support functions


using _RunRecipe_Request__ros_msg_type = juice_spout_msgs__srv__RunRecipe_Request;

static bool _RunRecipe_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RunRecipe_Request__ros_msg_type * ros_message = static_cast<const _RunRecipe_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: recipe_name
  {
    const rosidl_generator_c__String * str = &ros_message->recipe_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RunRecipe_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RunRecipe_Request__ros_msg_type * ros_message = static_cast<_RunRecipe_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: recipe_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->recipe_name.data) {
      rosidl_generator_c__String__init(&ros_message->recipe_name);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->recipe_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'recipe_name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t get_serialized_size_juice_spout_msgs__srv__RunRecipe_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RunRecipe_Request__ros_msg_type * ros_message = static_cast<const _RunRecipe_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name recipe_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->recipe_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RunRecipe_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_spout_msgs__srv__RunRecipe_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t max_serialized_size_juice_spout_msgs__srv__RunRecipe_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: recipe_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RunRecipe_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_spout_msgs__srv__RunRecipe_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RunRecipe_Request = {
  "juice_spout_msgs::srv",
  "RunRecipe_Request",
  _RunRecipe_Request__cdr_serialize,
  _RunRecipe_Request__cdr_deserialize,
  _RunRecipe_Request__get_serialized_size,
  _RunRecipe_Request__max_serialized_size
};

static rosidl_message_type_support_t _RunRecipe_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RunRecipe_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, RunRecipe_Request)() {
  return &_RunRecipe_Request__type_support;
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
// #include "juice_spout_msgs/srv/run_recipe__struct.h"
// already included above
// #include "juice_spout_msgs/srv/run_recipe__functions.h"
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

// already included above
// #include "rosidl_generator_c/string.h"  // message
// already included above
// #include "rosidl_generator_c/string_functions.h"  // message

// forward declare type support functions


using _RunRecipe_Response__ros_msg_type = juice_spout_msgs__srv__RunRecipe_Response;

static bool _RunRecipe_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RunRecipe_Response__ros_msg_type * ros_message = static_cast<const _RunRecipe_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: message
  {
    const rosidl_generator_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RunRecipe_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RunRecipe_Response__ros_msg_type * ros_message = static_cast<_RunRecipe_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_generator_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t get_serialized_size_juice_spout_msgs__srv__RunRecipe_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RunRecipe_Response__ros_msg_type * ros_message = static_cast<const _RunRecipe_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RunRecipe_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_juice_spout_msgs__srv__RunRecipe_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_juice_spout_msgs
size_t max_serialized_size_juice_spout_msgs__srv__RunRecipe_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RunRecipe_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_juice_spout_msgs__srv__RunRecipe_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RunRecipe_Response = {
  "juice_spout_msgs::srv",
  "RunRecipe_Response",
  _RunRecipe_Response__cdr_serialize,
  _RunRecipe_Response__cdr_deserialize,
  _RunRecipe_Response__get_serialized_size,
  _RunRecipe_Response__max_serialized_size
};

static rosidl_message_type_support_t _RunRecipe_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RunRecipe_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, RunRecipe_Response)() {
  return &_RunRecipe_Response__type_support;
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
#include "juice_spout_msgs/srv/run_recipe.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RunRecipe__callbacks = {
  "juice_spout_msgs::srv",
  "RunRecipe",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, RunRecipe_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, RunRecipe_Response)(),
};

static rosidl_service_type_support_t RunRecipe__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RunRecipe__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, juice_spout_msgs, srv, RunRecipe)() {
  return &RunRecipe__handle;
}

#if defined(__cplusplus)
}
#endif
