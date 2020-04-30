// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juice_spout_msgs:srv/SetFill.idl
// generated code does not contain a copyright notice
#include "juice_spout_msgs/srv/set_fill__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
juice_spout_msgs__srv__SetFill_Request__init(juice_spout_msgs__srv__SetFill_Request * msg)
{
  if (!msg) {
    return false;
  }
  // grams
  return true;
}

void
juice_spout_msgs__srv__SetFill_Request__fini(juice_spout_msgs__srv__SetFill_Request * msg)
{
  if (!msg) {
    return;
  }
  // grams
}

juice_spout_msgs__srv__SetFill_Request *
juice_spout_msgs__srv__SetFill_Request__create()
{
  juice_spout_msgs__srv__SetFill_Request * msg = (juice_spout_msgs__srv__SetFill_Request *)malloc(sizeof(juice_spout_msgs__srv__SetFill_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__srv__SetFill_Request));
  bool success = juice_spout_msgs__srv__SetFill_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__srv__SetFill_Request__destroy(juice_spout_msgs__srv__SetFill_Request * msg)
{
  if (msg) {
    juice_spout_msgs__srv__SetFill_Request__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__srv__SetFill_Request__Sequence__init(juice_spout_msgs__srv__SetFill_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__srv__SetFill_Request * data = NULL;
  if (size) {
    data = (juice_spout_msgs__srv__SetFill_Request *)calloc(size, sizeof(juice_spout_msgs__srv__SetFill_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__srv__SetFill_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__srv__SetFill_Request__fini(&data[i - 1]);
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
juice_spout_msgs__srv__SetFill_Request__Sequence__fini(juice_spout_msgs__srv__SetFill_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__srv__SetFill_Request__fini(&array->data[i]);
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

juice_spout_msgs__srv__SetFill_Request__Sequence *
juice_spout_msgs__srv__SetFill_Request__Sequence__create(size_t size)
{
  juice_spout_msgs__srv__SetFill_Request__Sequence * array = (juice_spout_msgs__srv__SetFill_Request__Sequence *)malloc(sizeof(juice_spout_msgs__srv__SetFill_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__srv__SetFill_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__srv__SetFill_Request__Sequence__destroy(juice_spout_msgs__srv__SetFill_Request__Sequence * array)
{
  if (array) {
    juice_spout_msgs__srv__SetFill_Request__Sequence__fini(array);
  }
  free(array);
}


bool
juice_spout_msgs__srv__SetFill_Response__init(juice_spout_msgs__srv__SetFill_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
juice_spout_msgs__srv__SetFill_Response__fini(juice_spout_msgs__srv__SetFill_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

juice_spout_msgs__srv__SetFill_Response *
juice_spout_msgs__srv__SetFill_Response__create()
{
  juice_spout_msgs__srv__SetFill_Response * msg = (juice_spout_msgs__srv__SetFill_Response *)malloc(sizeof(juice_spout_msgs__srv__SetFill_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_spout_msgs__srv__SetFill_Response));
  bool success = juice_spout_msgs__srv__SetFill_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_spout_msgs__srv__SetFill_Response__destroy(juice_spout_msgs__srv__SetFill_Response * msg)
{
  if (msg) {
    juice_spout_msgs__srv__SetFill_Response__fini(msg);
  }
  free(msg);
}


bool
juice_spout_msgs__srv__SetFill_Response__Sequence__init(juice_spout_msgs__srv__SetFill_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_spout_msgs__srv__SetFill_Response * data = NULL;
  if (size) {
    data = (juice_spout_msgs__srv__SetFill_Response *)calloc(size, sizeof(juice_spout_msgs__srv__SetFill_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_spout_msgs__srv__SetFill_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_spout_msgs__srv__SetFill_Response__fini(&data[i - 1]);
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
juice_spout_msgs__srv__SetFill_Response__Sequence__fini(juice_spout_msgs__srv__SetFill_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_spout_msgs__srv__SetFill_Response__fini(&array->data[i]);
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

juice_spout_msgs__srv__SetFill_Response__Sequence *
juice_spout_msgs__srv__SetFill_Response__Sequence__create(size_t size)
{
  juice_spout_msgs__srv__SetFill_Response__Sequence * array = (juice_spout_msgs__srv__SetFill_Response__Sequence *)malloc(sizeof(juice_spout_msgs__srv__SetFill_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_spout_msgs__srv__SetFill_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_spout_msgs__srv__SetFill_Response__Sequence__destroy(juice_spout_msgs__srv__SetFill_Response__Sequence * array)
{
  if (array) {
    juice_spout_msgs__srv__SetFill_Response__Sequence__fini(array);
  }
  free(array);
}
