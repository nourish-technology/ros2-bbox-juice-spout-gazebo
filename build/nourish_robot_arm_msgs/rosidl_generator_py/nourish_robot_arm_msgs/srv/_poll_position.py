# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:srv/PollPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PollPosition_Request(type):
    """Metaclass of message 'PollPosition_Request'."""

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
                'nourish_robot_arm_msgs.srv.PollPosition_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__poll_position__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__poll_position__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__poll_position__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__poll_position__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__poll_position__request

            from nourish_robot_arm_msgs.msg import Tool
            if Tool.__class__._TYPE_SUPPORT is None:
                Tool.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import WorkObject
            if WorkObject.__class__._TYPE_SUPPORT is None:
                WorkObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PollPosition_Request(metaclass=Metaclass_PollPosition_Request):
    """Message class 'PollPosition_Request'."""

    __slots__ = [
        '_work_object',
        '_tool',
    ]

    _fields_and_field_types = {
        'work_object': 'nourish_robot_arm_msgs/WorkObject',
        'tool': 'nourish_robot_arm_msgs/Tool',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'WorkObject'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Tool'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nourish_robot_arm_msgs.msg import WorkObject
        self.work_object = kwargs.get('work_object', WorkObject())
        from nourish_robot_arm_msgs.msg import Tool
        self.tool = kwargs.get('tool', Tool())

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
        if self.work_object != other.work_object:
            return False
        if self.tool != other.tool:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def work_object(self):
        """Message field 'work_object'."""
        return self._work_object

    @work_object.setter
    def work_object(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import WorkObject
            assert \
                isinstance(value, WorkObject), \
                "The 'work_object' field must be a sub message of type 'WorkObject'"
        self._work_object = value

    @property
    def tool(self):
        """Message field 'tool'."""
        return self._tool

    @tool.setter
    def tool(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Tool
            assert \
                isinstance(value, Tool), \
                "The 'tool' field must be a sub message of type 'Tool'"
        self._tool = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PollPosition_Response(type):
    """Metaclass of message 'PollPosition_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_UNKNOWN_DO_NOT_USE': 0,
        'RESULT_SUCCESS': 1,
        'RESULT_ERROR_UNHEALTHY': 2,
        'RESULT_ERROR_BUSY': 3,
        'RESULT_ERROR_UNKNOWN': 4,
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
                'nourish_robot_arm_msgs.srv.PollPosition_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__poll_position__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__poll_position__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__poll_position__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__poll_position__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__poll_position__response

            from nourish_robot_arm_msgs.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_UNKNOWN_DO_NOT_USE': cls.__constants['RESULT_UNKNOWN_DO_NOT_USE'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_ERROR_UNHEALTHY': cls.__constants['RESULT_ERROR_UNHEALTHY'],
            'RESULT_ERROR_BUSY': cls.__constants['RESULT_ERROR_BUSY'],
            'RESULT_ERROR_UNKNOWN': cls.__constants['RESULT_ERROR_UNKNOWN'],
        }

    @property
    def RESULT_UNKNOWN_DO_NOT_USE(self):
        """Message constant 'RESULT_UNKNOWN_DO_NOT_USE'."""
        return Metaclass_PollPosition_Response.__constants['RESULT_UNKNOWN_DO_NOT_USE']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_PollPosition_Response.__constants['RESULT_SUCCESS']

    @property
    def RESULT_ERROR_UNHEALTHY(self):
        """Message constant 'RESULT_ERROR_UNHEALTHY'."""
        return Metaclass_PollPosition_Response.__constants['RESULT_ERROR_UNHEALTHY']

    @property
    def RESULT_ERROR_BUSY(self):
        """Message constant 'RESULT_ERROR_BUSY'."""
        return Metaclass_PollPosition_Response.__constants['RESULT_ERROR_BUSY']

    @property
    def RESULT_ERROR_UNKNOWN(self):
        """Message constant 'RESULT_ERROR_UNKNOWN'."""
        return Metaclass_PollPosition_Response.__constants['RESULT_ERROR_UNKNOWN']


class PollPosition_Response(metaclass=Metaclass_PollPosition_Response):
    """
    Message class 'PollPosition_Response'.

    Constants:
      RESULT_UNKNOWN_DO_NOT_USE
      RESULT_SUCCESS
      RESULT_ERROR_UNHEALTHY
      RESULT_ERROR_BUSY
      RESULT_ERROR_UNKNOWN
    """

    __slots__ = [
        '_result',
        '_joint',
        '_pose',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
        'joint': 'nourish_robot_arm_msgs/Joint',
        'pose': 'nourish_robot_arm_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Joint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        from nourish_robot_arm_msgs.msg import Joint
        self.joint = kwargs.get('joint', Joint())
        from nourish_robot_arm_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())

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
        if self.joint != other.joint:
            return False
        if self.pose != other.pose:
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
    def joint(self):
        """Message field 'joint'."""
        return self._joint

    @joint.setter
    def joint(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Joint
            assert \
                isinstance(value, Joint), \
                "The 'joint' field must be a sub message of type 'Joint'"
        self._joint = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value


class Metaclass_PollPosition(type):
    """Metaclass of service 'PollPosition'."""

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
                'nourish_robot_arm_msgs.srv.PollPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__poll_position

            from nourish_robot_arm_msgs.srv import _poll_position
            if _poll_position.Metaclass_PollPosition_Request._TYPE_SUPPORT is None:
                _poll_position.Metaclass_PollPosition_Request.__import_type_support__()
            if _poll_position.Metaclass_PollPosition_Response._TYPE_SUPPORT is None:
                _poll_position.Metaclass_PollPosition_Response.__import_type_support__()


class PollPosition(metaclass=Metaclass_PollPosition):
    from nourish_robot_arm_msgs.srv._poll_position import PollPosition_Request as Request
    from nourish_robot_arm_msgs.srv._poll_position import PollPosition_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
