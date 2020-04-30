// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from juice_spout_msgs:action/RunActionRecipe.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
#include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "juice_spout_msgs/action/run_action_recipe__struct.h"


// Include directives for member types
// Member `recipe_identifier`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_member_array[1] = {
  {
    "recipe_identifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_Goal, recipe_identifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_Goal",  // message name
  1,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_Goal),
  RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_type_support_handle = {
  0,
  &RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_Goal)() {
  if (!RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_Goal__rosidl_typesupport_introspection_c__RunActionRecipe_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_member_array[1] = {
  {
    "final_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_Result, final_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_Result",  // message name
  1,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_Result),
  RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_type_support_handle = {
  0,
  &RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_Result)() {
  if (!RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_Result__rosidl_typesupport_introspection_c__RunActionRecipe_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_member_array[1] = {
  {
    "percent_complete",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_Feedback, percent_complete),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_Feedback",  // message name
  1,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_Feedback),
  RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_type_support_handle = {
  0,
  &RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_Feedback)() {
  if (!RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_Feedback__rosidl_typesupport_introspection_c__RunActionRecipe_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "juice_spout_msgs/action/run_action_recipe.h"
// Member `goal`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request),
  RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_type_support_handle = {
  0,
  &RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal_Request)() {
  RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_Goal)();
  if (!RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_SendGoal_Request__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response),
  RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_type_support_handle = {
  0,
  &RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal_Response)() {
  RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_SendGoal_Response__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_members = {
  "juice_spout_msgs__action",  // service namespace
  "RunActionRecipe_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_type_support_handle = {
  0,
  &juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal)() {
  if (!juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_type_support_handle.typesupport_identifier) {
    juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_SendGoal_Response)()->data;
  }

  return &juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


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

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Request),
  RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_type_support_handle = {
  0,
  &RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult_Request)() {
  RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_GetResult_Request__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe.h"
// Member `result`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response),
  RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_type_support_handle = {
  0,
  &RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult_Response)() {
  RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_Result)();
  if (!RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_GetResult_Response__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_members = {
  "juice_spout_msgs__action",  // service namespace
  "RunActionRecipe_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_type_support_handle = {
  0,
  &juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult)() {
  if (!juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_type_support_handle.typesupport_identifier) {
    juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_GetResult_Response)()->data;
  }

  return &juice_spout_msgs__action__run_action_recipe__rosidl_typesupport_introspection_c__RunActionRecipe_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe.h"
// Member `feedback`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_members = {
  "juice_spout_msgs__action",  // message namespace
  "RunActionRecipe_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage),
  RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_type_support_handle = {
  0,
  &RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_FeedbackMessage)() {
  RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, action, RunActionRecipe_Feedback)();
  if (!RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RunActionRecipe_FeedbackMessage__rosidl_typesupport_introspection_c__RunActionRecipe_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
