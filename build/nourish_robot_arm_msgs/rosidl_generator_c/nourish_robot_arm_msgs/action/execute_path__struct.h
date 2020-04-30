// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__ACTION__EXECUTE_PATH__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__ACTION__EXECUTE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_moves'
#include "nourish_robot_arm_msgs/msg/robot_move__struct.h"

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_Goal
{
  nourish_robot_arm_msgs__msg__RobotMove__Sequence robot_moves;
} nourish_robot_arm_msgs__action__ExecutePath_Goal;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_Goal.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence;


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN'.
enum
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__RESULT_UNKNOWN = 0
};

/// Constant 'RESULT_ERROR_UNHEALTHY'.
enum
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__RESULT_ERROR_UNHEALTHY = 1
};

/// Constant 'RESULT_ERROR_BUSY'.
enum
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__RESULT_ERROR_BUSY = 2
};

/// Constant 'RESULT_ERROR_MOVE_FAILED'.
enum
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__RESULT_ERROR_MOVE_FAILED = 3
};

/// Constant 'RESULT_ERROR_UNKNOWN'.
enum
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__RESULT_ERROR_UNKNOWN = 4
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__RESULT_SUCCESS = 5
};

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_Result
{
  uint8_t final_status;
} nourish_robot_arm_msgs__action__ExecutePath_Result;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_Result.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence;


// Constants defined in the message

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nourish_robot_arm_msgs__action__ExecutePath_Feedback;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_Feedback.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "nourish_robot_arm_msgs/action/execute_path__struct.h"

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nourish_robot_arm_msgs__action__ExecutePath_Goal goal;
} nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response
{
  int8_t status;
  nourish_robot_arm_msgs__action__ExecutePath_Result result;
} nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__struct.h"

// Struct defined in action/ExecutePath in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nourish_robot_arm_msgs__action__ExecutePath_Feedback feedback;
} nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage;

// Struct for a sequence of nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage.
typedef struct nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence
{
  nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__ACTION__EXECUTE_PATH__STRUCT_H_
