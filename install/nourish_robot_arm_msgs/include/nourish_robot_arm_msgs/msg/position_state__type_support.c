// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_robot_arm_msgs:msg/PositionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_robot_arm_msgs/msg/position_state__rosidl_typesupport_introspection_c.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_robot_arm_msgs/msg/position_state__struct.h"


// Include directives for member types
// Member `joint`
#include "nourish_robot_arm_msgs/msg/joint.h"
// Member `joint`
#include "nourish_robot_arm_msgs/msg/joint__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember PositionState__rosidl_typesupport_introspection_c__PositionState_message_member_array[2] = {
  {
    "joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__msg__PositionState, joint),  // bytes offset in struct
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
    offsetof(nourish_robot_arm_msgs__msg__PositionState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PositionState__rosidl_typesupport_introspection_c__PositionState_message_members = {
  "nourish_robot_arm_msgs__msg",  // message namespace
  "PositionState",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__msg__PositionState),
  PositionState__rosidl_typesupport_introspection_c__PositionState_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PositionState__rosidl_typesupport_introspection_c__PositionState_message_type_support_handle = {
  0,
  &PositionState__rosidl_typesupport_introspection_c__PositionState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, PositionState)() {
  PositionState__rosidl_typesupport_introspection_c__PositionState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Joint)();
  PositionState__rosidl_typesupport_introspection_c__PositionState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Pose)();
  if (!PositionState__rosidl_typesupport_introspection_c__PositionState_message_type_support_handle.typesupport_identifier) {
    PositionState__rosidl_typesupport_introspection_c__PositionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PositionState__rosidl_typesupport_introspection_c__PositionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
