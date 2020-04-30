// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__ACTION__EXECUTE_PATH__FUNCTIONS_H_
#define NOURISH_ROBOT_ARM_MSGS__ACTION__EXECUTE_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nourish_robot_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nourish_robot_arm_msgs/action/execute_path__struct.h"

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_Goal
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_Goal__init(nourish_robot_arm_msgs__action__ExecutePath_Goal * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Goal__fini(nourish_robot_arm_msgs__action__ExecutePath_Goal * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_Goal *
nourish_robot_arm_msgs__action__ExecutePath_Goal__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Goal__destroy(nourish_robot_arm_msgs__action__ExecutePath_Goal * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_Goal__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_Result
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_Result__init(nourish_robot_arm_msgs__action__ExecutePath_Result * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Result__fini(nourish_robot_arm_msgs__action__ExecutePath_Result * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_Result *
nourish_robot_arm_msgs__action__ExecutePath_Result__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Result__destroy(nourish_robot_arm_msgs__action__ExecutePath_Result * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_Result__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_Feedback__init(nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini(nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_Feedback *
nourish_robot_arm_msgs__action__ExecutePath_Feedback__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__destroy(nourish_robot_arm_msgs__action__ExecutePath_Feedback * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_Feedback__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Request__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_SendGoal_Response__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Request__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_GetResult_Response__Sequence * array);

/// Initialize action/ExecutePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage
 * )) before or use
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__init(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg);

/// Finalize action/ExecutePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg);

/// Create action/ExecutePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage *
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__create();

/// Destroy action/ExecutePath message.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__destroy(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage * msg);


/// Initialize array of action/ExecutePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__init(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__fini(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array);

/// Create array of action/ExecutePath messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence *
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecutePath messages.
/**
 * It calls
 * nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence__destroy(nourish_robot_arm_msgs__action__ExecutePath_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__ACTION__EXECUTE_PATH__FUNCTIONS_H_
