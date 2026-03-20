// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project_interfaces:srv/FindWall.idl
// generated code does not contain a copyright notice
#include "project_interfaces/srv/detail/find_wall__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
project_interfaces__srv__FindWall_Request__init(project_interfaces__srv__FindWall_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
project_interfaces__srv__FindWall_Request__fini(project_interfaces__srv__FindWall_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

project_interfaces__srv__FindWall_Request *
project_interfaces__srv__FindWall_Request__create()
{
  project_interfaces__srv__FindWall_Request * msg = (project_interfaces__srv__FindWall_Request *)malloc(sizeof(project_interfaces__srv__FindWall_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__srv__FindWall_Request));
  bool success = project_interfaces__srv__FindWall_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__srv__FindWall_Request__destroy(project_interfaces__srv__FindWall_Request * msg)
{
  if (msg) {
    project_interfaces__srv__FindWall_Request__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__srv__FindWall_Request__Sequence__init(project_interfaces__srv__FindWall_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__srv__FindWall_Request * data = NULL;
  if (size) {
    data = (project_interfaces__srv__FindWall_Request *)calloc(size, sizeof(project_interfaces__srv__FindWall_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__srv__FindWall_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__srv__FindWall_Request__fini(&data[i - 1]);
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
project_interfaces__srv__FindWall_Request__Sequence__fini(project_interfaces__srv__FindWall_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__srv__FindWall_Request__fini(&array->data[i]);
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

project_interfaces__srv__FindWall_Request__Sequence *
project_interfaces__srv__FindWall_Request__Sequence__create(size_t size)
{
  project_interfaces__srv__FindWall_Request__Sequence * array = (project_interfaces__srv__FindWall_Request__Sequence *)malloc(sizeof(project_interfaces__srv__FindWall_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__srv__FindWall_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__srv__FindWall_Request__Sequence__destroy(project_interfaces__srv__FindWall_Request__Sequence * array)
{
  if (array) {
    project_interfaces__srv__FindWall_Request__Sequence__fini(array);
  }
  free(array);
}


bool
project_interfaces__srv__FindWall_Response__init(project_interfaces__srv__FindWall_Response * msg)
{
  if (!msg) {
    return false;
  }
  // wallfound
  return true;
}

void
project_interfaces__srv__FindWall_Response__fini(project_interfaces__srv__FindWall_Response * msg)
{
  if (!msg) {
    return;
  }
  // wallfound
}

project_interfaces__srv__FindWall_Response *
project_interfaces__srv__FindWall_Response__create()
{
  project_interfaces__srv__FindWall_Response * msg = (project_interfaces__srv__FindWall_Response *)malloc(sizeof(project_interfaces__srv__FindWall_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__srv__FindWall_Response));
  bool success = project_interfaces__srv__FindWall_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__srv__FindWall_Response__destroy(project_interfaces__srv__FindWall_Response * msg)
{
  if (msg) {
    project_interfaces__srv__FindWall_Response__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__srv__FindWall_Response__Sequence__init(project_interfaces__srv__FindWall_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__srv__FindWall_Response * data = NULL;
  if (size) {
    data = (project_interfaces__srv__FindWall_Response *)calloc(size, sizeof(project_interfaces__srv__FindWall_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__srv__FindWall_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__srv__FindWall_Response__fini(&data[i - 1]);
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
project_interfaces__srv__FindWall_Response__Sequence__fini(project_interfaces__srv__FindWall_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__srv__FindWall_Response__fini(&array->data[i]);
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

project_interfaces__srv__FindWall_Response__Sequence *
project_interfaces__srv__FindWall_Response__Sequence__create(size_t size)
{
  project_interfaces__srv__FindWall_Response__Sequence * array = (project_interfaces__srv__FindWall_Response__Sequence *)malloc(sizeof(project_interfaces__srv__FindWall_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__srv__FindWall_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__srv__FindWall_Response__Sequence__destroy(project_interfaces__srv__FindWall_Response__Sequence * array)
{
  if (array) {
    project_interfaces__srv__FindWall_Response__Sequence__fini(array);
  }
  free(array);
}
