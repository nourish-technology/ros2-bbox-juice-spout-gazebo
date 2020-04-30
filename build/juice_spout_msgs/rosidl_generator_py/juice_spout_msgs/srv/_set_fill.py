# generated from rosidl_generator_py/resource/_idl.py.em
# with input from juice_spout_msgs:srv/SetFill.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetFill_Request(type):
    """Metaclass of message 'SetFill_Request'."""

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
            module = import_type_support('juice_spout_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juice_spout_msgs.srv.SetFill_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_fill__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_fill__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_fill__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_fill__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_fill__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFill_Request(metaclass=Metaclass_SetFill_Request):
    """Message class 'SetFill_Request'."""

    __slots__ = [
        '_grams',
    ]

    _fields_and_field_types = {
        'grams': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grams = kwargs.get('grams', float())

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
        if self.grams != other.grams:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def grams(self):
        """Message field 'grams'."""
        return self._grams

    @grams.setter
    def grams(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'grams' field must be of type 'float'"
        self._grams = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFill_Response(type):
    """Metaclass of message 'SetFill_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_UNKNOWN': 0,
        'RESULT_SUCCESS': 1,
        'RESULT_ERROR_INVALID_VALUE': 2,
        'RESULT_ERROR_BUSY': 3,
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
                'juice_spout_msgs.srv.SetFill_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_fill__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_fill__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_fill__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_fill__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_fill__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_UNKNOWN': cls.__constants['RESULT_UNKNOWN'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_ERROR_INVALID_VALUE': cls.__constants['RESULT_ERROR_INVALID_VALUE'],
            'RESULT_ERROR_BUSY': cls.__constants['RESULT_ERROR_BUSY'],
        }

    @property
    def RESULT_UNKNOWN(self):
        """Message constant 'RESULT_UNKNOWN'."""
        return Metaclass_SetFill_Response.__constants['RESULT_UNKNOWN']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_SetFill_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_ERROR_INVALID_VALUE(self):
        """Message constant 'RESULT_ERROR_INVALID_VALUE'."""
        return Metaclass_SetFill_Response.__constants['RESULT_ERROR_INVALID_VALUE']

    @property
    def RESULT_ERROR_BUSY(self):
        """Message constant 'RESULT_ERROR_BUSY'."""
        return Metaclass_SetFill_Response.__constants['RESULT_ERROR_BUSY']


class SetFill_Response(metaclass=Metaclass_SetFill_Response):
    """
    Message class 'SetFill_Response'.

    Constants:
      RESULT_UNKNOWN
      RESULT_SUCCESS
      RESULT_ERROR_INVALID_VALUE
      RESULT_ERROR_BUSY
    """

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

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
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


class Metaclass_SetFill(type):
    """Metaclass of service 'SetFill'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('juice_spout_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'juice_spout_msgs.srv.SetFill')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_fill

            from juice_spout_msgs.srv import _set_fill
            if _set_fill.Metaclass_SetFill_Request._TYPE_SUPPORT is None:
                _set_fill.Metaclass_SetFill_Request.__import_type_support__()
            if _set_fill.Metaclass_SetFill_Response._TYPE_SUPPORT is None:
                _set_fill.Metaclass_SetFill_Response.__import_type_support__()


class SetFill(metaclass=Metaclass_SetFill):
    from juice_spout_msgs.srv._set_fill import SetFill_Request as Request
    from juice_spout_msgs.srv._set_fill import SetFill_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
