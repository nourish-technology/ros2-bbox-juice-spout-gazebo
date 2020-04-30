// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nourish_robot_arm_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/action/execute_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `robot_moves`
#include "nourish_robot_arm_msgs/msg/robot_move__functions.h"

bool
nourish_robot_arm_msgs__action__ExecutePath_Goal__init(nourish_robot_arm_msgs__action__ExecutePath_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // robot_moves
  if (!nourish_robot_arm_msgs__msg__RobotMove__Sequence__init(&msg->robot_moves, 0)) {
    nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(nourish_robot_arm_msgs__action__ExecutePath_Goal * msg)
{
  if (!msg) {
    return;
  }
  // robot_moves
  nourish_robot_arm_msgs__msg__RobotMove__Sequence__fini(&msg->robot_moves);
}

nourish_robot_arm_msgs__action__ExecutePath_Goal *
nourish_robot_arm_msgs__action__ExecutePath_Goal__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_Goal * msg = (nourish_robot_arm_msgs__action__ExecutePath_Goal *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_Goal));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Goal__destroy(nourish_robot_arm_msgs__action__ExecutePath_Goal * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_Goal * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_Goal *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_Result__init(nourish_robot_arm_msgs__action__ExecutePath_Result * msg)
{
  if (!msg) {
    return false;
  }
  // final_status
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Result__fini(nourish_robot_arm_msgs__action__ExecutePath_Result * msg)
{
  if (!msg) {
    return;
  }
  // final_status
}

nourish_robot_arm_msgs__action__ExecutePath_Result *
nourish_robot_arm_msgs__action__ExecutePath_Result__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_Result * msg = (nourish_robot_arm_msgs__action__ExecutePath_Result *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_Result));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Result__destroy(nourish_robot_arm_msgs__action__ExecutePath_Result * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_Result__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_Result * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_Result *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_Result__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_Result__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__fini(array);
  }
  free(array);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_Feedback__init(nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini(nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

nourish_robot_arm_msgs__action__ExecutePath_Feedback *
nourish_robot_arm_msgs__action__ExecutePath_Feedback__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg = (nourish_robot_arm_msgs__action__ExecutePath_Feedback *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_Feedback));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__destroy(nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_Feedback * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_Feedback *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__functions.h"

bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!nourish_robot_arm_msgs__action__ExecutePath_Goal__init(&msg->goal)) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(&msg->goal);
}

nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg = (nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg = (nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg = (nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__functions.h"

bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!nourish_robot_arm_msgs__action__ExecutePath_Result__init(&msg->result)) {
    nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  nourish_robot_arm_msgs__action__ExecutePath_Result__fini(&msg->result);
}

nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg = (nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "nourish_robot_arm_msgs/action/execute_path__functions.h"

bool
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__init(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!nourish_robot_arm_msgs__action__ExecutePath_Feedback__init(&msg->feedback)) {
    nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini(&msg->feedback);
}

nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage *
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__create()
{
  nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg = (nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage));
  bool success = nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__destroy(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage *)calloc(size, sizeof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(&array->data[i]);
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

nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array = (nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
