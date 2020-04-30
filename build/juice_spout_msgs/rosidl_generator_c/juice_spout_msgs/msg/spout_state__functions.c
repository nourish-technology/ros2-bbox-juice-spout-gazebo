// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/msg/spout_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
juice_spout_msgs__msg__SpoutState__init(juice_spout_msgs__msg__SpoutState * msg)
{
  if (!msg) {
    return false;
  }
  // is_healthy
  // is_busy
  // fill_level
  return true;
}

void
juice_spout_msgs__msg__SpoutState__fini(juice_spout_msgs__msg__SpoutState * msg)
{
  if (!msg) {
    return;
  }
  // is_healthy
  // is_busy
  // fill_level
}

juice_spout_msgs__msg__SpoutState *
juice_spout_msgs__msg__SpoutState__create()
{
  juice_spout_msgs__msg__SpoutState * msg = (juice_spout_msgs__msg__SpoutState *)malloc(sizeof(juice_spout_msgs__msg__SpoutState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__msg__SpoutState));
  bool success = juice_spout_msgs__msg__SpoutState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__msg__SpoutState__destroy(juice_spout_msgs__msg__SpoutState * msg)
{
  if (msg) {
    juice_spout_msgs__msg__SpoutState__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__msg__SpoutState__Sequence__init(juice_spout_msgs__msg__SpoutState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__msg__SpoutState * data = NULL;
  if (size) {
    data = (juice_spout_msgs__msg__SpoutState *)calloc(size, sizeof(juice_spout_msgs__msg__SpoutState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__msg__SpoutState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__msg__SpoutState__fini(&data[i - 1]);
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
juice_spout_msgs__msg__SpoutState__Sequence__fini(juice_spout_msgs__msg__SpoutState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__msg__SpoutState__fini(&array->data[i]);
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

juice_spout_msgs__msg__SpoutState__Sequence *
juice_spout_msgs__msg__SpoutState__Sequence__create(size_t size)
{
  juice_spout_msgs__msg__SpoutState__Sequence * array = (juice_spout_msgs__msg__SpoutState__Sequence *)malloc(sizeof(juice_spout_msgs__msg__SpoutState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__msg__SpoutState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__msg__SpoutState__Sequence__destroy(juice_spout_msgs__msg__SpoutState__Sequence * array)
{
  if (array) {
    juice_spout_msgs__msg__SpoutState__Sequence__fini(array);
  }
  free(array);
}
