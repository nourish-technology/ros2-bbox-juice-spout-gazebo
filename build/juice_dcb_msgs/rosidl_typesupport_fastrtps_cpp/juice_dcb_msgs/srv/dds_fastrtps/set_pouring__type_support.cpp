// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice
#include "juice_dcb_msgs/srv/set_pouring__rosidl_typesupport_fastrtps_cpp.hpp"
#include "juice_dcb_msgs/srv/set_pouring__struct.hpp"

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

namespace juice_dcb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
cdr_serialize(
  const juice_dcb_msgs::srv::SetPouring_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: spout_num
  cdr << ros_message.spout_num;
  // Member: pour
  cdr << (ros_message.pour ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_dcb_msgs::srv::SetPouring_Request & ros_message)
{
  // Member: spout_num
  cdr >> ros_message.spout_num;

  // Member: pour
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pour = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
get_serialized_size(
  const juice_dcb_msgs::srv::SetPouring_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: spout_num
  {
    size_t item_size = sizeof(ros_message.spout_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pour
  {
    size_t item_size = sizeof(ros_message.pour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
max_serialized_size_SetPouring_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: spout_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pour
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SetPouring_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const juice_dcb_msgs::srv::SetPouring_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetPouring_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<juice_dcb_msgs::srv::SetPouring_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetPouring_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const juice_dcb_msgs::srv::SetPouring_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetPouring_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetPouring_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetPouring_Request__callbacks = {
  "juice_dcb_msgs::srv",
  "SetPouring_Request",
  _SetPouring_Request__cdr_serialize,
  _SetPouring_Request__cdr_deserialize,
  _SetPouring_Request__get_serialized_size,
  _SetPouring_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPouring_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetPouring_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace juice_dcb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_dcb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<juice_dcb_msgs::srv::SetPouring_Request>()
{
  return &juice_dcb_msgs::srv::typesupport_fastrtps_cpp::_SetPouring_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_dcb_msgs, srv, SetPouring_Request)() {
  return &juice_dcb_msgs::srv::typesupport_fastrtps_cpp::_SetPouring_Request__handle;
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
namespace juice_dcb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const juice_dcb_msgs::msg::CommandResult &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  juice_dcb_msgs::msg::CommandResult &);
size_t get_serialized_size(
  const juice_dcb_msgs::msg::CommandResult &,
  size_t current_alignment);
size_t
max_serialized_size_CommandResult(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace juice_dcb_msgs


namespace juice_dcb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
cdr_serialize(
  const juice_dcb_msgs::srv::SetPouring_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  juice_dcb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  juice_dcb_msgs::srv::SetPouring_Response & ros_message)
{
  // Member: result
  juice_dcb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
get_serialized_size(
  const juice_dcb_msgs::srv::SetPouring_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result

  current_alignment +=
    juice_dcb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_juice_dcb_msgs
max_serialized_size_SetPouring_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        juice_dcb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CommandResult(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SetPouring_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const juice_dcb_msgs::srv::SetPouring_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetPouring_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<juice_dcb_msgs::srv::SetPouring_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetPouring_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const juice_dcb_msgs::srv::SetPouring_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetPouring_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetPouring_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetPouring_Response__callbacks = {
  "juice_dcb_msgs::srv",
  "SetPouring_Response",
  _SetPouring_Response__cdr_serialize,
  _SetPouring_Response__cdr_deserialize,
  _SetPouring_Response__get_serialized_size,
  _SetPouring_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPouring_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetPouring_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace juice_dcb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_dcb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<juice_dcb_msgs::srv::SetPouring_Response>()
{
  return &juice_dcb_msgs::srv::typesupport_fastrtps_cpp::_SetPouring_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_dcb_msgs, srv, SetPouring_Response)() {
  return &juice_dcb_msgs::srv::typesupport_fastrtps_cpp::_SetPouring_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace juice_dcb_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetPouring__callbacks = {
  "juice_dcb_msgs::srv",
  "SetPouring",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_dcb_msgs, srv, SetPouring_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_dcb_msgs, srv, SetPouring_Response)(),
};

static rosidl_service_type_support_t _SetPouring__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetPouring__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace juice_dcb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_juice_dcb_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<juice_dcb_msgs::srv::SetPouring>()
{
  return &juice_dcb_msgs::srv::typesupport_fastrtps_cpp::_SetPouring__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, juice_dcb_msgs, srv, SetPouring)() {
  return &juice_dcb_msgs::srv::typesupport_fastrtps_cpp::_SetPouring__handle;
}

#ifdef __cplusplus
}
#endif
