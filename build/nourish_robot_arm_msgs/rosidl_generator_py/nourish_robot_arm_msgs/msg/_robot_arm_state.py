# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotArmState(type):
    """Metaclass of message 'RobotArmState'."""

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
            module = import_type_support('nourish_robot_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nourish_robot_arm_msgs.msg.RobotArmState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_arm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_arm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_arm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_arm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_arm_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotArmState(metaclass=Metaclass_RobotArmState):
    """Message class 'RobotArmState'."""

    __slots__ = [
        '_is_connected',
        '_motion_program_is_running',
        '_registration_sensor_is_activated',
        '_is_waiting',
    ]

    _fields_and_field_types = {
        'is_connected': 'boolean',
        'motion_program_is_running': 'boolean',
        'registration_sensor_is_activated': 'boolean',
        'is_waiting': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_connected = kwargs.get('is_connected', bool())
        self.motion_program_is_running = kwargs.get('motion_program_is_running', bool())
        self.registration_sensor_is_activated = kwargs.get('registration_sensor_is_activated', bool())
        self.is_waiting = kwargs.get('is_waiting', bool())

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
        if self.is_connected != other.is_connected:
            return False
        if self.motion_program_is_running != other.motion_program_is_running:
            return False
        if self.registration_sensor_is_activated != other.registration_sensor_is_activated:
            return False
        if self.is_waiting != other.is_waiting:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def is_connected(self):
        """Message field 'is_connected'."""
        return self._is_connected

    @is_connected.setter
    def is_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_connected' field must be of type 'bool'"
        self._is_connected = value

    @property
    def motion_program_is_running(self):
        """Message field 'motion_program_is_running'."""
        return self._motion_program_is_running

    @motion_program_is_running.setter
    def motion_program_is_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motion_program_is_running' field must be of type 'bool'"
        self._motion_program_is_running = value

    @property
    def registration_sensor_is_activated(self):
        """Message field 'registration_sensor_is_activated'."""
        return self._registration_sensor_is_activated

    @registration_sensor_is_activated.setter
    def registration_sensor_is_activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'registration_sensor_is_activated' field must be of type 'bool'"
        self._registration_sensor_is_activated = value

    @property
    def is_waiting(self):
        """Message field 'is_waiting'."""
        return self._is_waiting

    @is_waiting.setter
    def is_waiting(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_waiting' field must be of type 'bool'"
        self._is_waiting = value
