// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_robot_arm_msgs/msg/robot_move__rosidl_typesupport_introspection_c.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_robot_arm_msgs/msg/robot_move__struct.h"


// Include directives for member types
// Member `speed`
#include "nourish_robot_arm_msgs/msg/speed.h"
// Member `speed`
#include "nourish_robot_arm_msgs/msg/speed__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "nourish_robot_arm_msgs/msg/acceleration.h"
// Member `acceleration`
#include "nourish_robot_arm_msgs/msg/acceleration__rosidl_typesupport_introspection_c.h"
// Member `zone`
#include "nourish_robot_arm_msgs/msg/zone.h"
// Member `zone`
#include "nourish_robot_arm_msgs/msg/zone__rosidl_typesupport_introspection_c.h"
// Member `tool`
#include "nourish_robot_arm_msgs/msg/tool.h"
// Member `tool`
#include "nourish_robot_arm_msgs/msg/tool__rosidl_typesupport_introspection_c.h"
// Member `work_object`
#include "nourish_robot_arm_msgs/msg/work_object.h"
// Member `work_object`
#include "nourish_robot_arm_msgs/msg/work_object__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose__rosidl_typesupport_introspection_c.h"
// Member `joint`
#include "nourish_robot_arm_msgs/msg/joint.h"
// Member `joint`
#include "nourish_robot_arm_msgs/msg/joint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[9] = {
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, zone),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, tool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "work_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, work_object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interpolation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, interpolation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, target_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__RobotMove, joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_members = {
  "nourish_robot_arm_msgs__msg",  // message namespace
  "RobotMove",  // message name
  9,  // number of fields
  sizeof(nourish_robot_arm_msgs__msg__RobotMove),
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_type_support_handle = {
  0,
  &RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, RobotMove)() {
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Speed)();
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Acceleration)();
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Zone)();
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Tool)();
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, WorkObject)();
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Pose)();
  RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Joint)();
  if (!RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_type_support_handle.typesupport_identifier) {
    RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotMove__rosidl_typesupport_introspection_c__RobotMove_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
