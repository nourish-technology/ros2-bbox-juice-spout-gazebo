# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterPoint_Goal(type):
    """Metaclass of message 'RegisterPoint_Goal'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__goal

            from nourish_robot_arm_msgs.msg import Speed
            if Speed.__class__._TYPE_SUPPORT is None:
                Speed.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Tool
            if Tool.__class__._TYPE_SUPPORT is None:
                Tool.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_Goal(metaclass=Metaclass_RegisterPoint_Goal):
    """Message class 'RegisterPoint_Goal'."""

    __slots__ = [
        '_sensor_tool',
        '_ignore_sensor',
        '_speed',
        '_x_offset',
        '_y_offset',
        '_z_offset',
        '_x_rot',
        '_y_rot',
        '_z_rot',
    ]

    _fields_and_field_types = {
        'sensor_tool': 'nourish_robot_arm_msgs/Tool',
        'ignore_sensor': 'boolean',
        'speed': 'nourish_robot_arm_msgs/Speed',
        'x_offset': 'float',
        'y_offset': 'float',
        'z_offset': 'float',
        'x_rot': 'float',
        'y_rot': 'float',
        'z_rot': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Tool'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Speed'),  # noqa: E501
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
        from nourish_robot_arm_msgs.msg import Tool
        self.sensor_tool = kwargs.get('sensor_tool', Tool())
        self.ignore_sensor = kwargs.get('ignore_sensor', bool())
        from nourish_robot_arm_msgs.msg import Speed
        self.speed = kwargs.get('speed', Speed())
        self.x_offset = kwargs.get('x_offset', float())
        self.y_offset = kwargs.get('y_offset', float())
        self.z_offset = kwargs.get('z_offset', float())
        self.x_rot = kwargs.get('x_rot', float())
        self.y_rot = kwargs.get('y_rot', float())
        self.z_rot = kwargs.get('z_rot', float())

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
        if self.sensor_tool != other.sensor_tool:
            return False
        if self.ignore_sensor != other.ignore_sensor:
            return False
        if self.speed != other.speed:
            return False
        if self.x_offset != other.x_offset:
            return False
        if self.y_offset != other.y_offset:
            return False
        if self.z_offset != other.z_offset:
            return False
        if self.x_rot != other.x_rot:
            return False
        if self.y_rot != other.y_rot:
            return False
        if self.z_rot != other.z_rot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sensor_tool(self):
        """Message field 'sensor_tool'."""
        return self._sensor_tool

    @sensor_tool.setter
    def sensor_tool(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Tool
            assert \
                isinstance(value, Tool), \
                "The 'sensor_tool' field must be a sub message of type 'Tool'"
        self._sensor_tool = value

    @property
    def ignore_sensor(self):
        """Message field 'ignore_sensor'."""
        return self._ignore_sensor

    @ignore_sensor.setter
    def ignore_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_sensor' field must be of type 'bool'"
        self._ignore_sensor = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Speed
            assert \
                isinstance(value, Speed), \
                "The 'speed' field must be a sub message of type 'Speed'"
        self._speed = value

    @property
    def x_offset(self):
        """Message field 'x_offset'."""
        return self._x_offset

    @x_offset.setter
    def x_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_offset' field must be of type 'float'"
        self._x_offset = value

    @property
    def y_offset(self):
        """Message field 'y_offset'."""
        return self._y_offset

    @y_offset.setter
    def y_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_offset' field must be of type 'float'"
        self._y_offset = value

    @property
    def z_offset(self):
        """Message field 'z_offset'."""
        return self._z_offset

    @z_offset.setter
    def z_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_offset' field must be of type 'float'"
        self._z_offset = value

    @property
    def x_rot(self):
        """Message field 'x_rot'."""
        return self._x_rot

    @x_rot.setter
    def x_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_rot' field must be of type 'float'"
        self._x_rot = value

    @property
    def y_rot(self):
        """Message field 'y_rot'."""
        return self._y_rot

    @y_rot.setter
    def y_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_rot' field must be of type 'float'"
        self._y_rot = value

    @property
    def z_rot(self):
        """Message field 'z_rot'."""
        return self._z_rot

    @z_rot.setter
    def z_rot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_rot' field must be of type 'float'"
        self._z_rot = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterPoint_Result(type):
    """Metaclass of message 'RegisterPoint_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_UNKNOWN': 0,
        'RESULT_SUCCESS': 1,
        'RESULT_ERR_ROBOT_UNHEALTHY': 2,
        'RESULT_ERR_SENSOR_ACTIVATED': 3,
        'RESULT_ERR_SENSOR_NEVER_ENGAGED': 4,
        'RESULT_ERR_UNKNOWN': 5,
        'RESULT_ERR_BUSY': 6,
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
                'nourish_robot_arm_msgs.action.RegisterPoint_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__result

            from nourish_robot_arm_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_UNKNOWN': cls.__constants['RESULT_UNKNOWN'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_ERR_ROBOT_UNHEALTHY': cls.__constants['RESULT_ERR_ROBOT_UNHEALTHY'],
            'RESULT_ERR_SENSOR_ACTIVATED': cls.__constants['RESULT_ERR_SENSOR_ACTIVATED'],
            'RESULT_ERR_SENSOR_NEVER_ENGAGED': cls.__constants['RESULT_ERR_SENSOR_NEVER_ENGAGED'],
            'RESULT_ERR_UNKNOWN': cls.__constants['RESULT_ERR_UNKNOWN'],
            'RESULT_ERR_BUSY': cls.__constants['RESULT_ERR_BUSY'],
        }

    @property
    def RESULT_UNKNOWN(self):
        """Message constant 'RESULT_UNKNOWN'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_UNKNOWN']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_SUCCESS']

    @property
    def RESULT_ERR_ROBOT_UNHEALTHY(self):
        """Message constant 'RESULT_ERR_ROBOT_UNHEALTHY'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_ERR_ROBOT_UNHEALTHY']

    @property
    def RESULT_ERR_SENSOR_ACTIVATED(self):
        """Message constant 'RESULT_ERR_SENSOR_ACTIVATED'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_ERR_SENSOR_ACTIVATED']

    @property
    def RESULT_ERR_SENSOR_NEVER_ENGAGED(self):
        """Message constant 'RESULT_ERR_SENSOR_NEVER_ENGAGED'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_ERR_SENSOR_NEVER_ENGAGED']

    @property
    def RESULT_ERR_UNKNOWN(self):
        """Message constant 'RESULT_ERR_UNKNOWN'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_ERR_UNKNOWN']

    @property
    def RESULT_ERR_BUSY(self):
        """Message constant 'RESULT_ERR_BUSY'."""
        return Metaclass_RegisterPoint_Result.__constants['RESULT_ERR_BUSY']


class RegisterPoint_Result(metaclass=Metaclass_RegisterPoint_Result):
    """
    Message class 'RegisterPoint_Result'.

    Constants:
      RESULT_UNKNOWN
      RESULT_SUCCESS
      RESULT_ERR_ROBOT_UNHEALTHY
      RESULT_ERR_SENSOR_ACTIVATED
      RESULT_ERR_SENSOR_NEVER_ENGAGED
      RESULT_ERR_UNKNOWN
      RESULT_ERR_BUSY
    """

    __slots__ = [
        '_final_status',
        '_pose',
    ]

    _fields_and_field_types = {
        'final_status': 'uint8',
        'pose': 'nourish_robot_arm_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.final_status = kwargs.get('final_status', int())
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
        if self.final_status != other.final_status:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def final_status(self):
        """Message field 'final_status'."""
        return self._final_status

    @final_status.setter
    def final_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'final_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'final_status' field must be an unsigned integer in [0, 255]"
        self._final_status = value

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterPoint_Feedback(type):
    """Metaclass of message 'RegisterPoint_Feedback'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_Feedback(metaclass=Metaclass_RegisterPoint_Feedback):
    """Message class 'RegisterPoint_Feedback'."""

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


