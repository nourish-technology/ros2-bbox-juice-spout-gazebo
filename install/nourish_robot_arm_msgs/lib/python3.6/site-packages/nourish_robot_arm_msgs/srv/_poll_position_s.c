// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "nourish_robot_arm_msgs/srv/poll_position__struct.h"
#include "nourish_robot_arm_msgs/srv/poll_position__functions.h"

bool nourish_robot_arm_msgs__msg__work_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * nourish_robot_arm_msgs__msg__work_object__convert_to_py(void * raw_ros_message);
bool nourish_robot_arm_msgs__msg__tool__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * nourish_robot_arm_msgs__msg__tool__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__srv__poll_position__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "nourish_robot_arm_msgs.srv._poll_position.PollPosition_Request",
        full_classname_dest, 62) == 0);
  }
  nourish_robot_arm_msgs__srv__PollPosition_Request * ros_message = _ros_message;
  {  // work_object
    PyObject * field = PyObject_GetAttrString(_pymsg, "work_object");
    if (!field) {
      return false;
    }
    if (!nourish_robot_arm_msgs__msg__work_object__convert_from_py(field, &ros_message->work_object)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tool
    PyObject * field = PyObject_GetAttrString(_pymsg, "tool");
    if (!field) {
      return false;
    }
    if (!nourish_robot_arm_msgs__msg__tool__convert_from_py(field, &ros_message->tool)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__srv__poll_position__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PollPosition_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.srv._poll_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PollPosition_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__srv__PollPosition_Request * ros_message = (nourish_robot_arm_msgs__srv__PollPosition_Request *)raw_ros_message;
  {  // work_object
    PyObject * field = NULL;
    field = nourish_robot_arm_msgs__msg__work_object__convert_to_py(&ros_message->work_object);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "work_object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tool
    PyObject * field = NULL;
    field = nourish_robot_arm_msgs__msg__tool__convert_to_py(&ros_message->tool);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tool", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_position__struct.h"
// already included above
// #include "nourish_robot_arm_msgs/srv/poll_position__functions.h"

bool nourish_robot_arm_msgs__msg__joint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * nourish_robot_arm_msgs__msg__joint__convert_to_py(void * raw_ros_message);
bool nourish_robot_arm_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * nourish_robot_arm_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__srv__poll_position__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "nourish_robot_arm_msgs.srv._poll_position.PollPosition_Response",
        full_classname_dest, 63) == 0);
  }
  nourish_robot_arm_msgs__srv__PollPosition_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint");
    if (!field) {
      return false;
    }
    if (!nourish_robot_arm_msgs__msg__joint__convert_from_py(field, &ros_message->joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!nourish_robot_arm_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__srv__poll_position__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PollPosition_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.srv._poll_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PollPosition_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__srv__PollPosition_Response * ros_message = (nourish_robot_arm_msgs__srv__PollPosition_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint
    PyObject * field = NULL;
    field = nourish_robot_arm_msgs__msg__joint__convert_to_py(&ros_message->joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = nourish_robot_arm_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
