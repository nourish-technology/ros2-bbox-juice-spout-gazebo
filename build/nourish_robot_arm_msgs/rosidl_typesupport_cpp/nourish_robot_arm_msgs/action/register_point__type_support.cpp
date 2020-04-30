// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_Goal_type_support_ids_t;

static const _RegisterPoint_Goal_type_support_ids_t _RegisterPoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_Goal_type_support_symbol_names_t _RegisterPoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Goal)),
  }
};

typedef struct _RegisterPoint_Goal_type_support_data_t
{
  void * data[4];
} _RegisterPoint_Goal_type_support_data_t;

static _RegisterPoint_Goal_type_support_data_t _RegisterPoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_Goal_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Goal>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Goal)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Goal>();
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
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_Result_type_support_ids_t;

static const _RegisterPoint_Result_type_support_ids_t _RegisterPoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_Result_type_support_symbol_names_t _RegisterPoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Result)),
  }
};

typedef struct _RegisterPoint_Result_type_support_data_t
{
  void * data[4];
} _RegisterPoint_Result_type_support_data_t;

static _RegisterPoint_Result_type_support_data_t _RegisterPoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_Result_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Result>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Result)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Result>();
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
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_Feedback_type_support_ids_t;

static const _RegisterPoint_Feedback_type_support_ids_t _RegisterPoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_Feedback_type_support_symbol_names_t _RegisterPoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)),
  }
};

typedef struct _RegisterPoint_Feedback_type_support_data_t
{
  void * data[4];
} _RegisterPoint_Feedback_type_support_data_t;

static _RegisterPoint_Feedback_type_support_data_t _RegisterPoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_Feedback_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_Feedback)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_Feedback>();
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
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_SendGoal_Request_type_support_ids_t;

static const _RegisterPoint_SendGoal_Request_type_support_ids_t _RegisterPoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_SendGoal_Request_type_support_symbol_names_t _RegisterPoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)),
  }
};

typedef struct _RegisterPoint_SendGoal_Request_type_support_data_t
{
  void * data[4];
} _RegisterPoint_SendGoal_Request_type_support_data_t;

static _RegisterPoint_SendGoal_Request_type_support_data_t _RegisterPoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_SendGoal_Request_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Request)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request>();
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
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_SendGoal_Response_type_support_ids_t;

static const _RegisterPoint_SendGoal_Response_type_support_ids_t _RegisterPoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_SendGoal_Response_type_support_symbol_names_t _RegisterPoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)),
  }
};

typedef struct _RegisterPoint_SendGoal_Response_type_support_data_t
{
  void * data[4];
} _RegisterPoint_SendGoal_Response_type_support_data_t;

static _RegisterPoint_SendGoal_Response_type_support_data_t _RegisterPoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_SendGoal_Response_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal_Response)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_SendGoal_type_support_ids_t;

static const _RegisterPoint_SendGoal_type_support_ids_t _RegisterPoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_SendGoal_type_support_symbol_names_t _RegisterPoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_SendGoal)),
  }
};

typedef struct _RegisterPoint_SendGoal_type_support_data_t
{
  void * data[4];
} _RegisterPoint_SendGoal_type_support_data_t;

static _RegisterPoint_SendGoal_type_support_data_t _RegisterPoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_SendGoal_service_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RegisterPoint_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_GetResult_Request_type_support_ids_t;

static const _RegisterPoint_GetResult_Request_type_support_ids_t _RegisterPoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_GetResult_Request_type_support_symbol_names_t _RegisterPoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)),
  }
};

typedef struct _RegisterPoint_GetResult_Request_type_support_data_t
{
  void * data[4];
} _RegisterPoint_GetResult_Request_type_support_data_t;

static _RegisterPoint_GetResult_Request_type_support_data_t _RegisterPoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_GetResult_Request_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Request)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request>();
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
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_GetResult_Response_type_support_ids_t;

static const _RegisterPoint_GetResult_Response_type_support_ids_t _RegisterPoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_GetResult_Response_type_support_symbol_names_t _RegisterPoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)),
  }
};

typedef struct _RegisterPoint_GetResult_Response_type_support_data_t
{
  void * data[4];
} _RegisterPoint_GetResult_Response_type_support_data_t;

static _RegisterPoint_GetResult_Response_type_support_data_t _RegisterPoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_GetResult_Response_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult_Response)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_GetResult_type_support_ids_t;

static const _RegisterPoint_GetResult_type_support_ids_t _RegisterPoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_GetResult_type_support_symbol_names_t _RegisterPoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_GetResult)),
  }
};

typedef struct _RegisterPoint_GetResult_type_support_data_t
{
  void * data[4];
} _RegisterPoint_GetResult_type_support_data_t;

static _RegisterPoint_GetResult_type_support_data_t _RegisterPoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_GetResult_service_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RegisterPoint_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_GetResult>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
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

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RegisterPoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[4];
} _RegisterPoint_FeedbackMessage_type_support_ids_t;

static const _RegisterPoint_FeedbackMessage_type_support_ids_t _RegisterPoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_opensplice_cpp",  // ::rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  }
};

typedef struct _RegisterPoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[4];
} _RegisterPoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RegisterPoint_FeedbackMessage_type_support_symbol_names_t _RegisterPoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)),
  }
};

typedef struct _RegisterPoint_FeedbackMessage_type_support_data_t
{
  void * data[4];
} _RegisterPoint_FeedbackMessage_type_support_data_t;

static _RegisterPoint_FeedbackMessage_type_support_data_t _RegisterPoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RegisterPoint_FeedbackMessage_message_typesupport_map = {
  4,
  "nourish_robot_arm_msgs",
  &_RegisterPoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RegisterPoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RegisterPoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RegisterPoint_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RegisterPoint_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage>()
{
  return &::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, nourish_robot_arm_msgs, action, RegisterPoint_FeedbackMessage)() {
  return get_message_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_generator_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace nourish_robot_arm_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RegisterPoint_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<nourish_robot_arm_msgs::action::RegisterPoint>()
{
  using ::nourish_robot_arm_msgs::action::rosidl_typesupport_cpp::RegisterPoint_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RegisterPoint_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::nourish_robot_arm_msgs::action::RegisterPoint::Impl::SendGoalService>();
  RegisterPoint_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::nourish_robot_arm_msgs::action::RegisterPoint::Impl::GetResultService>();
  RegisterPoint_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::nourish_robot_arm_msgs::action::RegisterPoint::Impl::CancelGoalService>();
  RegisterPoint_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::nourish_robot_arm_msgs::action::RegisterPoint::Impl::FeedbackMessage>();
  RegisterPoint_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::nourish_robot_arm_msgs::action::RegisterPoint::Impl::GoalStatusMessage>();
  return &RegisterPoint_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
