// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from juice_spout_msgs:srv/RunRecipe.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/srv/run_recipe__rosidl_typesupport_fastrtps_cpp.hpp"
#include "juice_spout_msgs/srv/run_recipe__struct.hpp"

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

namespace juice_spout_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_serialize(
  const juice_spout_msgs::srv::RunRecipe_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: recipe_name
  cdr << ros_message.recipe_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_spout_msgs::srv::RunRecipe_Request & ros_message)
{
  // Member: recipe_name
  cdr >> ros_message.recipe_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
get_serialized_size(
  const juice_spout_msgs::srv::RunRecipe_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: recipe_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.recipe_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
max_serialized_size_RunRecipe_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: recipe_name
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

static bool _RunRecipe_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const juice_spout_msgs::srv::RunRecipe_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RunRecipe_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<juice_spout_msgs::srv::RunRecipe_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RunRecipe_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const juice_spout_msgs::srv::RunRecipe_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RunRecipe_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RunRecipe_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RunRecipe_Request__callbacks = {
  "juice_spout_msgs::srv",
  "RunRecipe_Request",
  _RunRecipe_Request__cdr_serialize,
  _RunRecipe_Request__cdr_deserialize,
  _RunRecipe_Request__get_serialized_size,
  _RunRecipe_Request__max_serialized_size
};

static rosidl_message_type_support_t _RunRecipe_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RunRecipe_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace juice_spout_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<juice_spout_msgs::srv::RunRecipe_Request>()
{
  return &juice_spout_msgs::srv::typesupport_fastrtps_cpp::_RunRecipe_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, srv, RunRecipe_Request)() {
  return &juice_spout_msgs::srv::typesupport_fastrtps_cpp::_RunRecipe_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace juice_spout_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_serialize(
  const juice_spout_msgs::srv::RunRecipe_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_spout_msgs::srv::RunRecipe_Response & ros_message)
{
  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
get_serialized_size(
  const juice_spout_msgs::srv::RunRecipe_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_spout_msgs
max_serialized_size_RunRecipe_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: message
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

static bool _RunRecipe_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const juice_spout_msgs::srv::RunRecipe_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RunRecipe_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<juice_spout_msgs::srv::RunRecipe_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RunRecipe_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const juice_spout_msgs::srv::RunRecipe_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RunRecipe_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RunRecipe_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RunRecipe_Response__callbacks = {
  "juice_spout_msgs::srv",
  "RunRecipe_Response",
  _RunRecipe_Response__cdr_serialize,
  _RunRecipe_Response__cdr_deserialize,
  _RunRecipe_Response__get_serialized_size,
  _RunRecipe_Response__max_serialized_size
};

static rosidl_message_type_support_t _RunRecipe_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RunRecipe_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace juice_spout_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<juice_spout_msgs::srv::RunRecipe_Response>()
{
  return &juice_spout_msgs::srv::typesupport_fastrtps_cpp::_RunRecipe_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, srv, RunRecipe_Response)() {
  return &juice_spout_msgs::srv::typesupport_fastrtps_cpp::_RunRecipe_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace juice_spout_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RunRecipe__callbacks = {
  "juice_spout_msgs::srv",
  "RunRecipe",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, srv, RunRecipe_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, srv, RunRecipe_Response)(),
};

static rosidl_service_type_support_t _RunRecipe__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RunRecipe__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace juice_spout_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_spout_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<juice_spout_msgs::srv::RunRecipe>()
{
  return &juice_spout_msgs::srv::typesupport_fastrtps_cpp::_RunRecipe__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_spout_msgs, srv, RunRecipe)() {
  return &juice_spout_msgs::srv::typesupport_fastrtps_cpp::_RunRecipe__handle;
}

#ifdef __cplusplus
}
#endif
