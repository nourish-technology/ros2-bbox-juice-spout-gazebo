// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
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
#include "juice_dcb_msgs/srv/set_pouring__struct.h"
#include "juice_dcb_msgs/srv/set_pouring__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool juice_dcb_msgs__srv__set_pouring__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
        "juice_dcb_msgs.srv._set_pouring.SetPouring_Request",
        full_classname_dest, 50) == 0);
  }
  juice_dcb_msgs__srv__SetPouring_Request * ros_message = _ros_message;
  {  // spout_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "spout_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spout_num = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pour
    PyObject * field = PyObject_GetAttrString(_pymsg, "pour");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pour = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * juice_dcb_msgs__srv__set_pouring__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPouring_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("juice_dcb_msgs.srv._set_pouring");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPouring_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  juice_dcb_msgs__srv__SetPouring_Request * ros_message = (juice_dcb_msgs__srv__SetPouring_Request *)raw_ros_message;
  {  // spout_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spout_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spout_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pour
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pour ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pour", field);
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
// #include "juice_dcb_msgs/srv/set_pouring__struct.h"
// already included above
// #include "juice_dcb_msgs/srv/set_pouring__functions.h"

bool juice_dcb_msgs__msg__command_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * juice_dcb_msgs__msg__command_result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool juice_dcb_msgs__srv__set_pouring__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
        "juice_dcb_msgs.srv._set_pouring.SetPouring_Response",
        full_classname_dest, 51) == 0);
  }
  juice_dcb_msgs__srv__SetPouring_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!juice_dcb_msgs__msg__command_result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * juice_dcb_msgs__srv__set_pouring__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPouring_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("juice_dcb_msgs.srv._set_pouring");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPouring_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  juice_dcb_msgs__srv__SetPouring_Response * ros_message = (juice_dcb_msgs__srv__SetPouring_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = juice_dcb_msgs__msg__command_result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
