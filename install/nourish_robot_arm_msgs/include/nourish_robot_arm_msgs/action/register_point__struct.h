// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_tool'
#include "nourish_robot_arm_msgs/msg/tool__struct.h"
// Member 'speed'
#include "nourish_robot_arm_msgs/msg/speed__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_Goal
{
  nourish_robot_arm_msgs__msg__Tool sensor_tool;
  bool ignore_sensor;
  nourish_robot_arm_msgs__msg__Speed speed;
  float x_offset;
  float y_offset;
  float z_offset;
  float x_rot;
  float y_rot;
  float z_rot;
} nourish_robot_arm_msgs__action__RegisterPoint_Goal;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_Goal.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_Goal__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_Goal__Sequence;


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_UNKNOWN = 0
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_SUCCESS = 1
};

/// Constant 'RESULT_ERR_ROBOT_UNHEALTHY'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_ERR_ROBOT_UNHEALTHY = 2
};

/// Constant 'RESULT_ERR_SENSOR_ACTIVATED'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_ERR_SENSOR_ACTIVATED = 3
};

/// Constant 'RESULT_ERR_SENSOR_NEVER_ENGAGED'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_ERR_SENSOR_NEVER_ENGAGED = 4
};

/// Constant 'RESULT_ERR_UNKNOWN'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_ERR_UNKNOWN = 5
};

/// Constant 'RESULT_ERR_BUSY'.
enum
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result__RESULT_ERR_BUSY = 6
};

// Include directives for member types
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_Result
{
  uint8_t final_status;
  nourish_robot_arm_msgs__msg__Pose pose;
} nourish_robot_arm_msgs__action__RegisterPoint_Result;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_Result.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_Result__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_Result__Sequence;


// Constants defined in the message

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nourish_robot_arm_msgs__action__RegisterPoint_Feedback;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_Feedback.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_Feedback__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "nourish_robot_arm_msgs/action/register_point__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nourish_robot_arm_msgs__action__RegisterPoint_Goal goal;
} nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response
{
  int8_t status;
  nourish_robot_arm_msgs__action__RegisterPoint_Result result;
} nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.h"

// Struct defined in action/RegisterPoint in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nourish_robot_arm_msgs__action__RegisterPoint_Feedback feedback;
} nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage;

// Struct for a sequence of nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage.
typedef struct nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage__Sequence
{
  nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__STRUCT_H_
