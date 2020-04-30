// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from juice_spout_msgs:srv/SetFill.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "juice_spout_msgs/srv/set_fill__rosidl_typesupport_introspection_c.h"
#include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "juice_spout_msgs/srv/set_fill__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_member_array[1] = {
  {
    "grams",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__srv__SetFill_Request, grams),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_members = {
  "juice_spout_msgs__srv",  // message namespace
  "SetFill_Request",  // message name
  1,  // number of fields
  sizeof(juice_spout_msgs__srv__SetFill_Request),
  SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_type_support_handle = {
  0,
  &SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill_Request)() {
  if (!SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_type_support_handle.typesupport_identifier) {
    SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetFill_Request__rosidl_typesupport_introspection_c__SetFill_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juice_spout_msgs/srv/set_fill__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juice_spout_msgs/srv/set_fill__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juice_spout_msgs__srv__SetFill_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_members = {
  "juice_spout_msgs__srv",  // message namespace
  "SetFill_Response",  // message name
  1,  // number of fields
  sizeof(juice_spout_msgs__srv__SetFill_Response),
  SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_type_support_handle = {
  0,
  &SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill_Response)() {
  if (!SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_type_support_handle.typesupport_identifier) {
    SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetFill_Response__rosidl_typesupport_introspection_c__SetFill_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "juice_spout_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "juice_spout_msgs/srv/set_fill__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_members = {
  "juice_spout_msgs__srv",  // service namespace
  "SetFill",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_Request_message_type_support_handle,
  NULL  // response message
  // juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_Response_message_type_support_handle
};

static rosidl_service_type_support_t juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_type_support_handle = {
  0,
  &juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juice_spout_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill)() {
  if (!juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_type_support_handle.typesupport_identifier) {
    juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juice_spout_msgs, srv, SetFill_Response)()->data;
  }

  return &juice_spout_msgs__srv__set_fill__rosidl_typesupport_introspection_c__SetFill_service_type_support_handle;
}
