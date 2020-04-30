# generated from rosidl_generator_py/resource/_idl.py.em
# with input from juice_spout_msgs:msg/SpoutState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpoutState(type):
    """Metaclass of message 'SpoutState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FILL_LEVEL_DONT_USE': 0,
        'FILL_LEVEL_EMPTY': 1,
        'FILL_LEVEL_LOW': 2,
        'FILL_LEVEL_NOMINAL': 3,
        'FILL_LEVEL_UNKNOWN': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('juice_spout_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juice_spout_msgs.msg.SpoutState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spout_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spout_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spout_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spout_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spout_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FILL_LEVEL_DONT_USE': cls.__constants['FILL_LEVEL_DONT_USE'],
            'FILL_LEVEL_EMPTY': cls.__constants['FILL_LEVEL_EMPTY'],
            'FILL_LEVEL_LOW': cls.__constants['FILL_LEVEL_LOW'],
            'FILL_LEVEL_NOMINAL': cls.__constants['FILL_LEVEL_NOMINAL'],
            'FILL_LEVEL_UNKNOWN': cls.__constants['FILL_LEVEL_UNKNOWN'],
        }

    @property
    def FILL_LEVEL_DONT_USE(self):
        """Message constant 'FILL_LEVEL_DONT_USE'."""
        return Metaclass_SpoutState.__constants['FILL_LEVEL_DONT_USE']

    @property
    def FILL_LEVEL_EMPTY(self):
        """Message constant 'FILL_LEVEL_EMPTY'."""
        return Metaclass_SpoutState.__constants['FILL_LEVEL_EMPTY']

    @property
    def FILL_LEVEL_LOW(self):
        """Message constant 'FILL_LEVEL_LOW'."""
        return Metaclass_SpoutState.__constants['FILL_LEVEL_LOW']

    @property
    def FILL_LEVEL_NOMINAL(self):
        """Message constant 'FILL_LEVEL_NOMINAL'."""
        return Metaclass_SpoutState.__constants['FILL_LEVEL_NOMINAL']

    @property
    def FILL_LEVEL_UNKNOWN(self):
        """Message constant 'FILL_LEVEL_UNKNOWN'."""
        return Metaclass_SpoutState.__constants['FILL_LEVEL_UNKNOWN']


class SpoutState(metaclass=Metaclass_SpoutState):
    """
    Message class 'SpoutState'.

    Constants:
      FILL_LEVEL_DONT_USE
      FILL_LEVEL_EMPTY
      FILL_LEVEL_LOW
      FILL_LEVEL_NOMINAL
      FILL_LEVEL_UNKNOWN
    """

    __slots__ = [
        '_is_healthy',
        '_is_busy',
        '_fill_level',
    ]

    _fields_and_field_types = {
        'is_healthy': 'boolean',
        'is_busy': 'boolean',
        'fill_level': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_healthy = kwargs.get('is_healthy', bool())
        self.is_busy = kwargs.get('is_busy', bool())
        self.fill_level = kwargs.get('fill_level', int())

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
        if self.is_healthy != other.is_healthy:
            return False
        if self.is_busy != other.is_busy:
            return False
        if self.fill_level != other.fill_level:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def is_healthy(self):
        """Message field 'is_healthy'."""
        return self._is_healthy

    @is_healthy.setter
    def is_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_healthy' field must be of type 'bool'"
        self._is_healthy = value

    @property
    def is_busy(self):
        """Message field 'is_busy'."""
        return self._is_busy

    @is_busy.setter
    def is_busy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_busy' field must be of type 'bool'"
        self._is_busy = value

    @property
    def fill_level(self):
        """Message field 'fill_level'."""
        return self._fill_level

    @fill_level.setter
    def fill_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fill_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fill_level' field must be an unsigned integer in [0, 255]"
        self._fill_level = value
