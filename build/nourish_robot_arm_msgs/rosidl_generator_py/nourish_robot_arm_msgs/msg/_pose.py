# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:msg/Pose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pose(type):
    """Metaclass of message 'Pose'."""

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
                'nourish_robot_arm_msgs.msg.Pose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pose(metaclass=Metaclass_Pose):
    """Message class 'Pose'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_q1',
        '_q2',
        '_q3',
        '_q4',
        '_cf1',
        '_cf4',
        '_cf6',
        '_cfx',
    ]

    _fields_and_field_types = {
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'q1': 'float',
        'q2': 'float',
        'q3': 'float',
        'q4': 'float',
        'cf1': 'float',
        'cf4': 'float',
        'cf6': 'float',
        'cfx': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.q1 = kwargs.get('q1', float())
        self.q2 = kwargs.get('q2', float())
        self.q3 = kwargs.get('q3', float())
        self.q4 = kwargs.get('q4', float())
        self.cf1 = kwargs.get('cf1', float())
        self.cf4 = kwargs.get('cf4', float())
        self.cf6 = kwargs.get('cf6', float())
        self.cfx = kwargs.get('cfx', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.q1 != other.q1:
            return False
        if self.q2 != other.q2:
            return False
        if self.q3 != other.q3:
            return False
        if self.q4 != other.q4:
            return False
        if self.cf1 != other.cf1:
            return False
        if self.cf4 != other.cf4:
            return False
        if self.cf6 != other.cf6:
            return False
        if self.cfx != other.cfx:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value

    @property
    def q1(self):
        """Message field 'q1'."""
        return self._q1

    @q1.setter
    def q1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q1' field must be of type 'float'"
        self._q1 = value

    @property
    def q2(self):
        """Message field 'q2'."""
        return self._q2

    @q2.setter
    def q2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q2' field must be of type 'float'"
        self._q2 = value

    @property
    def q3(self):
        """Message field 'q3'."""
        return self._q3

    @q3.setter
    def q3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q3' field must be of type 'float'"
        self._q3 = value

    @property
    def q4(self):
        """Message field 'q4'."""
        return self._q4

    @q4.setter
    def q4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'q4' field must be of type 'float'"
        self._q4 = value

    @property
    def cf1(self):
        """Message field 'cf1'."""
        return self._cf1

    @cf1.setter
    def cf1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf1' field must be of type 'float'"
        self._cf1 = value

    @property
    def cf4(self):
        """Message field 'cf4'."""
        return self._cf4

    @cf4.setter
    def cf4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf4' field must be of type 'float'"
        self._cf4 = value

    @property
    def cf6(self):
        """Message field 'cf6'."""
        return self._cf6

    @cf6.setter
    def cf6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf6' field must be of type 'float'"
        self._cf6 = value

    @property
    def cfx(self):
        """Message field 'cfx'."""
        return self._cfx

    @cfx.setter
    def cfx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cfx' field must be of type 'float'"
        self._cfx = value
