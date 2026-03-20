// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from project_interfaces:srv/FindWall.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__FUNCTIONS_H_
#define PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "project_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "project_interfaces/srv/detail/find_wall__struct.h"

/// Initialize srv/FindWall message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__srv__FindWall_Request
 * )) before or use
 * project_interfaces__srv__FindWall_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__srv__FindWall_Request__init(project_interfaces__srv__FindWall_Request * msg);

/// Finalize srv/FindWall message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Request__fini(project_interfaces__srv__FindWall_Request * msg);

/// Create srv/FindWall message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__srv__FindWall_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__srv__FindWall_Request *
project_interfaces__srv__FindWall_Request__create();

/// Destroy srv/FindWall message.
/**
 * It calls
 * project_interfaces__srv__FindWall_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Request__destroy(project_interfaces__srv__FindWall_Request * msg);


/// Initialize array of srv/FindWall messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__srv__FindWall_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__srv__FindWall_Request__Sequence__init(project_interfaces__srv__FindWall_Request__Sequence * array, size_t size);

/// Finalize array of srv/FindWall messages.
/**
 * It calls
 * project_interfaces__srv__FindWall_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Request__Sequence__fini(project_interfaces__srv__FindWall_Request__Sequence * array);

/// Create array of srv/FindWall messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__srv__FindWall_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__srv__FindWall_Request__Sequence *
project_interfaces__srv__FindWall_Request__Sequence__create(size_t size);

/// Destroy array of srv/FindWall messages.
/**
 * It calls
 * project_interfaces__srv__FindWall_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Request__Sequence__destroy(project_interfaces__srv__FindWall_Request__Sequence * array);

/// Initialize srv/FindWall message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project_interfaces__srv__FindWall_Response
 * )) before or use
 * project_interfaces__srv__FindWall_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__srv__FindWall_Response__init(project_interfaces__srv__FindWall_Response * msg);

/// Finalize srv/FindWall message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Response__fini(project_interfaces__srv__FindWall_Response * msg);

/// Create srv/FindWall message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project_interfaces__srv__FindWall_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__srv__FindWall_Response *
project_interfaces__srv__FindWall_Response__create();

/// Destroy srv/FindWall message.
/**
 * It calls
 * project_interfaces__srv__FindWall_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Response__destroy(project_interfaces__srv__FindWall_Response * msg);


/// Initialize array of srv/FindWall messages.
/**
 * It allocates the memory for the number of elements and calls
 * project_interfaces__srv__FindWall_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
bool
project_interfaces__srv__FindWall_Response__Sequence__init(project_interfaces__srv__FindWall_Response__Sequence * array, size_t size);

/// Finalize array of srv/FindWall messages.
/**
 * It calls
 * project_interfaces__srv__FindWall_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Response__Sequence__fini(project_interfaces__srv__FindWall_Response__Sequence * array);

/// Create array of srv/FindWall messages.
/**
 * It allocates the memory for the array and calls
 * project_interfaces__srv__FindWall_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
project_interfaces__srv__FindWall_Response__Sequence *
project_interfaces__srv__FindWall_Response__Sequence__create(size_t size);

/// Destroy array of srv/FindWall messages.
/**
 * It calls
 * project_interfaces__srv__FindWall_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project_interfaces
void
project_interfaces__srv__FindWall_Response__Sequence__destroy(project_interfaces__srv__FindWall_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__FUNCTIONS_H_
