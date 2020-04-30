// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
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
#include "nourish_robot_arm_msgs/msg/work_object__struct.h"
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__msg__work_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
        "nourish_robot_arm_msgs.msg._work_object.WorkObject",
        full_classname_dest, 50) == 0);
  }
  nourish_robot_arm_msgs__msg__WorkObject * ros_message = _ros_message;
  {  // robhold
    PyObject * field = PyObject_GetAttrString(_pymsg, "robhold");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->robhold = (Py_True == field);
    Py_DECREF(field);
  }
  {  // uframe_pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_pos_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uframe_pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_pos_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uframe_pos_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_pos_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_pos_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uframe_orient_q1
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_orient_q1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_orient_q1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uframe_orient_q2
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_orient_q2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_orient_q2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uframe_orient_q3
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_orient_q3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_orient_q3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // uframe_orient_q4
    PyObject * field = PyObject_GetAttrString(_pymsg, "uframe_orient_q4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->uframe_orient_q4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_pos_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_pos_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_pos_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_pos_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_pos_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_pos_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_pos_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_pos_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_pos_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_orient_q1
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_orient_q1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_orient_q1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_orient_q2
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_orient_q2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_orient_q2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_orient_q3
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_orient_q3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_orient_q3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oframe_orient_q4
    PyObject * field = PyObject_GetAttrString(_pymsg, "oframe_orient_q4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oframe_orient_q4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__msg__work_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WorkObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.msg._work_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WorkObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__msg__WorkObject * ros_message = (nourish_robot_arm_msgs__msg__WorkObject *)raw_ros_message;
  {  // robhold
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->robhold ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robhold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_pos_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_pos_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_pos_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_orient_q1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_orient_q1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_orient_q1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_orient_q2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_orient_q2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_orient_q2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_orient_q3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_orient_q3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_orient_q3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uframe_orient_q4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->uframe_orient_q4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uframe_orient_q4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_pos_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_pos_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_pos_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_pos_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_pos_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_pos_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_pos_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_pos_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_pos_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_orient_q1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_orient_q1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_orient_q1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_orient_q2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_orient_q2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_orient_q2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_orient_q3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_orient_q3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_orient_q3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oframe_orient_q4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oframe_orient_q4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oframe_orient_q4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
