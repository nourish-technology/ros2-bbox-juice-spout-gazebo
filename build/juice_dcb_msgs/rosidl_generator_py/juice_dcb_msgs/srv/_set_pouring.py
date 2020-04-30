# generated from rosidl_generator_py/resource/_idl.py.em
# with input from juice_dcb_msgs:srv/SetPouring.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPouring_Request(type):
    """Metaclass of message 'SetPouring_Request'."""

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
            module = import_type_support('juice_dcb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juice_dcb_msgs.srv.SetPouring_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_pouring__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_pouring__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_pouring__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_pouring__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_pouring__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPouring_Request(metaclass=Metaclass_SetPouring_Request):
    """Message class 'SetPouring_Request'."""

    __slots__ = [
        '_spout_num',
        '_pour',
    ]

    _fields_and_field_types = {
        'spout_num': 'uint32',
        'pour': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.spout_num = kwargs.get('spout_num', int())
        self.pour = kwargs.get('pour', bool())

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
        if self.spout_num != other.spout_num:
            return False
        if self.pour != other.pour:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def spout_num(self):
        """Message field 'spout_num'."""
        return self._spout_num

    @spout_num.setter
    def spout_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spout_num' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'spout_num' field must be an unsigned integer in [0, 4294967295]"
        self._spout_num = value

    @property
    def pour(self):
        """Message field 'pour'."""
        return self._pour

    @pour.setter
    def pour(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pour' field must be of type 'bool'"
        self._pour = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPouring_Response(type):
    """Metaclass of message 'SetPouring_Response'."""

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
            module = import_type_support('juice_dcb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juice_dcb_msgs.srv.SetPouring_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_pouring__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_pouring__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_pouring__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_pouring__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_pouring__response

            from juice_dcb_msgs.msg import CommandResult
            if CommandResult.__class__._TYPE_SUPPORT is None:
                CommandResult.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPouring_Response(metaclass=Metaclass_SetPouring_Response):
    """Message class 'SetPouring_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'juice_dcb_msgs/CommandResult',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['juice_dcb_msgs', 'msg'], 'CommandResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from juice_dcb_msgs.msg import CommandResult
        self.result = kwargs.get('result', CommandResult())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from juice_dcb_msgs.msg import CommandResult
            assert \
                isinstance(value, CommandResult), \
                "The 'result' field must be a sub message of type 'CommandResult'"
        self._result = value


class Metaclass_SetPouring(type):
    """Metaclass of service 'SetPouring'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('juice_dcb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juice_dcb_msgs.srv.SetPouring')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_pouring

            from juice_dcb_msgs.srv import _set_pouring
            if _set_pouring.Metaclass_SetPouring_Request._TYPE_SUPPORT is None:
                _set_pouring.Metaclass_SetPouring_Request.__import_type_support__()
            if _set_pouring.Metaclass_SetPouring_Response._TYPE_SUPPORT is None:
                _set_pouring.Metaclass_SetPouring_Response.__import_type_support__()


class SetPouring(metaclass=Metaclass_SetPouring):
    from juice_dcb_msgs.srv._set_pouring import SetPouring_Request as Request
    from juice_dcb_msgs.srv._set_pouring import SetPouring_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
