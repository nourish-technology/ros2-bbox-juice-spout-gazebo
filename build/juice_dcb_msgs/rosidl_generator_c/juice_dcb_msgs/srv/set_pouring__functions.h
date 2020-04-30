// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__SRV__SET_POURING__FUNCTIONS_H_
#define JUICE_DCB_MSGS__SRV__SET_POURING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "juice_dcb_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "juice_dcb_msgs/srv/set_pouring__struct.h"

/// Initialize srv/SetPouring message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_dcb_msgs__srv__SetPouring_Request
 * )) before or use
 * juice_dcb_msgs__srv__SetPouring_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
bool
juice_dcb_msgs__srv__SetPouring_Request__init(juice_dcb_msgs__srv__SetPouring_Request * msg);

/// Finalize srv/SetPouring message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Request__fini(juice_dcb_msgs__srv__SetPouring_Request * msg);

/// Create srv/SetPouring message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_dcb_msgs__srv__SetPouring_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
juice_dcb_msgs__srv__SetPouring_Request *
juice_dcb_msgs__srv__SetPouring_Request__create();

/// Destroy srv/SetPouring message.
/**
 * It calls
 * juice_dcb_msgs__srv__SetPouring_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Request__destroy(juice_dcb_msgs__srv__SetPouring_Request * msg);


/// Initialize array of srv/SetPouring messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_dcb_msgs__srv__SetPouring_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
bool
juice_dcb_msgs__srv__SetPouring_Request__Sequence__init(juice_dcb_msgs__srv__SetPouring_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetPouring messages.
/**
 * It calls
 * juice_dcb_msgs__srv__SetPouring_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Request__Sequence__fini(juice_dcb_msgs__srv__SetPouring_Request__Sequence * array);

/// Create array of srv/SetPouring messages.
/**
 * It allocates the memory for the array and calls
 * juice_dcb_msgs__srv__SetPouring_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
juice_dcb_msgs__srv__SetPouring_Request__Sequence *
juice_dcb_msgs__srv__SetPouring_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetPouring messages.
/**
 * It calls
 * juice_dcb_msgs__srv__SetPouring_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Request__Sequence__destroy(juice_dcb_msgs__srv__SetPouring_Request__Sequence * array);

/// Initialize srv/SetPouring message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_dcb_msgs__srv__SetPouring_Response
 * )) before or use
 * juice_dcb_msgs__srv__SetPouring_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
bool
juice_dcb_msgs__srv__SetPouring_Response__init(juice_dcb_msgs__srv__SetPouring_Response * msg);

/// Finalize srv/SetPouring message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Response__fini(juice_dcb_msgs__srv__SetPouring_Response * msg);

/// Create srv/SetPouring message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_dcb_msgs__srv__SetPouring_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
juice_dcb_msgs__srv__SetPouring_Response *
juice_dcb_msgs__srv__SetPouring_Response__create();

/// Destroy srv/SetPouring message.
/**
 * It calls
 * juice_dcb_msgs__srv__SetPouring_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Response__destroy(juice_dcb_msgs__srv__SetPouring_Response * msg);


/// Initialize array of srv/SetPouring messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_dcb_msgs__srv__SetPouring_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
bool
juice_dcb_msgs__srv__SetPouring_Response__Sequence__init(juice_dcb_msgs__srv__SetPouring_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetPouring messages.
/**
 * It calls
 * juice_dcb_msgs__srv__SetPouring_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Response__Sequence__fini(juice_dcb_msgs__srv__SetPouring_Response__Sequence * array);

/// Create array of srv/SetPouring messages.
/**
 * It allocates the memory for the array and calls
 * juice_dcb_msgs__srv__SetPouring_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
juice_dcb_msgs__srv__SetPouring_Response__Sequence *
juice_dcb_msgs__srv__SetPouring_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetPouring messages.
/**
 * It calls
 * juice_dcb_msgs__srv__SetPouring_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_dcb_msgs
void
juice_dcb_msgs__srv__SetPouring_Response__Sequence__destroy(juice_dcb_msgs__srv__SetPouring_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // JUICE_DCB_MSGS__SRV__SET_POURING__FUNCTIONS_H_
