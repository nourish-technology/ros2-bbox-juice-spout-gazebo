# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:msg/Zone.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Zone(type):
    """Metaclass of message 'Zone'."""

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
                'nourish_robot_arm_msgs.msg.Zone')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__zone
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__zone
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__zone
            cls._TYPE_SUPPORT = module.type_support_msg__msg__zone
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__zone

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Zone(metaclass=Metaclass_Zone):
    """Message class 'Zone'."""

    __slots__ = [
        '_fine_point',
        '_pzone_eax',
        '_pzone_ori',
        '_pzone_tcp',
        '_leax',
        '_ori',
        '_reax',
    ]

    _fields_and_field_types = {
        'fine_point': 'boolean',
        'pzone_eax': 'float',
        'pzone_ori': 'float',
        'pzone_tcp': 'float',
        'leax': 'float',
        'ori': 'float',
        'reax': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.fine_point = kwargs.get('fine_point', bool())
        self.pzone_eax = kwargs.get('pzone_eax', float())
        self.pzone_ori = kwargs.get('pzone_ori', float())
        self.pzone_tcp = kwargs.get('pzone_tcp', float())
        self.leax = kwargs.get('leax', float())
        self.ori = kwargs.get('ori', float())
        self.reax = kwargs.get('reax', float())

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
        if self.fine_point != other.fine_point:
            return False
        if self.pzone_eax != other.pzone_eax:
            return False
        if self.pzone_ori != other.pzone_ori:
            return False
        if self.pzone_tcp != other.pzone_tcp:
            return False
        if self.leax != other.leax:
            return False
        if self.ori != other.ori:
            return False
        if self.reax != other.reax:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def fine_point(self):
        """Message field 'fine_point'."""
        return self._fine_point

    @fine_point.setter
    def fine_point(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fine_point' field must be of type 'bool'"
        self._fine_point = value

    @property
    def pzone_eax(self):
        """Message field 'pzone_eax'."""
        return self._pzone_eax

    @pzone_eax.setter
    def pzone_eax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pzone_eax' field must be of type 'float'"
        self._pzone_eax = value

    @property
    def pzone_ori(self):
        """Message field 'pzone_ori'."""
        return self._pzone_ori

    @pzone_ori.setter
    def pzone_ori(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pzone_ori' field must be of type 'float'"
        self._pzone_ori = value

    @property
    def pzone_tcp(self):
        """Message field 'pzone_tcp'."""
        return self._pzone_tcp

    @pzone_tcp.setter
    def pzone_tcp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pzone_tcp' field must be of type 'float'"
        self._pzone_tcp = value

    @property
    def leax(self):
        """Message field 'leax'."""
        return self._leax

    @leax.setter
    def leax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'leax' field must be of type 'float'"
        self._leax = value

    @property
    def ori(self):
        """Message field 'ori'."""
        return self._ori

    @ori.setter
    def ori(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ori' field must be of type 'float'"
        self._ori = value

    @property
    def reax(self):
        """Message field 'reax'."""
        return self._reax

    @reax.setter
    def reax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reax' field must be of type 'float'"
        self._reax = value
