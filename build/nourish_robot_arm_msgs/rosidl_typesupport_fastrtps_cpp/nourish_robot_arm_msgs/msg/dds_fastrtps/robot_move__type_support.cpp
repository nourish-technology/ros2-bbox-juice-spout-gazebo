// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/robot_move__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/msg/robot_move__struct.hpp"

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
  const nourish_robot_arm_msgs::msg::Speed &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::Speed &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::Speed &,
  size_t current_alignment);
size_t
max_serialized_size_Speed(
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
  const nourish_robot_arm_msgs::msg::Acceleration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::Acceleration &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::Acceleration &,
  size_t current_alignment);
size_t
max_serialized_size_Acceleration(
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
  const nourish_robot_arm_msgs::msg::Zone &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::msg::Zone &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::msg::Zone &,
  size_t current_alignment);
size_t
max_serialized_size_Zone(
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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::msg::RobotMove & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: speed
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.speed,
    cdr);
  // Member: acceleration
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.acceleration,
    cdr);
  // Member: zone
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.zone,
    cdr);
  // Member: tool
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tool,
    cdr);
  // Member: work_object
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.work_object,
    cdr);
  // Member: interpolation
  cdr << ros_message.interpolation;
  // Member: target_type
  cdr << ros_message.target_type;
  // Member: pose
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pose,
    cdr);
  // Member: joint
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joint,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::msg::RobotMove & ros_message)
{
  // Member: speed
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.speed);

  // Member: acceleration
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.acceleration);

  // Member: zone
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.zone);

  // Member: tool
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tool);

  // Member: work_object
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.work_object);

  // Member: interpolation
  cdr >> ros_message.interpolation;

  // Member: target_type
  cdr >> ros_message.target_type;

  // Member: pose
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  // Member: joint
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joint);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::msg::RobotMove & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: speed

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.speed, current_alignment);
  // Member: acceleration

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.acceleration, current_alignment);
  // Member: zone

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.zone, current_alignment);
  // Member: tool

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tool, current_alignment);
  // Member: work_object

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.work_object, current_alignment);
  // Member: interpolation
  {
    size_t item_size = sizeof(ros_message.interpolation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_type
  {
    size_t item_size = sizeof(ros_message.target_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);
  // Member: joint

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joint, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RobotMove(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Speed(
        full_bounded, current_alignment);
    }
  }

  // Member: acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Acceleration(
        full_bounded, current_alignment);
    }
  }

  // Member: zone
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Zone(
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

  // Member: work_object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WorkObject(
        full_bounded, current_alignment);
    }
  }

  // Member: interpolation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
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

  // Member: joint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Joint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RobotMove__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::RobotMove *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotMove__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::msg::RobotMove *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotMove__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::msg::RobotMove *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotMove__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotMove(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotMove__callbacks = {
  "nourish_robot_arm_msgs::msg",
  "RobotMove",
  _RobotMove__cdr_serialize,
  _RobotMove__cdr_deserialize,
  _RobotMove__get_serialized_size,
  _RobotMove__max_serialized_size
};

static rosidl_message_type_support_t _RobotMove__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotMove__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::msg::RobotMove>()
{
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_RobotMove__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, msg, RobotMove)() {
  return &nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::_RobotMove__handle;
}

#ifdef __cplusplus
}
#endif
