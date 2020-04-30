// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "nourish_robot_arm_msgs/msg/speed__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nourish_robot_arm_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Speed_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _Speed_type_support_ids_t;

static const _Speed_type_support_ids_t _Speed_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _Speed_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _Speed_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Speed_type_support_symbol_names_t _Speed_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, nourish_robot_arm_msgs, msg, Speed)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nourish_robot_arm_msgs, msg, Speed)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Speed)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, nourish_robot_arm_msgs, msg, Speed)),
  }
};

typedef struct _Speed_type_support_data_t
{
  void * data[4];
} _Speed_type_support_data_t;

static _Speed_type_support_data_t _Speed_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Speed_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_Speed_message_typesupport_ids.typesupport_identifier[0],
  &_Speed_message_typesupport_symbol_names.symbol_name[0],
  &_Speed_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Speed_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Speed_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nourish_robot_arm_msgs, msg, Speed)() {
  return &::nourish_robot_arm_msgs::msg::rosidl_typesupport_c::Speed_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
