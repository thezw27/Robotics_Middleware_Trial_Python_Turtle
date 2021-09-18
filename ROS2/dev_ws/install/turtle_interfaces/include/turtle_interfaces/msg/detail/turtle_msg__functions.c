// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:msg/TurtleMsg.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/msg/detail/turtle_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `color`
#include "rosidl_runtime_c/string_functions.h"
// Member `turtle_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
turtle_interfaces__msg__TurtleMsg__init(turtle_interfaces__msg__TurtleMsg * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
    return false;
  }
  // turtle_pose
  if (!geometry_msgs__msg__Pose__init(&msg->turtle_pose)) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__msg__TurtleMsg__fini(turtle_interfaces__msg__TurtleMsg * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // turtle_pose
  geometry_msgs__msg__Pose__fini(&msg->turtle_pose);
  // color
  rosidl_runtime_c__String__fini(&msg->color);
}

turtle_interfaces__msg__TurtleMsg *
turtle_interfaces__msg__TurtleMsg__create()
{
  turtle_interfaces__msg__TurtleMsg * msg = (turtle_interfaces__msg__TurtleMsg *)malloc(sizeof(turtle_interfaces__msg__TurtleMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__msg__TurtleMsg));
  bool success = turtle_interfaces__msg__TurtleMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__msg__TurtleMsg__destroy(turtle_interfaces__msg__TurtleMsg * msg)
{
  if (msg) {
    turtle_interfaces__msg__TurtleMsg__fini(msg);
  }
  free(msg);
}


bool
turtle_interfaces__msg__TurtleMsg__Sequence__init(turtle_interfaces__msg__TurtleMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtle_interfaces__msg__TurtleMsg * data = NULL;
  if (size) {
    data = (turtle_interfaces__msg__TurtleMsg *)calloc(size, sizeof(turtle_interfaces__msg__TurtleMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__msg__TurtleMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__msg__TurtleMsg__fini(&data[i - 1]);
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
turtle_interfaces__msg__TurtleMsg__Sequence__fini(turtle_interfaces__msg__TurtleMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtle_interfaces__msg__TurtleMsg__fini(&array->data[i]);
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

turtle_interfaces__msg__TurtleMsg__Sequence *
turtle_interfaces__msg__TurtleMsg__Sequence__create(size_t size)
{
  turtle_interfaces__msg__TurtleMsg__Sequence * array = (turtle_interfaces__msg__TurtleMsg__Sequence *)malloc(sizeof(turtle_interfaces__msg__TurtleMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__msg__TurtleMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__msg__TurtleMsg__Sequence__destroy(turtle_interfaces__msg__TurtleMsg__Sequence * array)
{
  if (array) {
    turtle_interfaces__msg__TurtleMsg__Sequence__fini(array);
  }
  free(array);
}
