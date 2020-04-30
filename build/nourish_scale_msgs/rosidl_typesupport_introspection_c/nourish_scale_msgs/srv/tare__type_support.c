// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nourish_scale_msgs:srv/Tare.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nourish_scale_msgs/srv/tare__rosidl_typesupport_introspection_c.h"
#include "nourish_scale_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nourish_scale_msgs/srv/tare__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_scale_msgs__srv__Tare_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_members = {
  "nourish_scale_msgs__srv",  // message namespace
  "Tare_Request",  // message name
  1,  // number of fields
  sizeof(nourish_scale_msgs__srv__Tare_Request),
  Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_type_support_handle = {
  0,
  &Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_scale_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare_Request)() {
  if (!Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_type_support_handle.typesupport_identifier) {
    Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tare_Request__rosidl_typesupport_introspection_c__Tare_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nourish_scale_msgs/srv/tare__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nourish_scale_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nourish_scale_msgs/srv/tare__struct.h"


// Include directives for member types
// Member `response`
#include "nourish_scale_msgs/msg/response.h"
// Member `response`
#include "nourish_scale_msgs/msg/response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nourish_scale_msgs__srv__Tare_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_members = {
  "nourish_scale_msgs__srv",  // message namespace
  "Tare_Response",  // message name
  1,  // number of fields
  sizeof(nourish_scale_msgs__srv__Tare_Response),
  Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_type_support_handle = {
  0,
  &Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_scale_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare_Response)() {
  Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, msg, Response)();
  if (!Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_type_support_handle.typesupport_identifier) {
    Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tare_Response__rosidl_typesupport_introspection_c__Tare_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_scale_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nourish_scale_msgs/srv/tare__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_members = {
  "nourish_scale_msgs__srv",  // service namespace
  "Tare",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_Request_message_type_support_handle,
  NULL  // response message
  // nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_Response_message_type_support_handle
};

static rosidl_service_type_support_t nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_type_support_handle = {
  0,
  &nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nourish_scale_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare)() {
  if (!nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_type_support_handle.typesupport_identifier) {
    nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nourish_scale_msgs, srv, Tare_Response)()->data;
  }

  return &nourish_scale_msgs__srv__tare__rosidl_typesupport_introspection_c__Tare_service_type_support_handle;
}
