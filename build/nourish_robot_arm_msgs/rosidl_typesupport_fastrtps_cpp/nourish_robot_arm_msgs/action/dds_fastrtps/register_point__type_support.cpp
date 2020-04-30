// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_fastrtps_cpp.hpp"
#include "nourish_robot_arm_msgs/action/register_point__struct.hpp"

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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sensor_tool
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sensor_tool,
    cdr);
  // Member: ignore_sensor
  cdr << (ros_message.ignore_sensor ? true : false);
  // Member: speed
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.speed,
    cdr);
  // Member: x_offset
  cdr << ros_message.x_offset;
  // Member: y_offset
  cdr << ros_message.y_offset;
  // Member: z_offset
  cdr << ros_message.z_offset;
  // Member: x_rot
  cdr << ros_message.x_rot;
  // Member: y_rot
  cdr << ros_message.y_rot;
  // Member: z_rot
  cdr << ros_message.z_rot;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_Goal & ros_message)
{
  // Member: sensor_tool
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sensor_tool);

  // Member: ignore_sensor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ignore_sensor = tmp ? true : false;
  }

  // Member: speed
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.speed);

  // Member: x_offset
  cdr >> ros_message.x_offset;

  // Member: y_offset
  cdr >> ros_message.y_offset;

  // Member: z_offset
  cdr >> ros_message.z_offset;

  // Member: x_rot
  cdr >> ros_message.x_rot;

  // Member: y_rot
  cdr >> ros_message.y_rot;

  // Member: z_rot
  cdr >> ros_message.z_rot;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sensor_tool

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sensor_tool, current_alignment);
  // Member: ignore_sensor
  {
    size_t item_size = sizeof(ros_message.ignore_sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.speed, current_alignment);
  // Member: x_offset
  {
    size_t item_size = sizeof(ros_message.x_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_offset
  {
    size_t item_size = sizeof(ros_message.y_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_offset
  {
    size_t item_size = sizeof(ros_message.z_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_rot
  {
    size_t item_size = sizeof(ros_message.x_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_rot
  {
    size_t item_size = sizeof(ros_message.y_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_rot
  {
    size_t item_size = sizeof(ros_message.z_rot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sensor_tool
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Tool(
        full_bounded, current_alignment);
    }
  }

  // Member: ignore_sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Speed(
        full_bounded, current_alignment);
    }
  }

  // Member: x_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_rot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_Goal(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_Goal__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_Goal",
  _RegisterPoint_Goal__cdr_serialize,
  _RegisterPoint_Goal__cdr_deserialize,
  _RegisterPoint_Goal__get_serialized_size,
  _RegisterPoint_Goal__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Goal>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Goal)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_Goal__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: final_status
  cdr << ros_message.final_status;
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
  nourish_robot_arm_msgs::action::RegisterPoint_Result & ros_message)
{
  // Member: final_status
  cdr >> ros_message.final_status;

  // Member: pose
  nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pose);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: final_status
  {
    size_t item_size = sizeof(ros_message.final_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose

  current_alignment +=
    nourish_robot_arm_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pose, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: final_status
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

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_Result(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_Result__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_Result",
  _RegisterPoint_Result__cdr_serialize,
  _RegisterPoint_Result__cdr_deserialize,
  _RegisterPoint_Result__get_serialized_size,
  _RegisterPoint_Result__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Result>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Result)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_Result__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_Feedback & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_Feedback & ros_message,
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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_Feedback(
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

static bool _RegisterPoint_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_Feedback(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_Feedback__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_Feedback",
  _RegisterPoint_Feedback__cdr_serialize,
  _RegisterPoint_Feedback__cdr_deserialize,
  _RegisterPoint_Feedback__get_serialized_size,
  _RegisterPoint_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_Feedback__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace nourish_robot_arm_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_Goal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::action::RegisterPoint_Goal &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_Goal &,
  size_t current_alignment);
size_t
max_serialized_size_RegisterPoint_Goal(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace nourish_robot_arm_msgs


namespace nourish_robot_arm_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_RegisterPoint_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_SendGoal_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_SendGoal_Request__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_SendGoal_Request",
  _RegisterPoint_SendGoal_Request__cdr_serialize,
  _RegisterPoint_SendGoal_Request__cdr_deserialize,
  _RegisterPoint_SendGoal_Request__get_serialized_size,
  _RegisterPoint_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_SendGoal_Request__handle;
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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace nourish_robot_arm_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_SendGoal_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_SendGoal_Response__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_SendGoal_Response",
  _RegisterPoint_SendGoal_Response__cdr_serialize,
  _RegisterPoint_SendGoal_Response__cdr_deserialize,
  _RegisterPoint_SendGoal_Response__get_serialized_size,
  _RegisterPoint_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_SendGoal_Response__handle;
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

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RegisterPoint_SendGoal__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)(),
};

static rosidl_service_type_support_t _RegisterPoint_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_SendGoal__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace nourish_robot_arm_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_GetResult_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_GetResult_Request__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_GetResult_Request",
  _RegisterPoint_GetResult_Request__cdr_serialize,
  _RegisterPoint_GetResult_Request__cdr_deserialize,
  _RegisterPoint_GetResult_Request__get_serialized_size,
  _RegisterPoint_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_GetResult_Request__handle;
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
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::action::RegisterPoint_Result &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_Result &,
  size_t current_alignment);
size_t
max_serialized_size_RegisterPoint_Result(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace nourish_robot_arm_msgs


namespace nourish_robot_arm_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_RegisterPoint_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_GetResult_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_GetResult_Response__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_GetResult_Response",
  _RegisterPoint_GetResult_Response__cdr_serialize,
  _RegisterPoint_GetResult_Response__cdr_deserialize,
  _RegisterPoint_GetResult_Response__get_serialized_size,
  _RegisterPoint_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RegisterPoint_GetResult__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)(),
};

static rosidl_service_type_support_t _RegisterPoint_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_GetResult__handle;
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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace nourish_robot_arm_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_Feedback &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nourish_robot_arm_msgs::action::RegisterPoint_Feedback &);
size_t get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_Feedback &,
  size_t current_alignment);
size_t
max_serialized_size_RegisterPoint_Feedback(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace nourish_robot_arm_msgs


namespace nourish_robot_arm_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_serialize(
  const nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
get_serialized_size(
  const nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_nourish_robot_arm_msgs
max_serialized_size_RegisterPoint_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_RegisterPoint_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RegisterPoint_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegisterPoint_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegisterPoint_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegisterPoint_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RegisterPoint_FeedbackMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _RegisterPoint_FeedbackMessage__callbacks = {
  "nourish_robot_arm_msgs::action",
  "RegisterPoint_FeedbackMessage",
  _RegisterPoint_FeedbackMessage__cdr_serialize,
  _RegisterPoint_FeedbackMessage__cdr_deserialize,
  _RegisterPoint_FeedbackMessage__get_serialized_size,
  _RegisterPoint_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _RegisterPoint_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegisterPoint_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage>()
{
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)() {
  return &nourish_robot_arm_msgs::action::typesupport_fastrtps_cpp::_RegisterPoint_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
