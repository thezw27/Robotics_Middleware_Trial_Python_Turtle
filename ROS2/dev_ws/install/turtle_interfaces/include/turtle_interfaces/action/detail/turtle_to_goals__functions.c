// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:action/TurtleToGoals.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `goal_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_Goal__init(turtle_interfaces__action__TurtleToGoals_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->goal_poses, 0)) {
    turtle_interfaces__action__TurtleToGoals_Goal__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_Goal__fini(turtle_interfaces__action__TurtleToGoals_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->goal_poses);
}

turtle_interfaces__action__TurtleToGoals_Goal *
turtle_interfaces__action__TurtleToGoals_Goal__create()
{
  turtle_interfaces__action__TurtleToGoals_Goal * msg = (turtle_interfaces__action__TurtleToGoals_Goal *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_Goal));
  bool success = turtle_interfaces__action__TurtleToGoals_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_Goal__destroy(turtle_interfaces__action__TurtleToGoals_Goal * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_Goal__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__init(turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_Goal * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_Goal *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_Goal__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__fini(turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_Goal__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_Goal__Sequence *
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array = (turtle_interfaces__action__TurtleToGoals_Goal__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
turtle_interfaces__action__TurtleToGoals_Result__init(turtle_interfaces__action__TurtleToGoals_Result * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_Result__fini(turtle_interfaces__action__TurtleToGoals_Result * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

turtle_interfaces__action__TurtleToGoals_Result *
turtle_interfaces__action__TurtleToGoals_Result__create()
{
  turtle_interfaces__action__TurtleToGoals_Result * msg = (turtle_interfaces__action__TurtleToGoals_Result *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_Result));
  bool success = turtle_interfaces__action__TurtleToGoals_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_Result__destroy(turtle_interfaces__action__TurtleToGoals_Result * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_Result__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_Result__Sequence__init(turtle_interfaces__action__TurtleToGoals_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_Result * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_Result *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_Result__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_Result__Sequence__fini(turtle_interfaces__action__TurtleToGoals_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_Result__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_Result__Sequence *
turtle_interfaces__action__TurtleToGoals_Result__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_Result__Sequence * array = (turtle_interfaces__action__TurtleToGoals_Result__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_Result__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_Result__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `mid_goal_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_Feedback__init(turtle_interfaces__action__TurtleToGoals_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // mid_goal_pose
  if (!geometry_msgs__msg__Pose__init(&msg->mid_goal_pose)) {
    turtle_interfaces__action__TurtleToGoals_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_Feedback__fini(turtle_interfaces__action__TurtleToGoals_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // mid_goal_pose
  geometry_msgs__msg__Pose__fini(&msg->mid_goal_pose);
}

turtle_interfaces__action__TurtleToGoals_Feedback *
turtle_interfaces__action__TurtleToGoals_Feedback__create()
{
  turtle_interfaces__action__TurtleToGoals_Feedback * msg = (turtle_interfaces__action__TurtleToGoals_Feedback *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_Feedback));
  bool success = turtle_interfaces__action__TurtleToGoals_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_Feedback__destroy(turtle_interfaces__action__TurtleToGoals_Feedback * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_Feedback__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__init(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_Feedback * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_Feedback *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_Feedback__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__fini(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_Feedback__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_Feedback__Sequence *
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array = (turtle_interfaces__action__TurtleToGoals_Feedback__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!turtle_interfaces__action__TurtleToGoals_Goal__init(&msg->goal)) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  turtle_interfaces__action__TurtleToGoals_Goal__fini(&msg->goal);
}

turtle_interfaces__action__TurtleToGoals_SendGoal_Request *
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__create()
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg = (turtle_interfaces__action__TurtleToGoals_SendGoal_Request *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request));
  bool success = turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_SendGoal_Request * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_SendGoal_Request *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence *
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array = (turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

turtle_interfaces__action__TurtleToGoals_SendGoal_Response *
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__create()
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg = (turtle_interfaces__action__TurtleToGoals_SendGoal_Response *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response));
  bool success = turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_SendGoal_Response * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_SendGoal_Response *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence *
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array = (turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_GetResult_Request__init(turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

turtle_interfaces__action__TurtleToGoals_GetResult_Request *
turtle_interfaces__action__TurtleToGoals_GetResult_Request__create()
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg = (turtle_interfaces__action__TurtleToGoals_GetResult_Request *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Request));
  bool success = turtle_interfaces__action__TurtleToGoals_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__init(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_GetResult_Request * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_GetResult_Request *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence *
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array = (turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_GetResult_Response__init(turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!turtle_interfaces__action__TurtleToGoals_Result__init(&msg->result)) {
    turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  turtle_interfaces__action__TurtleToGoals_Result__fini(&msg->result);
}

turtle_interfaces__action__TurtleToGoals_GetResult_Response *
turtle_interfaces__action__TurtleToGoals_GetResult_Response__create()
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg = (turtle_interfaces__action__TurtleToGoals_GetResult_Response *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Response));
  bool success = turtle_interfaces__action__TurtleToGoals_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__init(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_GetResult_Response * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_GetResult_Response *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence *
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array = (turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__functions.h"

bool
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init(turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!turtle_interfaces__action__TurtleToGoals_Feedback__init(&msg->feedback)) {
    turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  turtle_interfaces__action__TurtleToGoals_Feedback__fini(&msg->feedback);
}

turtle_interfaces__action__TurtleToGoals_FeedbackMessage *
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__create()
{
  turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg = (turtle_interfaces__action__TurtleToGoals_FeedbackMessage *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage));
  bool success = turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__destroy(turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg)
{
  if (msg) {
    turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__init(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__action__TurtleToGoals_FeedbackMessage * data = NULL;
  if (size) {
    data = (turtle_interfaces__action__TurtleToGoals_FeedbackMessage *)calloc(size, sizeof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(&data[i - 1]);
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
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__fini(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(&array->data[i]);
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

turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence *
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__create(size_t size)
{
  turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array = (turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence *)malloc(sizeof(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array)
{
  if (array) {
    turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
