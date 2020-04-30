// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_scale_msgs:srv/Tare.idl
// generated code does not contain a copyright notice
#include "nourish_scale_msgs/srv/tare__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_scale_msgs/srv/tare__struct.hpp"

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

namespace nourish_scale_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
cdr_serialize(
  const nourish_scale_msgs::srv::Tare_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_scale_msgs::srv::Tare_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
get_serialized_size(
  const nourish_scale_msgs::srv::Tare_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
max_serialized_size_Tare_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Tare_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_scale_msgs::srv::Tare_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tare_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_scale_msgs::srv::Tare_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tare_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_scale_msgs::srv::Tare_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tare_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tare_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Tare_Request__callbacks = {
  "nourish_scale_msgs::srv",
  "Tare_Request",
  _Tare_Request__cdr_serialize,
  _Tare_Request__cdr_deserialize,
  _Tare_Request__get_serialized_size,
  _Tare_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tare_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tare_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nourish_scale_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_scale_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_scale_msgs::srv::Tare_Request>()
{
  return &nourish_scale_msgs::srv::typesupport_fastrtps_cpp::_Tare_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_scale_msgs, srv, Tare_Request)() {
  return &nourish_scale_msgs::srv::typesupport_fastrtps_cpp::_Tare_Request__handle;
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
namespace nourish_scale_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_scale_msgs::msg::Response &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_scale_msgs::msg::Response &);
size_t get_serialized_size(
  const nourish_scale_msgs::msg::Response &,
  size_t current_alignment);
size_t
max_serialized_size_Response(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nourish_scale_msgs


namespace nourish_scale_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
cdr_serialize(
  const nourish_scale_msgs::srv::Tare_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: response
  nourish_scale_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.response,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_scale_msgs::srv::Tare_Response & ros_message)
{
  // Member: response
  nourish_scale_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.response);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
get_serialized_size(
  const nourish_scale_msgs::srv::Tare_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: response

  current_alignment +=
    nourish_scale_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.response, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_scale_msgs
max_serialized_size_Tare_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: response
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_scale_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Response(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Tare_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_scale_msgs::srv::Tare_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tare_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_scale_msgs::srv::Tare_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tare_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_scale_msgs::srv::Tare_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tare_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tare_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Tare_Response__callbacks = {
  "nourish_scale_msgs::srv",
  "Tare_Response",
  _Tare_Response__cdr_serialize,
  _Tare_Response__cdr_deserialize,
  _Tare_Response__get_serialized_size,
  _Tare_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tare_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tare_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nourish_scale_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_scale_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_scale_msgs::srv::Tare_Response>()
{
  return &nourish_scale_msgs::srv::typesupport_fastrtps_cpp::_Tare_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_scale_msgs, srv, Tare_Response)() {
  return &nourish_scale_msgs::srv::typesupport_fastrtps_cpp::_Tare_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace nourish_scale_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Tare__callbacks = {
  "nourish_scale_msgs::srv",
  "Tare",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_scale_msgs, srv, Tare_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_scale_msgs, srv, Tare_Response)(),
};

static rosidl_service_type_support_t _Tare__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tare__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nourish_scale_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_scale_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nourish_scale_msgs::srv::Tare>()
{
  return &nourish_scale_msgs::srv::typesupport_fastrtps_cpp::_Tare__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_scale_msgs, srv, Tare)() {
  return &nourish_scale_msgs::srv::typesupport_fastrtps_cpp::_Tare__handle;
}

#ifdef __cplusplus
}
#endif