class Metaclass_RegisterPoint_SendGoal_Request(type):
    """Metaclass of message 'RegisterPoint_SendGoal_Request'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__send_goal__request

            from nourish_robot_arm_msgs.action import RegisterPoint
            if RegisterPoint.Goal.__class__._TYPE_SUPPORT is None:
                RegisterPoint.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_SendGoal_Request(metaclass=Metaclass_RegisterPoint_SendGoal_Request):
    """Message class 'RegisterPoint_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'nourish_robot_arm_msgs/RegisterPoint_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'action'], 'RegisterPoint_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Goal
        self.goal = kwargs.get('goal', RegisterPoint_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Goal
            assert \
                isinstance(value, RegisterPoint_Goal), \
                "The 'goal' field must be a sub message of type 'RegisterPoint_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterPoint_SendGoal_Response(type):
    """Metaclass of message 'RegisterPoint_SendGoal_Response'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_SendGoal_Response(metaclass=Metaclass_RegisterPoint_SendGoal_Response):
    """Message class 'RegisterPoint_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_RegisterPoint_SendGoal(type):
    """Metaclass of service 'RegisterPoint_SendGoal'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__register_point__send_goal

            from nourish_robot_arm_msgs.action import _register_point
            if _register_point.Metaclass_RegisterPoint_SendGoal_Request._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_SendGoal_Request.__import_type_support__()
            if _register_point.Metaclass_RegisterPoint_SendGoal_Response._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_SendGoal_Response.__import_type_support__()


class RegisterPoint_SendGoal(metaclass=Metaclass_RegisterPoint_SendGoal):
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_SendGoal_Request as Request
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterPoint_GetResult_Request(type):
    """Metaclass of message 'RegisterPoint_GetResult_Request'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_GetResult_Request(metaclass=Metaclass_RegisterPoint_GetResult_Request):
    """Message class 'RegisterPoint_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterPoint_GetResult_Response(type):
    """Metaclass of message 'RegisterPoint_GetResult_Response'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__get_result__response

            from nourish_robot_arm_msgs.action import RegisterPoint
            if RegisterPoint.Result.__class__._TYPE_SUPPORT is None:
                RegisterPoint.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_GetResult_Response(metaclass=Metaclass_RegisterPoint_GetResult_Response):
    """Message class 'RegisterPoint_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'nourish_robot_arm_msgs/RegisterPoint_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'action'], 'RegisterPoint_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Result
        self.result = kwargs.get('result', RegisterPoint_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Result
            assert \
                isinstance(value, RegisterPoint_Result), \
                "The 'result' field must be a sub message of type 'RegisterPoint_Result'"
        self._result = value


class Metaclass_RegisterPoint_GetResult(type):
    """Metaclass of service 'RegisterPoint_GetResult'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__register_point__get_result

            from nourish_robot_arm_msgs.action import _register_point
            if _register_point.Metaclass_RegisterPoint_GetResult_Request._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_GetResult_Request.__import_type_support__()
            if _register_point.Metaclass_RegisterPoint_GetResult_Response._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_GetResult_Response.__import_type_support__()


class RegisterPoint_GetResult(metaclass=Metaclass_RegisterPoint_GetResult):
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_GetResult_Request as Request
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterPoint_FeedbackMessage(type):
    """Metaclass of message 'RegisterPoint_FeedbackMessage'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__register_point__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__register_point__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__register_point__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__register_point__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__register_point__feedback_message

            from nourish_robot_arm_msgs.action import RegisterPoint
            if RegisterPoint.Feedback.__class__._TYPE_SUPPORT is None:
                RegisterPoint.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterPoint_FeedbackMessage(metaclass=Metaclass_RegisterPoint_FeedbackMessage):
    """Message class 'RegisterPoint_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'nourish_robot_arm_msgs/RegisterPoint_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'action'], 'RegisterPoint_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Feedback
        self.feedback = kwargs.get('feedback', RegisterPoint_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Feedback
            assert \
                isinstance(value, RegisterPoint_Feedback), \
                "The 'feedback' field must be a sub message of type 'RegisterPoint_Feedback'"
        self._feedback = value


class Metaclass_RegisterPoint(type):
    """Metaclass of action 'RegisterPoint'."""

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
                'nourish_robot_arm_msgs.action.RegisterPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__register_point

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from nourish_robot_arm_msgs.action import _register_point
            if _register_point.Metaclass_RegisterPoint_SendGoal._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_SendGoal.__import_type_support__()
            if _register_point.Metaclass_RegisterPoint_GetResult._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_GetResult.__import_type_support__()
            if _register_point.Metaclass_RegisterPoint_FeedbackMessage._TYPE_SUPPORT is None:
                _register_point.Metaclass_RegisterPoint_FeedbackMessage.__import_type_support__()


class RegisterPoint(metaclass=Metaclass_RegisterPoint):

    # The goal message defined in the action definition.
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Goal as Goal
    # The result message defined in the action definition.
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Result as Result
    # The feedback message defined in the action definition.
    from nourish_robot_arm_msgs.action._register_point import RegisterPoint_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from nourish_robot_arm_msgs.action._register_point import RegisterPoint_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from nourish_robot_arm_msgs.action._register_point import RegisterPoint_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from nourish_robot_arm_msgs.action._register_point import RegisterPoint_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
