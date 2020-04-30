// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_robot_arm_msgs/msg/robot_arm_state__rosidl_typesupport_introspection_c.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_member_array[4] = {
  {
    "is_connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotArmState, is_connected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_program_is_running",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotArmState, motion_program_is_running),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "registration_sensor_is_activated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotArmState, registration_sensor_is_activated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_waiting",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotArmState, is_waiting),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_members = {
  "nourish_robot_arm_msgs__msg",  // message namespace
  "RobotArmState",  // message name
  4,  // number of fields
  sizeof(nourish_robot_arm_msgs__msg__RobotArmState),
  RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle = {
  0,
  &RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, RobotArmState)() {
  if (!RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle.typesupport_identifier) {
    RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotArmState__rosidl_typesupport_introspection_c__RobotArmState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
