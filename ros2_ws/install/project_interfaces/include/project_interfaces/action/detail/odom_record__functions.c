// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project_interfaces:action/OdomRecord.idl
// generated code does not contain a copyright notice
#include "project_interfaces/action/detail/odom_record__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
project_interfaces__action__OdomRecord_Goal__init(project_interfaces__action__OdomRecord_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
project_interfaces__action__OdomRecord_Goal__fini(project_interfaces__action__OdomRecord_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

project_interfaces__action__OdomRecord_Goal *
project_interfaces__action__OdomRecord_Goal__create()
{
  project_interfaces__action__OdomRecord_Goal * msg = (project_interfaces__action__OdomRecord_Goal *)malloc(sizeof(project_interfaces__action__OdomRecord_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_Goal));
  bool success = project_interfaces__action__OdomRecord_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_Goal__destroy(project_interfaces__action__OdomRecord_Goal * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_Goal__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_Goal__Sequence__init(project_interfaces__action__OdomRecord_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_Goal * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_Goal *)calloc(size, sizeof(project_interfaces__action__OdomRecord_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_Goal__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_Goal__Sequence__fini(project_interfaces__action__OdomRecord_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_Goal__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_Goal__Sequence *
project_interfaces__action__OdomRecord_Goal__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_Goal__Sequence * array = (project_interfaces__action__OdomRecord_Goal__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_Goal__Sequence__destroy(project_interfaces__action__OdomRecord_Goal__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `list_of_odoms`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
project_interfaces__action__OdomRecord_Result__init(project_interfaces__action__OdomRecord_Result * msg)
{
  if (!msg) {
    return false;
  }
  // list_of_odoms
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->list_of_odoms, 0)) {
    project_interfaces__action__OdomRecord_Result__fini(msg);
    return false;
  }
  return true;
}

void
project_interfaces__action__OdomRecord_Result__fini(project_interfaces__action__OdomRecord_Result * msg)
{
  if (!msg) {
    return;
  }
  // list_of_odoms
  geometry_msgs__msg__Point__Sequence__fini(&msg->list_of_odoms);
}

project_interfaces__action__OdomRecord_Result *
project_interfaces__action__OdomRecord_Result__create()
{
  project_interfaces__action__OdomRecord_Result * msg = (project_interfaces__action__OdomRecord_Result *)malloc(sizeof(project_interfaces__action__OdomRecord_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_Result));
  bool success = project_interfaces__action__OdomRecord_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_Result__destroy(project_interfaces__action__OdomRecord_Result * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_Result__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_Result__Sequence__init(project_interfaces__action__OdomRecord_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_Result * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_Result *)calloc(size, sizeof(project_interfaces__action__OdomRecord_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_Result__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_Result__Sequence__fini(project_interfaces__action__OdomRecord_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_Result__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_Result__Sequence *
project_interfaces__action__OdomRecord_Result__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_Result__Sequence * array = (project_interfaces__action__OdomRecord_Result__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_Result__Sequence__destroy(project_interfaces__action__OdomRecord_Result__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_Result__Sequence__fini(array);
  }
  free(array);
}


bool
project_interfaces__action__OdomRecord_Feedback__init(project_interfaces__action__OdomRecord_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_total
  return true;
}

void
project_interfaces__action__OdomRecord_Feedback__fini(project_interfaces__action__OdomRecord_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_total
}

project_interfaces__action__OdomRecord_Feedback *
project_interfaces__action__OdomRecord_Feedback__create()
{
  project_interfaces__action__OdomRecord_Feedback * msg = (project_interfaces__action__OdomRecord_Feedback *)malloc(sizeof(project_interfaces__action__OdomRecord_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_Feedback));
  bool success = project_interfaces__action__OdomRecord_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_Feedback__destroy(project_interfaces__action__OdomRecord_Feedback * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_Feedback__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_Feedback__Sequence__init(project_interfaces__action__OdomRecord_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_Feedback * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_Feedback *)calloc(size, sizeof(project_interfaces__action__OdomRecord_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_Feedback__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_Feedback__Sequence__fini(project_interfaces__action__OdomRecord_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_Feedback__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_Feedback__Sequence *
project_interfaces__action__OdomRecord_Feedback__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_Feedback__Sequence * array = (project_interfaces__action__OdomRecord_Feedback__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_Feedback__Sequence__destroy(project_interfaces__action__OdomRecord_Feedback__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "project_interfaces/action/detail/odom_record__functions.h"

bool
project_interfaces__action__OdomRecord_SendGoal_Request__init(project_interfaces__action__OdomRecord_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project_interfaces__action__OdomRecord_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!project_interfaces__action__OdomRecord_Goal__init(&msg->goal)) {
    project_interfaces__action__OdomRecord_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
project_interfaces__action__OdomRecord_SendGoal_Request__fini(project_interfaces__action__OdomRecord_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  project_interfaces__action__OdomRecord_Goal__fini(&msg->goal);
}

project_interfaces__action__OdomRecord_SendGoal_Request *
project_interfaces__action__OdomRecord_SendGoal_Request__create()
{
  project_interfaces__action__OdomRecord_SendGoal_Request * msg = (project_interfaces__action__OdomRecord_SendGoal_Request *)malloc(sizeof(project_interfaces__action__OdomRecord_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_SendGoal_Request));
  bool success = project_interfaces__action__OdomRecord_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_SendGoal_Request__destroy(project_interfaces__action__OdomRecord_SendGoal_Request * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__init(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_SendGoal_Request * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_SendGoal_Request *)calloc(size, sizeof(project_interfaces__action__OdomRecord_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_SendGoal_Request__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__fini(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_SendGoal_Request__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_SendGoal_Request__Sequence *
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array = (project_interfaces__action__OdomRecord_SendGoal_Request__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__destroy(project_interfaces__action__OdomRecord_SendGoal_Request__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
project_interfaces__action__OdomRecord_SendGoal_Response__init(project_interfaces__action__OdomRecord_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    project_interfaces__action__OdomRecord_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
project_interfaces__action__OdomRecord_SendGoal_Response__fini(project_interfaces__action__OdomRecord_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

project_interfaces__action__OdomRecord_SendGoal_Response *
project_interfaces__action__OdomRecord_SendGoal_Response__create()
{
  project_interfaces__action__OdomRecord_SendGoal_Response * msg = (project_interfaces__action__OdomRecord_SendGoal_Response *)malloc(sizeof(project_interfaces__action__OdomRecord_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_SendGoal_Response));
  bool success = project_interfaces__action__OdomRecord_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_SendGoal_Response__destroy(project_interfaces__action__OdomRecord_SendGoal_Response * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__init(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_SendGoal_Response * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_SendGoal_Response *)calloc(size, sizeof(project_interfaces__action__OdomRecord_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_SendGoal_Response__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__fini(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_SendGoal_Response__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_SendGoal_Response__Sequence *
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array = (project_interfaces__action__OdomRecord_SendGoal_Response__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__destroy(project_interfaces__action__OdomRecord_SendGoal_Response__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
project_interfaces__action__OdomRecord_GetResult_Request__init(project_interfaces__action__OdomRecord_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project_interfaces__action__OdomRecord_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
project_interfaces__action__OdomRecord_GetResult_Request__fini(project_interfaces__action__OdomRecord_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

project_interfaces__action__OdomRecord_GetResult_Request *
project_interfaces__action__OdomRecord_GetResult_Request__create()
{
  project_interfaces__action__OdomRecord_GetResult_Request * msg = (project_interfaces__action__OdomRecord_GetResult_Request *)malloc(sizeof(project_interfaces__action__OdomRecord_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_GetResult_Request));
  bool success = project_interfaces__action__OdomRecord_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_GetResult_Request__destroy(project_interfaces__action__OdomRecord_GetResult_Request * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__init(project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_GetResult_Request * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_GetResult_Request *)calloc(size, sizeof(project_interfaces__action__OdomRecord_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_GetResult_Request__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__fini(project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_GetResult_Request__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_GetResult_Request__Sequence *
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array = (project_interfaces__action__OdomRecord_GetResult_Request__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_GetResult_Request__Sequence__destroy(project_interfaces__action__OdomRecord_GetResult_Request__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "project_interfaces/action/detail/odom_record__functions.h"

bool
project_interfaces__action__OdomRecord_GetResult_Response__init(project_interfaces__action__OdomRecord_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!project_interfaces__action__OdomRecord_Result__init(&msg->result)) {
    project_interfaces__action__OdomRecord_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
project_interfaces__action__OdomRecord_GetResult_Response__fini(project_interfaces__action__OdomRecord_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  project_interfaces__action__OdomRecord_Result__fini(&msg->result);
}

project_interfaces__action__OdomRecord_GetResult_Response *
project_interfaces__action__OdomRecord_GetResult_Response__create()
{
  project_interfaces__action__OdomRecord_GetResult_Response * msg = (project_interfaces__action__OdomRecord_GetResult_Response *)malloc(sizeof(project_interfaces__action__OdomRecord_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_GetResult_Response));
  bool success = project_interfaces__action__OdomRecord_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_GetResult_Response__destroy(project_interfaces__action__OdomRecord_GetResult_Response * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__init(project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_GetResult_Response * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_GetResult_Response *)calloc(size, sizeof(project_interfaces__action__OdomRecord_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_GetResult_Response__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__fini(project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_GetResult_Response__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_GetResult_Response__Sequence *
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array = (project_interfaces__action__OdomRecord_GetResult_Response__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_GetResult_Response__Sequence__destroy(project_interfaces__action__OdomRecord_GetResult_Response__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "project_interfaces/action/detail/odom_record__functions.h"

bool
project_interfaces__action__OdomRecord_FeedbackMessage__init(project_interfaces__action__OdomRecord_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    project_interfaces__action__OdomRecord_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!project_interfaces__action__OdomRecord_Feedback__init(&msg->feedback)) {
    project_interfaces__action__OdomRecord_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
project_interfaces__action__OdomRecord_FeedbackMessage__fini(project_interfaces__action__OdomRecord_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  project_interfaces__action__OdomRecord_Feedback__fini(&msg->feedback);
}

project_interfaces__action__OdomRecord_FeedbackMessage *
project_interfaces__action__OdomRecord_FeedbackMessage__create()
{
  project_interfaces__action__OdomRecord_FeedbackMessage * msg = (project_interfaces__action__OdomRecord_FeedbackMessage *)malloc(sizeof(project_interfaces__action__OdomRecord_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_interfaces__action__OdomRecord_FeedbackMessage));
  bool success = project_interfaces__action__OdomRecord_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
project_interfaces__action__OdomRecord_FeedbackMessage__destroy(project_interfaces__action__OdomRecord_FeedbackMessage * msg)
{
  if (msg) {
    project_interfaces__action__OdomRecord_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__init(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  project_interfaces__action__OdomRecord_FeedbackMessage * data = NULL;
  if (size) {
    data = (project_interfaces__action__OdomRecord_FeedbackMessage *)calloc(size, sizeof(project_interfaces__action__OdomRecord_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_interfaces__action__OdomRecord_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_interfaces__action__OdomRecord_FeedbackMessage__fini(&data[i - 1]);
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
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__fini(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project_interfaces__action__OdomRecord_FeedbackMessage__fini(&array->data[i]);
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

project_interfaces__action__OdomRecord_FeedbackMessage__Sequence *
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__create(size_t size)
{
  project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array = (project_interfaces__action__OdomRecord_FeedbackMessage__Sequence *)malloc(sizeof(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__destroy(project_interfaces__action__OdomRecord_FeedbackMessage__Sequence * array)
{
  if (array) {
    project_interfaces__action__OdomRecord_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
