# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:msg/Joint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Joint(type):
    """Metaclass of message 'Joint'."""

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
                'nourish_robot_arm_msgs.msg.Joint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Joint(metaclass=Metaclass_Joint):
    """Message class 'Joint'."""

    __slots__ = [
        '_j1',
        '_j2',
        '_j3',
        '_j4',
        '_j5',
        '_j6',
    ]

    _fields_and_field_types = {
        'j1': 'float',
        'j2': 'float',
        'j3': 'float',
        'j4': 'float',
        'j5': 'float',
        'j6': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.j1 = kwargs.get('j1', float())
        self.j2 = kwargs.get('j2', float())
        self.j3 = kwargs.get('j3', float())
        self.j4 = kwargs.get('j4', float())
        self.j5 = kwargs.get('j5', float())
        self.j6 = kwargs.get('j6', float())

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
        if self.j1 != other.j1:
            return False
        if self.j2 != other.j2:
            return False
        if self.j3 != other.j3:
            return False
        if self.j4 != other.j4:
            return False
        if self.j5 != other.j5:
            return False
        if self.j6 != other.j6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def j1(self):
        """Message field 'j1'."""
        return self._j1

    @j1.setter
    def j1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j1' field must be of type 'float'"
        self._j1 = value

    @property
    def j2(self):
        """Message field 'j2'."""
        return self._j2

    @j2.setter
    def j2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j2' field must be of type 'float'"
        self._j2 = value

    @property
    def j3(self):
        """Message field 'j3'."""
        return self._j3

    @j3.setter
    def j3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j3' field must be of type 'float'"
        self._j3 = value

    @property
    def j4(self):
        """Message field 'j4'."""
        return self._j4

    @j4.setter
    def j4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j4' field must be of type 'float'"
        self._j4 = value

    @property
    def j5(self):
        """Message field 'j5'."""
        return self._j5

    @j5.setter
    def j5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j5' field must be of type 'float'"
        self._j5 = value

    @property
    def j6(self):
        """Message field 'j6'."""
        return self._j6

    @j6.setter
    def j6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'j6' field must be of type 'float'"
        self._j6 = value
