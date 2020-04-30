// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/srv/poll_position__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/srv/poll_position__struct.hpp"

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
namespace nourish_robot_arm_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::msg::WorkObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::WorkObject &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::WorkObject &,
  size_t current_alignment);
size_t
max_serialized_size_WorkObject(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nourish_robot_arm_msgs

namespace nourish_robot_arm_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::msg::Tool &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::Tool &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::Tool &,
  size_t current_alignment);
size_t
max_serialized_size_Tool(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nourish_robot_arm_msgs


namespace nourish_robot_arm_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::srv::PollPosition_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: work_object
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.work_object,
    cdr);
  // Member: tool
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tool,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::srv::PollPosition_Request & ros_message)
{
  // Member: work_object
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.work_object);

  // Member: tool
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tool);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::srv::PollPosition_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: work_object

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.work_object, current_alignment);
  // Member: tool

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tool, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_PollPosition_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: work_object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WorkObject(
        full_bounded, current_alignment);
    }
  }

  // Member: tool
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tool(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PollPosition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::srv::PollPosition_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PollPosition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::srv::PollPosition_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PollPosition_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::srv::PollPosition_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PollPosition_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PollPosition_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _PollPosition_Request__callbacks = {
  "nourish_robot_arm_msgs::srv",
  "PollPosition_Request",
  _PollPosition_Request__cdr_serialize,
  _PollPosition_Request__cdr_deserialize,
  _PollPosition_Request__get_serialized_size,
  _PollPosition_Request__max_serialized_size
};

static rosidl_message_type_support_t _PollPosition_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PollPosition_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::srv::PollPosition_Request>()
{
  return &nourish_robot_arm_msgs::srv::typesupport_fastrtps_cpp::_PollPosition_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, srv, PollPosition_Request)() {
  return &nourish_robot_arm_msgs::srv::typesupport_fastrtps_cpp::_PollPosition_Request__handle;
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
namespace nourish_robot_arm_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::msg::Joint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::Joint &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::Joint &,
  size_t current_alignment);
size_t
max_serialized_size_Joint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nourish_robot_arm_msgs

namespace nourish_robot_arm_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::Pose &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nourish_robot_arm_msgs


namespace nourish_robot_arm_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::srv::PollPosition_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << ros_message.result;
  // Member: joint
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint,
    cdr);
  // Member: pose
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::srv::PollPosition_Response & ros_message)
{
  // Member: result
  cdr >> ros_message.result;

  // Member: joint
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint);

  // Member: pose
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::srv::PollPosition_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint, current_alignment);
  // Member: pose

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_PollPosition_Response(
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

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Joint(
        full_bounded, current_alignment);
    }
  }

  // Member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PollPosition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::srv::PollPosition_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PollPosition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::srv::PollPosition_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PollPosition_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::srv::PollPosition_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PollPosition_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PollPosition_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _PollPosition_Response__callbacks = {
  "nourish_robot_arm_msgs::srv",
  "PollPosition_Response",
  _PollPosition_Response__cdr_serialize,
  _PollPosition_Response__cdr_deserialize,
  _PollPosition_Response__get_serialized_size,
  _PollPosition_Response__max_serialized_size
};

static rosidl_message_type_support_t _PollPosition_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PollPosition_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::srv::PollPosition_Response>()
{
  return &nourish_robot_arm_msgs::srv::typesupport_fastrtps_cpp::_PollPosition_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, srv, PollPosition_Response)() {
  return &nourish_robot_arm_msgs::srv::typesupport_fastrtps_cpp::_PollPosition_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace nourish_robot_arm_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _PollPosition__callbacks = {
  "nourish_robot_arm_msgs::srv",
  "PollPosition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, srv, PollPosition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, srv, PollPosition_Response)(),
};

static rosidl_service_type_support_t _PollPosition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PollPosition__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nourish_robot_arm_msgs::srv::PollPosition>()
{
  return &nourish_robot_arm_msgs::srv::typesupport_fastrtps_cpp::_PollPosition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, srv, PollPosition)() {
  return &nourish_robot_arm_msgs::srv::typesupport_fastrtps_cpp::_PollPosition__handle;
}

#ifdef __cplusplus
}
#endif
