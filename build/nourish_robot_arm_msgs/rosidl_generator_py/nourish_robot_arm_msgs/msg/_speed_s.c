// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nourish_robot_arm_msgs:msg/Speed.idl
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
#include "nourish_robot_arm_msgs/msg/speed__struct.h"
#include "nourish_robot_arm_msgs/msg/speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__msg__speed__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
        "nourish_robot_arm_msgs.msg._speed.Speed",
        full_classname_dest, 39) == 0);
  }
  nourish_robot_arm_msgs__msg__Speed * ros_message = _ros_message;
  {  // v_leax
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_leax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_leax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_ori
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_ori");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_ori = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_reax
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_reax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_reax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_tcp
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_tcp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_tcp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__msg__speed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Speed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.msg._speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Speed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__msg__Speed * ros_message = (nourish_robot_arm_msgs__msg__Speed *)raw_ros_message;
  {  // v_leax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_leax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_leax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_ori
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_ori);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_ori", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_reax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_reax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_reax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_tcp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_tcp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_tcp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
