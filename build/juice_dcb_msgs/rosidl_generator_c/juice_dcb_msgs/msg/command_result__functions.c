// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juice_dcb_msgs:msg/CommandResult.idl
// generated code does not contain a copyright notice
#include "juice_dcb_msgs/msg/command_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `debug_msg`
#include "rosidl_generator_c/string_functions.h"

bool
juice_dcb_msgs__msg__CommandResult__init(juice_dcb_msgs__msg__CommandResult * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // debug_msg
  if (!rosidl_generator_c__String__init(&msg->debug_msg)) {
    juice_dcb_msgs__msg__CommandResult__fini(msg);
    return false;
  }
  return true;
}

void
juice_dcb_msgs__msg__CommandResult__fini(juice_dcb_msgs__msg__CommandResult * msg)
{
  if (!msg) {
    return;
  }
  // status
  // debug_msg
  rosidl_generator_c__String__fini(&msg->debug_msg);
}

juice_dcb_msgs__msg__CommandResult *
juice_dcb_msgs__msg__CommandResult__create()
{
  juice_dcb_msgs__msg__CommandResult * msg = (juice_dcb_msgs__msg__CommandResult *)malloc(sizeof(juice_dcb_msgs__msg__CommandResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_dcb_msgs__msg__CommandResult));
  bool success = juice_dcb_msgs__msg__CommandResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_dcb_msgs__msg__CommandResult__destroy(juice_dcb_msgs__msg__CommandResult * msg)
{
  if (msg) {
    juice_dcb_msgs__msg__CommandResult__fini(msg);
  }
  free(msg);
}


bool
juice_dcb_msgs__msg__CommandResult__Sequence__init(juice_dcb_msgs__msg__CommandResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_dcb_msgs__msg__CommandResult * data = NULL;
  if (size) {
    data = (juice_dcb_msgs__msg__CommandResult *)calloc(size, sizeof(juice_dcb_msgs__msg__CommandResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_dcb_msgs__msg__CommandResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_dcb_msgs__msg__CommandResult__fini(&data[i - 1]);
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
juice_dcb_msgs__msg__CommandResult__Sequence__fini(juice_dcb_msgs__msg__CommandResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_dcb_msgs__msg__CommandResult__fini(&array->data[i]);
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

juice_dcb_msgs__msg__CommandResult__Sequence *
juice_dcb_msgs__msg__CommandResult__Sequence__create(size_t size)
{
  juice_dcb_msgs__msg__CommandResult__Sequence * array = (juice_dcb_msgs__msg__CommandResult__Sequence *)malloc(sizeof(juice_dcb_msgs__msg__CommandResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_dcb_msgs__msg__CommandResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_dcb_msgs__msg__CommandResult__Sequence__destroy(juice_dcb_msgs__msg__CommandResult__Sequence * array)
{
  if (array) {
    juice_dcb_msgs__msg__CommandResult__Sequence__fini(array);
  }
  free(array);
}
