// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nourish_robot_arm_msgs:msg/Acceleration.idl
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
#include "nourish_robot_arm_msgs/msg/acceleration__struct.h"
#include "nourish_robot_arm_msgs/msg/acceleration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__msg__acceleration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
        "nourish_robot_arm_msgs.msg._acceleration.Acceleration",
        full_classname_dest, 53) == 0);
  }
  nourish_robot_arm_msgs__msg__Acceleration * ros_message = _ros_message;
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "deceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deceleration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ramp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ramp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__msg__acceleration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Acceleration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.msg._acceleration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Acceleration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__msg__Acceleration * ros_message = (nourish_robot_arm_msgs__msg__Acceleration *)raw_ros_message;
  {  // acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ramp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ramp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
