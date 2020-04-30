// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_spout_msgs:srv/RunRecipe.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__STRUCT_H_
#define JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'recipe_name'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/RunRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__srv__RunRecipe_Request
{
  rosidl_generator_c__String recipe_name;
} juice_spout_msgs__srv__RunRecipe_Request;

// Struct for a sequence of juice_spout_msgs__srv__RunRecipe_Request.
typedef struct juice_spout_msgs__srv__RunRecipe_Request__Sequence
{
  juice_spout_msgs__srv__RunRecipe_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__srv__RunRecipe_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/RunRecipe in the package juice_spout_msgs.
typedef struct juice_spout_msgs__srv__RunRecipe_Response
{
  rosidl_generator_c__String message;
} juice_spout_msgs__srv__RunRecipe_Response;

// Struct for a sequence of juice_spout_msgs__srv__RunRecipe_Response.
typedef struct juice_spout_msgs__srv__RunRecipe_Response__Sequence
{
  juice_spout_msgs__srv__RunRecipe_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__srv__RunRecipe_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__STRUCT_H_
