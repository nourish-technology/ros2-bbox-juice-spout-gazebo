// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "gazebo_msgs/srv/set_entity_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetEntityState_Request_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _SetEntityState_Request_type_support_ids_t;

static const _SetEntityState_Request_type_support_ids_t _SetEntityState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _SetEntityState_Request_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _SetEntityState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEntityState_Request_type_support_symbol_names_t _SetEntityState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, gazebo_msgs, srv, SetEntityState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, SetEntityState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, SetEntityState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, gazebo_msgs, srv, SetEntityState_Request)),
  }
};

typedef struct _SetEntityState_Request_type_support_data_t
{
  void * data[4];
} _SetEntityState_Request_type_support_data_t;

static _SetEntityState_Request_type_support_data_t _SetEntityState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEntityState_Request_message_typesupport_map = {
  4,
  "gazebo_msgs",
  &_SetEntityState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetEntityState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetEntityState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEntityState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEntityState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::SetEntityState_Request>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::SetEntityState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, SetEntityState_Request)() {
  return get_message_type_support_handle<gazebo_msgs::srv::SetEntityState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/set_entity_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetEntityState_Response_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _SetEntityState_Response_type_support_ids_t;

static const _SetEntityState_Response_type_support_ids_t _SetEntityState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _SetEntityState_Response_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _SetEntityState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEntityState_Response_type_support_symbol_names_t _SetEntityState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, gazebo_msgs, srv, SetEntityState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, SetEntityState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, SetEntityState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, gazebo_msgs, srv, SetEntityState_Response)),
  }
};

typedef struct _SetEntityState_Response_type_support_data_t
{
  void * data[4];
} _SetEntityState_Response_type_support_data_t;

static _SetEntityState_Response_type_support_data_t _SetEntityState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEntityState_Response_message_typesupport_map = {
  4,
  "gazebo_msgs",
  &_SetEntityState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetEntityState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetEntityState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetEntityState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEntityState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::srv::SetEntityState_Response>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::SetEntityState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gazebo_msgs, srv, SetEntityState_Response)() {
  return get_message_type_support_handle<gazebo_msgs::srv::SetEntityState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/srv/set_entity_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gazebo_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetEntityState_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _SetEntityState_type_support_ids_t;

static const _SetEntityState_type_support_ids_t _SetEntityState_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _SetEntityState_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _SetEntityState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetEntityState_type_support_symbol_names_t _SetEntityState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, gazebo_msgs, srv, SetEntityState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, srv, SetEntityState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, srv, SetEntityState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, gazebo_msgs, srv, SetEntityState)),
  }
};

typedef struct _SetEntityState_type_support_data_t
{
  void * data[4];
} _SetEntityState_type_support_data_t;

static _SetEntityState_type_support_data_t _SetEntityState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetEntityState_service_typesupport_map = {
  4,
  "gazebo_msgs",
  &_SetEntityState_service_typesupport_ids.typesupport_identifier[0],
  &_SetEntityState_service_typesupport_symbol_names.symbol_name[0],
  &_SetEntityState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetEntityState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetEntityState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gazebo_msgs::srv::SetEntityState>()
{
  return &::gazebo_msgs::srv::rosidl_typesupport_cpp::SetEntityState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
