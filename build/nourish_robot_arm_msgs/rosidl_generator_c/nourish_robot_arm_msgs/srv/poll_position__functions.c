// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/srv/poll_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `work_object`
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"
// Member `tool`
#include "nourish_robot_arm_msgs/msg/tool__functions.h"

bool
nourish_robot_arm_msgs__srv__PollPosition_Request__init(nourish_robot_arm_msgs__srv__PollPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // work_object
  if (!nourish_robot_arm_msgs__msg__WorkObject__init(&msg->work_object)) {
    nourish_robot_arm_msgs__srv__PollPosition_Request__fini(msg);
    return false;
  }
  // tool
  if (!nourish_robot_arm_msgs__msg__Tool__init(&msg->tool)) {
    nourish_robot_arm_msgs__srv__PollPosition_Request__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__srv__PollPosition_Request__fini(nourish_robot_arm_msgs__srv__PollPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // work_object
  nourish_robot_arm_msgs__msg__WorkObject__fini(&msg->work_object);
  // tool
  nourish_robot_arm_msgs__msg__Tool__fini(&msg->tool);
}

nourish_robot_arm_msgs__srv__PollPosition_Request *
nourish_robot_arm_msgs__srv__PollPosition_Request__create()
{
  nourish_robot_arm_msgs__srv__PollPosition_Request * msg = (nourish_robot_arm_msgs__srv__PollPosition_Request *)malloc(sizeof(nourish_robot_arm_msgs__srv__PollPosition_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__srv__PollPosition_Request));
  bool success = nourish_robot_arm_msgs__srv__PollPosition_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__srv__PollPosition_Request__destroy(nourish_robot_arm_msgs__srv__PollPosition_Request * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__srv__PollPosition_Request__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__init(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__srv__PollPosition_Request * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__srv__PollPosition_Request *)calloc(size, sizeof(nourish_robot_arm_msgs__srv__PollPosition_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__srv__PollPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__srv__PollPosition_Request__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__fini(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__srv__PollPosition_Request__fini(&array->data[i]);
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

nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence *
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array = (nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__destroy(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `joint`
#include "nourish_robot_arm_msgs/msg/joint__functions.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose__functions.h"

bool
nourish_robot_arm_msgs__srv__PollPosition_Response__init(nourish_robot_arm_msgs__srv__PollPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // joint
  if (!nourish_robot_arm_msgs__msg__Joint__init(&msg->joint)) {
    nourish_robot_arm_msgs__srv__PollPosition_Response__fini(msg);
    return false;
  }
  // pose
  if (!nourish_robot_arm_msgs__msg__Pose__init(&msg->pose)) {
    nourish_robot_arm_msgs__srv__PollPosition_Response__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__srv__PollPosition_Response__fini(nourish_robot_arm_msgs__srv__PollPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // joint
  nourish_robot_arm_msgs__msg__Joint__fini(&msg->joint);
  // pose
  nourish_robot_arm_msgs__msg__Pose__fini(&msg->pose);
}

nourish_robot_arm_msgs__srv__PollPosition_Response *
nourish_robot_arm_msgs__srv__PollPosition_Response__create()
{
  nourish_robot_arm_msgs__srv__PollPosition_Response * msg = (nourish_robot_arm_msgs__srv__PollPosition_Response *)malloc(sizeof(nourish_robot_arm_msgs__srv__PollPosition_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__srv__PollPosition_Response));
  bool success = nourish_robot_arm_msgs__srv__PollPosition_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__srv__PollPosition_Response__destroy(nourish_robot_arm_msgs__srv__PollPosition_Response * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__srv__PollPosition_Response__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__init(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__srv__PollPosition_Response * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__srv__PollPosition_Response *)calloc(size, sizeof(nourish_robot_arm_msgs__srv__PollPosition_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__srv__PollPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__srv__PollPosition_Response__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__fini(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__srv__PollPosition_Response__fini(&array->data[i]);
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

nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence *
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array = (nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__destroy(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__fini(array);
  }
  free(array);
}
