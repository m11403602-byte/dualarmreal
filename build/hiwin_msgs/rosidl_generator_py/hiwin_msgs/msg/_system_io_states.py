# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hiwin_msgs:msg/SystemIOStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemIOStates(type):
    """Metaclass of message 'SystemIOStates'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hiwin_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hiwin_msgs.msg.SystemIOStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_io_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_io_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_io_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_io_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_io_states

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemIOStates(metaclass=Metaclass_SystemIOStates):
    """Message class 'SystemIOStates'."""

    __slots__ = [
        '_stamp',
        '_breaker',
        '_e_stop',
        '_e_stop2',
        '_fan_error',
        '_capacitor_error',
        '_clear_error_notify',
        '_shutdown_notify',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'breaker': 'boolean',
        'e_stop': 'boolean',
        'e_stop2': 'boolean',
        'fan_error': 'boolean',
        'capacitor_error': 'boolean',
        'clear_error_notify': 'boolean',
        'shutdown_notify': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.breaker = kwargs.get('breaker', bool())
        self.e_stop = kwargs.get('e_stop', bool())
        self.e_stop2 = kwargs.get('e_stop2', bool())
        self.fan_error = kwargs.get('fan_error', bool())
        self.capacitor_error = kwargs.get('capacitor_error', bool())
        self.clear_error_notify = kwargs.get('clear_error_notify', bool())
        self.shutdown_notify = kwargs.get('shutdown_notify', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.breaker != other.breaker:
            return False
        if self.e_stop != other.e_stop:
            return False
        if self.e_stop2 != other.e_stop2:
            return False
        if self.fan_error != other.fan_error:
            return False
        if self.capacitor_error != other.capacitor_error:
            return False
        if self.clear_error_notify != other.clear_error_notify:
            return False
        if self.shutdown_notify != other.shutdown_notify:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def breaker(self):
        """Message field 'breaker'."""
        return self._breaker

    @breaker.setter
    def breaker(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'breaker' field must be of type 'bool'"
        self._breaker = value

    @builtins.property
    def e_stop(self):
        """Message field 'e_stop'."""
        return self._e_stop

    @e_stop.setter
    def e_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'e_stop' field must be of type 'bool'"
        self._e_stop = value

    @builtins.property
    def e_stop2(self):
        """Message field 'e_stop2'."""
        return self._e_stop2

    @e_stop2.setter
    def e_stop2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'e_stop2' field must be of type 'bool'"
        self._e_stop2 = value

    @builtins.property
    def fan_error(self):
        """Message field 'fan_error'."""
        return self._fan_error

    @fan_error.setter
    def fan_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fan_error' field must be of type 'bool'"
        self._fan_error = value

    @builtins.property
    def capacitor_error(self):
        """Message field 'capacitor_error'."""
        return self._capacitor_error

    @capacitor_error.setter
    def capacitor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'capacitor_error' field must be of type 'bool'"
        self._capacitor_error = value

    @builtins.property
    def clear_error_notify(self):
        """Message field 'clear_error_notify'."""
        return self._clear_error_notify

    @clear_error_notify.setter
    def clear_error_notify(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clear_error_notify' field must be of type 'bool'"
        self._clear_error_notify = value

    @builtins.property
    def shutdown_notify(self):
        """Message field 'shutdown_notify'."""
        return self._shutdown_notify

    @shutdown_notify.setter
    def shutdown_notify(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'shutdown_notify' field must be of type 'bool'"
        self._shutdown_notify = value
