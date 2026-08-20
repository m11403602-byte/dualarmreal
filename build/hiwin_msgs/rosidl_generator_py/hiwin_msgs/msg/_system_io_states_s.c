// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
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
#include "rosidl_runtime_c/visibility_control.h"
#include "hiwin_msgs/msg/detail/system_io_states__struct.h"
#include "hiwin_msgs/msg/detail/system_io_states__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool hiwin_msgs__msg__system_io_states__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("hiwin_msgs.msg._system_io_states.SystemIOStates", full_classname_dest, 47) == 0);
  }
  hiwin_msgs__msg__SystemIOStates * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // breaker
    PyObject * field = PyObject_GetAttrString(_pymsg, "breaker");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->breaker = (Py_True == field);
    Py_DECREF(field);
  }
  {  // e_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "e_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->e_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // e_stop2
    PyObject * field = PyObject_GetAttrString(_pymsg, "e_stop2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->e_stop2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fan_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "fan_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fan_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // capacitor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "capacitor_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->capacitor_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clear_error_notify
    PyObject * field = PyObject_GetAttrString(_pymsg, "clear_error_notify");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clear_error_notify = (Py_True == field);
    Py_DECREF(field);
  }
  {  // shutdown_notify
    PyObject * field = PyObject_GetAttrString(_pymsg, "shutdown_notify");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->shutdown_notify = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hiwin_msgs__msg__system_io_states__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemIOStates */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hiwin_msgs.msg._system_io_states");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemIOStates");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hiwin_msgs__msg__SystemIOStates * ros_message = (hiwin_msgs__msg__SystemIOStates *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // breaker
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->breaker ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "breaker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->e_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "e_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e_stop2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->e_stop2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "e_stop2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fan_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fan_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fan_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capacitor_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->capacitor_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capacitor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clear_error_notify
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clear_error_notify ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clear_error_notify", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shutdown_notify
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->shutdown_notify ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shutdown_notify", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
