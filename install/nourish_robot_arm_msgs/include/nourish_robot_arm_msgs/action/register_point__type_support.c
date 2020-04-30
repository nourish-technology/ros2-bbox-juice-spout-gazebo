// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `sensor_tool`
#include "nourish_robot_arm_msgs/msg/tool.h"
// Member `sensor_tool`
#include "nourish_robot_arm_msgs/msg/tool__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "nourish_robot_arm_msgs/msg/speed.h"
// Member `speed`
#include "nourish_robot_arm_msgs/msg/speed__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_member_array[9] = {
  {
    "sensor_tool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, sensor_tool),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ignore_sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, ignore_sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, x_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, y_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, z_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, x_rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, y_rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Goal, z_rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_Goal",  // message name
  9,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_Goal),
  RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_type_support_handle = {
  0,
  &RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_Goal)() {
  RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Tool)();
  RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Speed)();
  if (!RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_Goal__rosidl_typesupport_introspection_c__RegisterPoint_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_member_array[2] = {
  {
    "final_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Result, final_status),  // bytes offset in struct
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
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Result, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_Result",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_Result),
  RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_type_support_handle = {
  0,
  &RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_Result)() {
  RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, Pose)();
  if (!RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_Result__rosidl_typesupport_introspection_c__RegisterPoint_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_Feedback",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_Feedback),
  RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_type_support_handle = {
  0,
  &RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)() {
  if (!RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_Feedback__rosidl_typesupport_introspection_c__RegisterPoint_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nourish_robot_arm_msgs/action/register_point.h"
// Member `goal`
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request),
  RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_type_support_handle = {
  0,
  &RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)() {
  RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_Goal)();
  if (!RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_SendGoal_Request__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response),
  RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_type_support_handle = {
  0,
  &RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)() {
  RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_SendGoal_Response__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_members = {
  "nourish_robot_arm_msgs__action",  // service namespace
  "RegisterPoint_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_type_support_handle = {
  0,
  &nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal)() {
  if (!nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_type_support_handle.typesupport_identifier) {
    nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)()->data;
  }

  return &nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request),
  RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_type_support_handle = {
  0,
  &RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)() {
  RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_GetResult_Request__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nourish_robot_arm_msgs/action/register_point.h"
// Member `result`
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response),
  RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_type_support_handle = {
  0,
  &RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)() {
  RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_Result)();
  if (!RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_GetResult_Response__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_members = {
  "nourish_robot_arm_msgs__action",  // service namespace
  "RegisterPoint_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_type_support_handle = {
  0,
  &nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult)() {
  if (!nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_type_support_handle.typesupport_identifier) {
    nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)()->data;
  }

  return &nourish_robot_arm_msgs__action__register_point__rosidl_typesupport_introspection_c__RegisterPoint_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nourish_robot_arm_msgs/action/register_point.h"
// Member `feedback`
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "RegisterPoint_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage),
  RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_type_support_handle = {
  0,
  &RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)() {
  RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)();
  if (!RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegisterPoint_FeedbackMessage__rosidl_typesupport_introspection_c__RegisterPoint_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
