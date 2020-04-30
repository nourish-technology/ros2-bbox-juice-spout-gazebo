// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_spout_msgs:action/RunActionRecipe.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__STRUCT_H_
#define JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'recipe_identifier'
#include "rosidl_generator_c/string.h"

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_Goal
{
  rosidl_generator_c__String recipe_identifier;
} juice_spout_msgs__action__RunActionRecipe_Goal;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_Goal.
typedef struct juice_spout_msgs__action__RunActionRecipe_Goal__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_Goal__Sequence;


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_UNKNOWN = 0
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_SUCCESS = 1
};

/// Constant 'RESULT_ERROR_UNKNOWN'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_ERROR_UNKNOWN = 2
};

/// Constant 'RESULT_ERROR_TIME_OUT'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_ERROR_TIME_OUT = 3
};

/// Constant 'RESULT_ERROR_BECAME_UNHEALTHY'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_ERROR_BECAME_UNHEALTHY = 4
};

/// Constant 'RESULT_ERROR_CUP_REMOVED'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_ERROR_CUP_REMOVED = 5
};

/// Constant 'RESULT_ERROR_INSUFFICIENT_FILL_LEVEL'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_ERROR_INSUFFICIENT_FILL_LEVEL = 6
};

/// Constant 'RESULT_ERROR_INVALID_RECIPE'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_ERROR_INVALID_RECIPE = 7
};

/// Constant 'RESULT_MANUALLY_STOPPED'.
enum
{
  juice_spout_msgs__action__RunActionRecipe_Result__RESULT_MANUALLY_STOPPED = 8
};

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_Result
{
  uint8_t final_status;
} juice_spout_msgs__action__RunActionRecipe_Result;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_Result.
typedef struct juice_spout_msgs__action__RunActionRecipe_Result__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_Result__Sequence;


// Constants defined in the message

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_Feedback
{
  float percent_complete;
} juice_spout_msgs__action__RunActionRecipe_Feedback;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_Feedback.
typedef struct juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "juice_spout_msgs/action/run_action_recipe__struct.h"

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  juice_spout_msgs__action__RunActionRecipe_Goal goal;
} juice_spout_msgs__action__RunActionRecipe_SendGoal_Request;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_SendGoal_Request.
typedef struct juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} juice_spout_msgs__action__RunActionRecipe_SendGoal_Response;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_SendGoal_Response.
typedef struct juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} juice_spout_msgs__action__RunActionRecipe_GetResult_Request;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_GetResult_Request.
typedef struct juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_GetResult_Response
{
  int8_t status;
  juice_spout_msgs__action__RunActionRecipe_Result result;
} juice_spout_msgs__action__RunActionRecipe_GetResult_Response;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_GetResult_Response.
typedef struct juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__struct.h"

// Struct defined in action/RunActionRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__action__RunActionRecipe_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  juice_spout_msgs__action__RunActionRecipe_Feedback feedback;
} juice_spout_msgs__action__RunActionRecipe_FeedbackMessage;

// Struct for a sequence of juice_spout_msgs__action__RunActionRecipe_FeedbackMessage.
typedef struct juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence
{
  juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__STRUCT_H_
