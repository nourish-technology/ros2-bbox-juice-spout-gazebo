// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_robot_arm_msgs:srv/PollStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_robot_arm_msgs/srv/poll_status__rosidl_typesupport_introspection_c.h"
#include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_robot_arm_msgs/srv/poll_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__srv__PollStatus_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_members = {
  "nourish_robot_arm_msgs__srv",  // message namespace
  "PollStatus_Request",  // message name
  1,  // number of fields
  sizeof(nourish_robot_arm_msgs__srv__PollStatus_Request),
  PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_type_support_handle = {
  0,
  &PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus_Request)() {
  if (!PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_type_support_handle.typesupport_identifier) {
    PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PollStatus_Request__rosidl_typesupport_introspection_c__PollStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_status__struct.h"


// Include directives for member types
// Member `state`
#include "nourish_robot_arm_msgs/msg/robot_arm_state.h"
// Member `state`
#include "nourish_robot_arm_msgs/msg/robot_arm_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__srv__PollStatus_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_robot_arm_msgs__srv__PollStatus_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_members = {
  "nourish_robot_arm_msgs__srv",  // message namespace
  "PollStatus_Response",  // message name
  2,  // number of fields
  sizeof(nourish_robot_arm_msgs__srv__PollStatus_Response),
  PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_type_support_handle = {
  0,
  &PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus_Response)() {
  PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, msg, RobotArmState)();
  if (!PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_type_support_handle.typesupport_identifier) {
    PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PollStatus_Response__rosidl_typesupport_introspection_c__PollStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_members = {
  "nourish_robot_arm_msgs__srv",  // service namespace
  "PollStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_Request_message_type_support_handle,
  NULL  // response message
  // nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_type_support_handle = {
  0,
  &nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_robot_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus)() {
  if (!nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_type_support_handle.typesupport_identifier) {
    nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_robot_arm_msgs, srv, PollStatus_Response)()->data;
  }

  return &nourish_robot_arm_msgs__srv__poll_status__rosidl_typesupport_introspection_c__PollStatus_service_type_support_handle;
}
