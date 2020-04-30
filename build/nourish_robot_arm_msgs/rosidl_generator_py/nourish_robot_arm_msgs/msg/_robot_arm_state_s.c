// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
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
#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.h"
#include "nourish_robot_arm_msgs/msg/robot_arm_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool nourish_robot_arm_msgs__msg__robot_arm_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
        "nourish_robot_arm_msgs.msg._robot_arm_state.RobotArmState",
        full_classname_dest, 57) == 0);
  }
  nourish_robot_arm_msgs__msg__RobotArmState * ros_message = _ros_message;
  {  // is_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // motion_program_is_running
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_program_is_running");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motion_program_is_running = (Py_True == field);
    Py_DECREF(field);
  }
  {  // registration_sensor_is_activated
    PyObject * field = PyObject_GetAttrString(_pymsg, "registration_sensor_is_activated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->registration_sensor_is_activated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_waiting
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_waiting");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_waiting = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * nourish_robot_arm_msgs__msg__robot_arm_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotArmState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("nourish_robot_arm_msgs.msg._robot_arm_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotArmState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  nourish_robot_arm_msgs__msg__RobotArmState * ros_message = (nourish_robot_arm_msgs__msg__RobotArmState *)raw_ros_message;
  {  // is_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_program_is_running
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motion_program_is_running ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_program_is_running", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // registration_sensor_is_activated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->registration_sensor_is_activated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "registration_sensor_is_activated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_waiting
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_waiting ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_waiting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
