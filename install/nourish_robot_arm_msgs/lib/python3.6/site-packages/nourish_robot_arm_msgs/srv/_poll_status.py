# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:srv/PollStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PollStatus_Request(type):
    """Metaclass of message 'PollStatus_Request'."""

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
                'nourish_robot_arm_msgs.srv.PollStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__poll_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__poll_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__poll_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__poll_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__poll_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PollStatus_Request(metaclass=Metaclass_PollStatus_Request):
    """Message class 'PollStatus_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PollStatus_Response(type):
    """Metaclass of message 'PollStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_UNKNOWN_DO_NOT_USE': 0,
        'RESULT_SUCCESS': 1,
        'RESULT_ERROR_BUSY': 2,
        'RESULT_ERROR_UNKNOWN': 3,
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
                'nourish_robot_arm_msgs.srv.PollStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__poll_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__poll_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__poll_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__poll_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__poll_status__response

            from nourish_robot_arm_msgs.msg import RobotArmState
            if RobotArmState.__class__._TYPE_SUPPORT is None:
                RobotArmState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_UNKNOWN_DO_NOT_USE': cls.__constants['RESULT_UNKNOWN_DO_NOT_USE'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_ERROR_BUSY': cls.__constants['RESULT_ERROR_BUSY'],
            'RESULT_ERROR_UNKNOWN': cls.__constants['RESULT_ERROR_UNKNOWN'],
        }

    @property
    def RESULT_UNKNOWN_DO_NOT_USE(self):
        """Message constant 'RESULT_UNKNOWN_DO_NOT_USE'."""
        return Metaclass_PollStatus_Response.__constants['RESULT_UNKNOWN_DO_NOT_USE']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_PollStatus_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_ERROR_BUSY(self):
        """Message constant 'RESULT_ERROR_BUSY'."""
        return Metaclass_PollStatus_Response.__constants['RESULT_ERROR_BUSY']

    @property
    def RESULT_ERROR_UNKNOWN(self):
        """Message constant 'RESULT_ERROR_UNKNOWN'."""
        return Metaclass_PollStatus_Response.__constants['RESULT_ERROR_UNKNOWN']


class PollStatus_Response(metaclass=Metaclass_PollStatus_Response):
    """
    Message class 'PollStatus_Response'.

    Constants:
      RESULT_UNKNOWN_DO_NOT_USE
      RESULT_SUCCESS
      RESULT_ERROR_BUSY
      RESULT_ERROR_UNKNOWN
    """

    __slots__ = [
        '_result',
        '_state',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
        'state': 'nourish_robot_arm_msgs/RobotArmState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'RobotArmState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        from nourish_robot_arm_msgs.msg import RobotArmState
        self.state = kwargs.get('state', RobotArmState())

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
        if self.state != other.state:
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

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import RobotArmState
            assert \
                isinstance(value, RobotArmState), \
                "The 'state' field must be a sub message of type 'RobotArmState'"
        self._state = value


class Metaclass_PollStatus(type):
    """Metaclass of service 'PollStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nourish_robot_arm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nourish_robot_arm_msgs.srv.PollStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__poll_status

            from nourish_robot_arm_msgs.srv import _poll_status
            if _poll_status.Metaclass_PollStatus_Request._TYPE_SUPPORT is None:
                _poll_status.Metaclass_PollStatus_Request.__import_type_support__()
            if _poll_status.Metaclass_PollStatus_Response._TYPE_SUPPORT is None:
                _poll_status.Metaclass_PollStatus_Response.__import_type_support__()


class PollStatus(metaclass=Metaclass_PollStatus):
    from nourish_robot_arm_msgs.srv._poll_status import PollStatus_Request as Request
    from nourish_robot_arm_msgs.srv._poll_status import PollStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
