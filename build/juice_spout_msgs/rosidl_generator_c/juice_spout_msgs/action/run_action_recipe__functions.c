// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juice_spout_msgs:action/RunActionRecipe.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/action/run_action_recipe__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `recipe_identifier`
#include "rosidl_generator_c/string_functions.h"

bool
juice_spout_msgs__action__RunActionRecipe_Goal__init(juice_spout_msgs__action__RunActionRecipe_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // recipe_identifier
  if (!rosidl_generator_c__String__init(&msg->recipe_identifier)) {
    juice_spout_msgs__action__RunActionRecipe_Goal__fini(msg);
    return false;
  }
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_Goal__fini(juice_spout_msgs__action__RunActionRecipe_Goal * msg)
{
  if (!msg) {
    return;
  }
  // recipe_identifier
  rosidl_generator_c__String__fini(&msg->recipe_identifier);
}

juice_spout_msgs__action__RunActionRecipe_Goal *
juice_spout_msgs__action__RunActionRecipe_Goal__create()
{
  juice_spout_msgs__action__RunActionRecipe_Goal * msg = (juice_spout_msgs__action__RunActionRecipe_Goal *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_Goal));
  bool success = juice_spout_msgs__action__RunActionRecipe_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_Goal__destroy(juice_spout_msgs__action__RunActionRecipe_Goal * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_Goal__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__init(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_Goal * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_Goal *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_Goal__Sequence *
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_Goal__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
juice_spout_msgs__action__RunActionRecipe_Result__init(juice_spout_msgs__action__RunActionRecipe_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final_status
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_Result__fini(juice_spout_msgs__action__RunActionRecipe_Result * msg)
{
  if (!msg) {
    return;
  }
  // final_status
}

juice_spout_msgs__action__RunActionRecipe_Result *
juice_spout_msgs__action__RunActionRecipe_Result__create()
{
  juice_spout_msgs__action__RunActionRecipe_Result * msg = (juice_spout_msgs__action__RunActionRecipe_Result *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_Result));
  bool success = juice_spout_msgs__action__RunActionRecipe_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_Result__destroy(juice_spout_msgs__action__RunActionRecipe_Result * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_Result__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__init(juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_Result * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_Result *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_Result__Sequence *
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_Result__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_Result__Sequence__fini(array);
  }
  free(array);
}


bool
juice_spout_msgs__action__RunActionRecipe_Feedback__init(juice_spout_msgs__action__RunActionRecipe_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percent_complete
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_Feedback__fini(juice_spout_msgs__action__RunActionRecipe_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percent_complete
}

juice_spout_msgs__action__RunActionRecipe_Feedback *
juice_spout_msgs__action__RunActionRecipe_Feedback__create()
{
  juice_spout_msgs__action__RunActionRecipe_Feedback * msg = (juice_spout_msgs__action__RunActionRecipe_Feedback *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_Feedback));
  bool success = juice_spout_msgs__action__RunActionRecipe_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_Feedback__destroy(juice_spout_msgs__action__RunActionRecipe_Feedback * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_Feedback__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__init(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_Feedback * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_Feedback *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence *
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__functions.h"

bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!juice_spout_msgs__action__RunActionRecipe_Goal__init(&msg->goal)) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  juice_spout_msgs__action__RunActionRecipe_Goal__fini(&msg->goal);
}

juice_spout_msgs__action__RunActionRecipe_SendGoal_Request *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__create()
{
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg = (juice_spout_msgs__action__RunActionRecipe_SendGoal_Request *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request));
  bool success = juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_SendGoal_Request *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

juice_spout_msgs__action__RunActionRecipe_SendGoal_Response *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__create()
{
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg = (juice_spout_msgs__action__RunActionRecipe_SendGoal_Response *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response));
  bool success = juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_SendGoal_Response *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

juice_spout_msgs__action__RunActionRecipe_GetResult_Request *
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__create()
{
  juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg = (juice_spout_msgs__action__RunActionRecipe_GetResult_Request *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Request));
  bool success = juice_spout_msgs__action__RunActionRecipe_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_GetResult_Request * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_GetResult_Request *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence *
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__functions.h"

bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!juice_spout_msgs__action__RunActionRecipe_Result__init(&msg->result)) {
    juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  juice_spout_msgs__action__RunActionRecipe_Result__fini(&msg->result);
}

juice_spout_msgs__action__RunActionRecipe_GetResult_Response *
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__create()
{
  juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg = (juice_spout_msgs__action__RunActionRecipe_GetResult_Response *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response));
  bool success = juice_spout_msgs__action__RunActionRecipe_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_GetResult_Response * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_GetResult_Response *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence *
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "juice_spout_msgs/action/run_action_recipe__functions.h"

bool
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__init(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!juice_spout_msgs__action__RunActionRecipe_Feedback__init(&msg->feedback)) {
    juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  juice_spout_msgs__action__RunActionRecipe_Feedback__fini(&msg->feedback);
}

juice_spout_msgs__action__RunActionRecipe_FeedbackMessage *
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__create()
{
  juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg = (juice_spout_msgs__action__RunActionRecipe_FeedbackMessage *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage));
  bool success = juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__destroy(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg)
{
  if (msg) {
    juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__init(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * data = NULL;
  if (size) {
    data = (juice_spout_msgs__action__RunActionRecipe_FeedbackMessage *)calloc(size, sizeof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence *
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__create(size_t size)
{
  juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array = (juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence *)malloc(sizeof(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array)
{
  if (array) {
    juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
