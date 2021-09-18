// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:srv/SetColor.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/srv/detail/set_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
turtle_interfaces__srv__SetColor_Request__init(turtle_interfaces__srv__SetColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    turtle_interfaces__srv__SetColor_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__srv__SetColor_Request__fini(turtle_interfaces__srv__SetColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // color
  rosidl_runtime_c__String__fini(&msg->color);
}

turtle_interfaces__srv__SetColor_Request *
turtle_interfaces__srv__SetColor_Request__create()
{
  turtle_interfaces__srv__SetColor_Request * msg = (turtle_interfaces__srv__SetColor_Request *)malloc(sizeof(turtle_interfaces__srv__SetColor_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__SetColor_Request));
  bool success = turtle_interfaces__srv__SetColor_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__SetColor_Request__destroy(turtle_interfaces__srv__SetColor_Request * msg)
{
  if (msg) {
    turtle_interfaces__srv__SetColor_Request__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__srv__SetColor_Request__Sequence__init(turtle_interfaces__srv__SetColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__srv__SetColor_Request * data = NULL;
  if (size) {
    data = (turtle_interfaces__srv__SetColor_Request *)calloc(size, sizeof(turtle_interfaces__srv__SetColor_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__SetColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__SetColor_Request__fini(&data[i - 1]);
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
turtle_interfaces__srv__SetColor_Request__Sequence__fini(turtle_interfaces__srv__SetColor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__srv__SetColor_Request__fini(&array->data[i]);
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

turtle_interfaces__srv__SetColor_Request__Sequence *
turtle_interfaces__srv__SetColor_Request__Sequence__create(size_t size)
{
  turtle_interfaces__srv__SetColor_Request__Sequence * array = (turtle_interfaces__srv__SetColor_Request__Sequence *)malloc(sizeof(turtle_interfaces__srv__SetColor_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__SetColor_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__SetColor_Request__Sequence__destroy(turtle_interfaces__srv__SetColor_Request__Sequence * array)
{
  if (array) {
    turtle_interfaces__srv__SetColor_Request__Sequence__fini(array);
  }
  free(array);
}


bool
turtle_interfaces__srv__SetColor_Response__init(turtle_interfaces__srv__SetColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
turtle_interfaces__srv__SetColor_Response__fini(turtle_interfaces__srv__SetColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

turtle_interfaces__srv__SetColor_Response *
turtle_interfaces__srv__SetColor_Response__create()
{
  turtle_interfaces__srv__SetColor_Response * msg = (turtle_interfaces__srv__SetColor_Response *)malloc(sizeof(turtle_interfaces__srv__SetColor_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__SetColor_Response));
  bool success = turtle_interfaces__srv__SetColor_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__SetColor_Response__destroy(turtle_interfaces__srv__SetColor_Response * msg)
{
  if (msg) {
    turtle_interfaces__srv__SetColor_Response__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__srv__SetColor_Response__Sequence__init(turtle_interfaces__srv__SetColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__srv__SetColor_Response * data = NULL;
  if (size) {
    data = (turtle_interfaces__srv__SetColor_Response *)calloc(size, sizeof(turtle_interfaces__srv__SetColor_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__SetColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__SetColor_Response__fini(&data[i - 1]);
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
turtle_interfaces__srv__SetColor_Response__Sequence__fini(turtle_interfaces__srv__SetColor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__srv__SetColor_Response__fini(&array->data[i]);
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

turtle_interfaces__srv__SetColor_Response__Sequence *
turtle_interfaces__srv__SetColor_Response__Sequence__create(size_t size)
{
  turtle_interfaces__srv__SetColor_Response__Sequence * array = (turtle_interfaces__srv__SetColor_Response__Sequence *)malloc(sizeof(turtle_interfaces__srv__SetColor_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__SetColor_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__SetColor_Response__Sequence__destroy(turtle_interfaces__srv__SetColor_Response__Sequence * array)
{
  if (array) {
    turtle_interfaces__srv__SetColor_Response__Sequence__fini(array);
  }
  free(array);
}
