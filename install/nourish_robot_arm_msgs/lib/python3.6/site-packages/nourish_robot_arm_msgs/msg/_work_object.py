# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:msg/WorkObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WorkObject(type):
    """Metaclass of message 'WorkObject'."""

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
                'nourish_robot_arm_msgs.msg.WorkObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__work_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__work_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__work_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__work_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__work_object

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WorkObject(metaclass=Metaclass_WorkObject):
    """Message class 'WorkObject'."""

    __slots__ = [
        '_robhold',
        '_uframe_pos_x',
        '_uframe_pos_y',
        '_uframe_pos_z',
        '_uframe_orient_q1',
        '_uframe_orient_q2',
        '_uframe_orient_q3',
        '_uframe_orient_q4',
        '_oframe_pos_x',
        '_oframe_pos_y',
        '_oframe_pos_z',
        '_oframe_orient_q1',
        '_oframe_orient_q2',
        '_oframe_orient_q3',
        '_oframe_orient_q4',
    ]

    _fields_and_field_types = {
        'robhold': 'boolean',
        'uframe_pos_x': 'float',
        'uframe_pos_y': 'float',
        'uframe_pos_z': 'float',
        'uframe_orient_q1': 'float',
        'uframe_orient_q2': 'float',
        'uframe_orient_q3': 'float',
        'uframe_orient_q4': 'float',
        'oframe_pos_x': 'float',
        'oframe_pos_y': 'float',
        'oframe_pos_z': 'float',
        'oframe_orient_q1': 'float',
        'oframe_orient_q2': 'float',
        'oframe_orient_q3': 'float',
        'oframe_orient_q4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robhold = kwargs.get('robhold', bool())
        self.uframe_pos_x = kwargs.get('uframe_pos_x', float())
        self.uframe_pos_y = kwargs.get('uframe_pos_y', float())
        self.uframe_pos_z = kwargs.get('uframe_pos_z', float())
        self.uframe_orient_q1 = kwargs.get('uframe_orient_q1', float())
        self.uframe_orient_q2 = kwargs.get('uframe_orient_q2', float())
        self.uframe_orient_q3 = kwargs.get('uframe_orient_q3', float())
        self.uframe_orient_q4 = kwargs.get('uframe_orient_q4', float())
        self.oframe_pos_x = kwargs.get('oframe_pos_x', float())
        self.oframe_pos_y = kwargs.get('oframe_pos_y', float())
        self.oframe_pos_z = kwargs.get('oframe_pos_z', float())
        self.oframe_orient_q1 = kwargs.get('oframe_orient_q1', float())
        self.oframe_orient_q2 = kwargs.get('oframe_orient_q2', float())
        self.oframe_orient_q3 = kwargs.get('oframe_orient_q3', float())
        self.oframe_orient_q4 = kwargs.get('oframe_orient_q4', float())

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
        if self.robhold != other.robhold:
            return False
        if self.uframe_pos_x != other.uframe_pos_x:
            return False
        if self.uframe_pos_y != other.uframe_pos_y:
            return False
        if self.uframe_pos_z != other.uframe_pos_z:
            return False
        if self.uframe_orient_q1 != other.uframe_orient_q1:
            return False
        if self.uframe_orient_q2 != other.uframe_orient_q2:
            return False
        if self.uframe_orient_q3 != other.uframe_orient_q3:
            return False
        if self.uframe_orient_q4 != other.uframe_orient_q4:
            return False
        if self.oframe_pos_x != other.oframe_pos_x:
            return False
        if self.oframe_pos_y != other.oframe_pos_y:
            return False
        if self.oframe_pos_z != other.oframe_pos_z:
            return False
        if self.oframe_orient_q1 != other.oframe_orient_q1:
            return False
        if self.oframe_orient_q2 != other.oframe_orient_q2:
            return False
        if self.oframe_orient_q3 != other.oframe_orient_q3:
            return False
        if self.oframe_orient_q4 != other.oframe_orient_q4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robhold(self):
        """Message field 'robhold'."""
        return self._robhold

    @robhold.setter
    def robhold(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robhold' field must be of type 'bool'"
        self._robhold = value

    @property
    def uframe_pos_x(self):
        """Message field 'uframe_pos_x'."""
        return self._uframe_pos_x

    @uframe_pos_x.setter
    def uframe_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_pos_x' field must be of type 'float'"
        self._uframe_pos_x = value

    @property
    def uframe_pos_y(self):
        """Message field 'uframe_pos_y'."""
        return self._uframe_pos_y

    @uframe_pos_y.setter
    def uframe_pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_pos_y' field must be of type 'float'"
        self._uframe_pos_y = value

    @property
    def uframe_pos_z(self):
        """Message field 'uframe_pos_z'."""
        return self._uframe_pos_z

    @uframe_pos_z.setter
    def uframe_pos_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_pos_z' field must be of type 'float'"
        self._uframe_pos_z = value

    @property
    def uframe_orient_q1(self):
        """Message field 'uframe_orient_q1'."""
        return self._uframe_orient_q1

    @uframe_orient_q1.setter
    def uframe_orient_q1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_orient_q1' field must be of type 'float'"
        self._uframe_orient_q1 = value

    @property
    def uframe_orient_q2(self):
        """Message field 'uframe_orient_q2'."""
        return self._uframe_orient_q2

    @uframe_orient_q2.setter
    def uframe_orient_q2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_orient_q2' field must be of type 'float'"
        self._uframe_orient_q2 = value

    @property
    def uframe_orient_q3(self):
        """Message field 'uframe_orient_q3'."""
        return self._uframe_orient_q3

    @uframe_orient_q3.setter
    def uframe_orient_q3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_orient_q3' field must be of type 'float'"
        self._uframe_orient_q3 = value

    @property
    def uframe_orient_q4(self):
        """Message field 'uframe_orient_q4'."""
        return self._uframe_orient_q4

    @uframe_orient_q4.setter
    def uframe_orient_q4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'uframe_orient_q4' field must be of type 'float'"
        self._uframe_orient_q4 = value

    @property
    def oframe_pos_x(self):
        """Message field 'oframe_pos_x'."""
        return self._oframe_pos_x

    @oframe_pos_x.setter
    def oframe_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_pos_x' field must be of type 'float'"
        self._oframe_pos_x = value

    @property
    def oframe_pos_y(self):
        """Message field 'oframe_pos_y'."""
        return self._oframe_pos_y

    @oframe_pos_y.setter
    def oframe_pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_pos_y' field must be of type 'float'"
        self._oframe_pos_y = value

    @property
    def oframe_pos_z(self):
        """Message field 'oframe_pos_z'."""
        return self._oframe_pos_z

    @oframe_pos_z.setter
    def oframe_pos_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_pos_z' field must be of type 'float'"
        self._oframe_pos_z = value

    @property
    def oframe_orient_q1(self):
        """Message field 'oframe_orient_q1'."""
        return self._oframe_orient_q1

    @oframe_orient_q1.setter
    def oframe_orient_q1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_orient_q1' field must be of type 'float'"
        self._oframe_orient_q1 = value

    @property
    def oframe_orient_q2(self):
        """Message field 'oframe_orient_q2'."""
        return self._oframe_orient_q2

    @oframe_orient_q2.setter
    def oframe_orient_q2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_orient_q2' field must be of type 'float'"
        self._oframe_orient_q2 = value

    @property
    def oframe_orient_q3(self):
        """Message field 'oframe_orient_q3'."""
        return self._oframe_orient_q3

    @oframe_orient_q3.setter
    def oframe_orient_q3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_orient_q3' field must be of type 'float'"
        self._oframe_orient_q3 = value

    @property
    def oframe_orient_q4(self):
        """Message field 'oframe_orient_q4'."""
        return self._oframe_orient_q4

    @oframe_orient_q4.setter
    def oframe_orient_q4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oframe_orient_q4' field must be of type 'float'"
        self._oframe_orient_q4 = value
