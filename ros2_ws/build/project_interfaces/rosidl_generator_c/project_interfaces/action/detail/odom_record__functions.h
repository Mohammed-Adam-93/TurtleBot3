// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from project_interfaces:action/OdomRecord.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACES__ACTION__DETAIL__ODOM_RECORD__FUNCTIONS_H_
#define PROJECT_INTERFACES__ACTION__DETAIL__ODOM_RECORD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "project_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "project_interfaces/action/detail/odom_record__struct.h"

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_Goal
 * )) before or use
 * project_interfaces__action__OdomRecord_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_Goal__init(project_interfaces__action__OdomRecord_Goal * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Goal__fini(project_interfaces__action__OdomRecord_Goal * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_Goal *
project_interfaces__action__OdomRecord_Goal__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Goal__destroy(project_interfaces__action__OdomRecord_Goal * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_Goal__Sequence__init(project_interfaces__action__OdomRecord_Goal__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Goal__Sequence__fini(project_interfaces__action__OdomRecord_Goal__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_Goal__Sequence *
project_interfaces__action__OdomRecord_Goal__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Goal__Sequence__destroy(project_interfaces__action__OdomRecord_Goal__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_Result
 * )) before or use
 * project_interfaces__action__OdomRecord_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_Result__init(project_interfaces__action__OdomRecord_Result * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Result__fini(project_interfaces__action__OdomRecord_Result * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_Result *
project_interfaces__action__OdomRecord_Result__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Result__destroy(project_interfaces__action__OdomRecord_Result * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_Result__Sequence__init(project_interfaces__action__OdomRecord_Result__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Result__Sequence__fini(project_interfaces__action__OdomRecord_Result__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_Result__Sequence *
project_interfaces__action__OdomRecord_Result__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Result__Sequence__destroy(project_interfaces__action__OdomRecord_Result__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_Feedback
 * )) before or use
 * project_interfaces__action__OdomRecord_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_Feedback__init(project_interfaces__action__OdomRecord_Feedback * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Feedback__fini(project_interfaces__action__OdomRecord_Feedback * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_Feedback *
project_interfaces__action__OdomRecord_Feedback__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Feedback__destroy(project_interfaces__action__OdomRecord_Feedback * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_Feedback__Sequence__init(project_interfaces__action__OdomRecord_Feedback__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Feedback__Sequence__fini(project_interfaces__action__OdomRecord_Feedback__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_Feedback__Sequence *
project_interfaces__action__OdomRecord_Feedback__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_Feedback__Sequence__destroy(project_interfaces__action__OdomRecord_Feedback__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_SendGoal_Request
 * )) before or use
 * project_interfaces__action__OdomRecord_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_SendGoal_Request__init(project_interfaces__action__OdomRecord_SendGoal_Request * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Request__fini(project_interfaces__action__OdomRecord_SendGoal_Request * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_SendGoal_Request *
project_interfaces__action__OdomRecord_SendGoal_Request__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Request__destroy(project_interfaces__action__OdomRecord_SendGoal_Request * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__init(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__fini(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence *
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__destroy(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_SendGoal_Response
 * )) before or use
 * project_interfaces__action__OdomRecord_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_SendGoal_Response__init(project_interfaces__action__OdomRecord_SendGoal_Response * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Response__fini(project_interfaces__action__OdomRecord_SendGoal_Response * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_SendGoal_Response *
project_interfaces__action__OdomRecord_SendGoal_Response__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Response__destroy(project_interfaces__action__OdomRecord_SendGoal_Response * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__init(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__fini(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence *
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__destroy(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_GetResult_Request
 * )) before or use
 * project_interfaces__action__OdomRecord_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_GetResult_Request__init(project_interfaces__action__OdomRecord_GetResult_Request * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Request__fini(project_interfaces__action__OdomRecord_GetResult_Request * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_GetResult_Request *
project_interfaces__action__OdomRecord_GetResult_Request__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Request__destroy(project_interfaces__action__OdomRecord_GetResult_Request * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__init(project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__fini(project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_GetResult_Request__Sequence *
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__destroy(project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_GetResult_Response
 * )) before or use
 * project_interfaces__action__OdomRecord_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_GetResult_Response__init(project_interfaces__action__OdomRecord_GetResult_Response * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Response__fini(project_interfaces__action__OdomRecord_GetResult_Response * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_GetResult_Response *
project_interfaces__action__OdomRecord_GetResult_Response__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Response__destroy(project_interfaces__action__OdomRecord_GetResult_Response * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__init(project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__fini(project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_GetResult_Response__Sequence *
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__destroy(project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array);

/// Initialize action/OdomRecord message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__action__OdomRecord_FeedbackMessage
 * )) before or use
 * project_interfaces__action__OdomRecord_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_FeedbackMessage__init(project_interfaces__action__OdomRecord_FeedbackMessage * msg);

/// Finalize action/OdomRecord message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_FeedbackMessage__fini(project_interfaces__action__OdomRecord_FeedbackMessage * msg);

/// Create action/OdomRecord message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__action__OdomRecord_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_FeedbackMessage *
project_interfaces__action__OdomRecord_FeedbackMessage__create();

/// Destroy action/OdomRecord message.
/**
 * It calls
 * project_interfaces__action__OdomRecord_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_FeedbackMessage__destroy(project_interfaces__action__OdomRecord_FeedbackMessage * msg);


/// Initialize array of action/OdomRecord messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__action__OdomRecord_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__init(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__fini(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array);

/// Create array of action/OdomRecord messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence *
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/OdomRecord messages.
/**
 * It calls
 * project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__destroy(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PROJECT_INTERFACES__ACTION__DETAIL__ODOM_RECORD__FUNCTIONS_H_
