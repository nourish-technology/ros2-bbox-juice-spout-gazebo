// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_robot_arm_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_robot_arm_msgs/action/execute_path__struct.h"


// Include directives for member types
// Member `robot_moves`
#include "nourish_robot_arm_msgs/msg/robot_move.h"
// Member `robot_moves`
#include "nourish_robot_arm_msgs/msg/robot_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__RobotMove__robot_moves(
  const void * untyped_member)
{
  const nourish_robot_arm_msgs__msg__RobotMove__Sequence * member =
    (const nourish_robot_arm_msgs__msg__RobotMove__Sequence *)(untyped_member);
  return member->size;
}

const void * ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__RobotMove__robot_moves(
  const void * untyped_member, size_t index)
{
  const nourish_robot_arm_msgs__msg__RobotMove__Sequence * member =
    (const nourish_robot_arm_msgs__msg__RobotMove__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__RobotMove__robot_moves(
  void * untyped_member, size_t index)
{
  nourish_robot_arm_msgs__msg__RobotMove__Sequence * member =
    (nourish_robot_arm_msgs__msg__RobotMove__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__RobotMove__robot_moves(
  void * untyped_member, size_t size)
{
  nourish_robot_arm_msgs__msg__RobotMove__Sequence * member =
    (nourish_robot_arm_msgs__msg__RobotMove__Sequence *)(untyped_member);
  nourish_robot_arm_msgs__msg__RobotMove__Sequence__fini(member);
  return nourish_robot_arm_msgs__msg__RobotMove__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_member_array[1] = {
  {
    "robot_moves",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_Goal, robot_moves),  // bytes offset in struct
    NULL,  // default value
    ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__RobotMove__robot_moves,  // size() function pointer
    ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__RobotMove__robot_moves,  // get_const(index) function pointer
    ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__RobotMove__robot_moves,  // get(index) function pointer
    ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__RobotMove__robot_moves  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_Goal",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_Goal),
  ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle = {
  0,
  &ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_Goal)() {
  ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, RobotMove)();
  if (!ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle.typesupport_identifier) {
    ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_member_array[1] = {
  {
    "final_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_Result, final_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_Result",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_Result),
  ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle = {
  0,
  &ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_Result)() {
  if (!ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle.typesupport_identifier) {
    ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_Feedback",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_Feedback),
  ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle = {
  0,
  &ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_Feedback)() {
  if (!ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle.typesupport_identifier) {
    ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "nourish_robot_arm_msgs/action/execute_path.h"
// Member `goal`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request),
  ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle = {
  0,
  &ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal_Request)() {
  ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_Goal)();
  if (!ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response),
  ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle = {
  0,
  &ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal_Response)() {
  ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_members = {
  "nourish_robot_arm_msgs__action",  // service namespace
  "ExecutePath_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle = {
  0,
  &nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal)() {
  if (!nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle.typesupport_identifier) {
    nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_SendGoal_Response)()->data;
  }

  return &nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


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

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request),
  ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle = {
  0,
  &ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult_Request)() {
  ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path.h"
// Member `result`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response),
  ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle = {
  0,
  &ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult_Response)() {
  ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_Result)();
  if (!ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_members = {
  "nourish_robot_arm_msgs__action",  // service namespace
  "ExecutePath_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle = {
  0,
  &nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult)() {
  if (!nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle.typesupport_identifier) {
    nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_GetResult_Response)()->data;
  }

  return &nourish_robot_arm_msgs__action__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path.h"
// Member `feedback`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_members = {
  "nourish_robot_arm_msgs__action",  // message namespace
  "ExecutePath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage),
  ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle = {
  0,
  &ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_FeedbackMessage)() {
  ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, action, ExecutePath_Feedback)();
  if (!ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
