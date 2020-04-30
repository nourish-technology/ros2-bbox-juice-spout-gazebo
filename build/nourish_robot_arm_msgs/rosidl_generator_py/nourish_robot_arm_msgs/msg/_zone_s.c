// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nourish_robot_arm_msgs:msg/Zone.idl
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
#include "nourish_robot_arm_msgs/msg/zone__struct.h"
#include "nourish_robot_arm_msgs/msg/zone__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__msg__zone__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
        "nourish_robot_arm_msgs.msg._zone.Zone",
        full_classname_dest, 37) == 0);
  }
  nourish_robot_arm_msgs__msg__Zone * ros_message = _ros_message;
  {  // fine_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "fine_point");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fine_point = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pzone_eax
    PyObject * field = PyObject_GetAttrString(_pymsg, "pzone_eax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pzone_eax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pzone_ori
    PyObject * field = PyObject_GetAttrString(_pymsg, "pzone_ori");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pzone_ori = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pzone_tcp
    PyObject * field = PyObject_GetAttrString(_pymsg, "pzone_tcp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pzone_tcp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leax
    PyObject * field = PyObject_GetAttrString(_pymsg, "leax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ori
    PyObject * field = PyObject_GetAttrString(_pymsg, "ori");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ori = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reax
    PyObject * field = PyObject_GetAttrString(_pymsg, "reax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__msg__zone__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Zone */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.msg._zone");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Zone");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__msg__Zone * ros_message = (nourish_robot_arm_msgs__msg__Zone *)raw_ros_message;
  {  // fine_point
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fine_point ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fine_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pzone_eax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pzone_eax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pzone_eax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pzone_ori
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pzone_ori);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pzone_ori", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pzone_tcp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pzone_tcp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pzone_tcp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ori
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ori);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ori", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
