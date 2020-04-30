// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_scale_msgs:srv/Tare.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_SCALE_MSGS__SRV__TARE__STRUCT_H_
#define NOURISH_SCALE_MSGS__SRV__TARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Tare in the package nourish_scale_msgs.
typedef struct nourish_scale_msgs__srv__Tare_Request
{
  uint8_t structure_needs_at_least_one_member;
} nourish_scale_msgs__srv__Tare_Request;

// Struct for a sequence of nourish_scale_msgs__srv__Tare_Request.
typedef struct nourish_scale_msgs__srv__Tare_Request__Sequence
{
  nourish_scale_msgs__srv__Tare_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_scale_msgs__srv__Tare_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "nourish_scale_msgs/msg/response__struct.h"

// Struct defined in srv/Tare in the package nourish_scale_msgs.
typedef struct nourish_scale_msgs__srv__Tare_Response
{
  nourish_scale_msgs__msg__Response response;
} nourish_scale_msgs__srv__Tare_Response;

// Struct for a sequence of nourish_scale_msgs__srv__Tare_Response.
typedef struct nourish_scale_msgs__srv__Tare_Response__Sequence
{
  nourish_scale_msgs__srv__Tare_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_scale_msgs__srv__Tare_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_SCALE_MSGS__SRV__TARE__STRUCT_H_
