// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_scale_msgs:srv/Tare.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_SCALE_MSGS__SRV__TARE__FUNCTIONS_H_
#define NOURISH_SCALE_MSGS__SRV__TARE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nourish_scale_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nourish_scale_msgs/srv/tare__struct.h"

/// Initialize srv/Tare message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_scale_msgs__srv__Tare_Request
 * )) before or use
 * nourish_scale_msgs__srv__Tare_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
bool
nourish_scale_msgs__srv__Tare_Request__init(nourish_scale_msgs__srv__Tare_Request * msg);

/// Finalize srv/Tare message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Request__fini(nourish_scale_msgs__srv__Tare_Request * msg);

/// Create srv/Tare message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_scale_msgs__srv__Tare_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
nourish_scale_msgs__srv__Tare_Request *
nourish_scale_msgs__srv__Tare_Request__create();

/// Destroy srv/Tare message.
/**
 * It calls
 * nourish_scale_msgs__srv__Tare_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Request__destroy(nourish_scale_msgs__srv__Tare_Request * msg);


/// Initialize array of srv/Tare messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_scale_msgs__srv__Tare_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
bool
nourish_scale_msgs__srv__Tare_Request__Sequence__init(nourish_scale_msgs__srv__Tare_Request__Sequence * array, size_t size);

/// Finalize array of srv/Tare messages.
/**
 * It calls
 * nourish_scale_msgs__srv__Tare_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Request__Sequence__fini(nourish_scale_msgs__srv__Tare_Request__Sequence * array);

/// Create array of srv/Tare messages.
/**
 * It allocates the memory for the array and calls
 * nourish_scale_msgs__srv__Tare_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
nourish_scale_msgs__srv__Tare_Request__Sequence *
nourish_scale_msgs__srv__Tare_Request__Sequence__create(size_t size);

/// Destroy array of srv/Tare messages.
/**
 * It calls
 * nourish_scale_msgs__srv__Tare_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Request__Sequence__destroy(nourish_scale_msgs__srv__Tare_Request__Sequence * array);

/// Initialize srv/Tare message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_scale_msgs__srv__Tare_Response
 * )) before or use
 * nourish_scale_msgs__srv__Tare_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
bool
nourish_scale_msgs__srv__Tare_Response__init(nourish_scale_msgs__srv__Tare_Response * msg);

/// Finalize srv/Tare message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Response__fini(nourish_scale_msgs__srv__Tare_Response * msg);

/// Create srv/Tare message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_scale_msgs__srv__Tare_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
nourish_scale_msgs__srv__Tare_Response *
nourish_scale_msgs__srv__Tare_Response__create();

/// Destroy srv/Tare message.
/**
 * It calls
 * nourish_scale_msgs__srv__Tare_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Response__destroy(nourish_scale_msgs__srv__Tare_Response * msg);


/// Initialize array of srv/Tare messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_scale_msgs__srv__Tare_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
bool
nourish_scale_msgs__srv__Tare_Response__Sequence__init(nourish_scale_msgs__srv__Tare_Response__Sequence * array, size_t size);

/// Finalize array of srv/Tare messages.
/**
 * It calls
 * nourish_scale_msgs__srv__Tare_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Response__Sequence__fini(nourish_scale_msgs__srv__Tare_Response__Sequence * array);

/// Create array of srv/Tare messages.
/**
 * It allocates the memory for the array and calls
 * nourish_scale_msgs__srv__Tare_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
nourish_scale_msgs__srv__Tare_Response__Sequence *
nourish_scale_msgs__srv__Tare_Response__Sequence__create(size_t size);

/// Destroy array of srv/Tare messages.
/**
 * It calls
 * nourish_scale_msgs__srv__Tare_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_scale_msgs
void
nourish_scale_msgs__srv__Tare_Response__Sequence__destroy(nourish_scale_msgs__srv__Tare_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_SCALE_MSGS__SRV__TARE__FUNCTIONS_H_
