# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nourish_robot_arm_msgs:msg/RobotMove.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotMove(type):
    """Metaclass of message 'RobotMove'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INTERPOLATION_JOINT': 0,
        'INTERPOLATION_POSE': 1,
        'TARGET_TYPE_JOINT': 0,
        'TARGET_TYPE_POSE': 1,
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
                'nourish_robot_arm_msgs.msg.RobotMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_move
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_move
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_move
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_move
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_move

            from nourish_robot_arm_msgs.msg import Acceleration
            if Acceleration.__class__._TYPE_SUPPORT is None:
                Acceleration.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Speed
            if Speed.__class__._TYPE_SUPPORT is None:
                Speed.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Tool
            if Tool.__class__._TYPE_SUPPORT is None:
                Tool.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import WorkObject
            if WorkObject.__class__._TYPE_SUPPORT is None:
                WorkObject.__class__.__import_type_support__()

            from nourish_robot_arm_msgs.msg import Zone
            if Zone.__class__._TYPE_SUPPORT is None:
                Zone.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INTERPOLATION_JOINT': cls.__constants['INTERPOLATION_JOINT'],
            'INTERPOLATION_POSE': cls.__constants['INTERPOLATION_POSE'],
            'TARGET_TYPE_JOINT': cls.__constants['TARGET_TYPE_JOINT'],
            'TARGET_TYPE_POSE': cls.__constants['TARGET_TYPE_POSE'],
        }

    @property
    def INTERPOLATION_JOINT(self):
        """Message constant 'INTERPOLATION_JOINT'."""
        return Metaclass_RobotMove.__constants['INTERPOLATION_JOINT']

    @property
    def INTERPOLATION_POSE(self):
        """Message constant 'INTERPOLATION_POSE'."""
        return Metaclass_RobotMove.__constants['INTERPOLATION_POSE']

    @property
    def TARGET_TYPE_JOINT(self):
        """Message constant 'TARGET_TYPE_JOINT'."""
        return Metaclass_RobotMove.__constants['TARGET_TYPE_JOINT']

    @property
    def TARGET_TYPE_POSE(self):
        """Message constant 'TARGET_TYPE_POSE'."""
        return Metaclass_RobotMove.__constants['TARGET_TYPE_POSE']


class RobotMove(metaclass=Metaclass_RobotMove):
    """
    Message class 'RobotMove'.

    Constants:
      INTERPOLATION_JOINT
      INTERPOLATION_POSE
      TARGET_TYPE_JOINT
      TARGET_TYPE_POSE
    """

    __slots__ = [
        '_speed',
        '_acceleration',
        '_zone',
        '_tool',
        '_work_object',
        '_interpolation',
        '_target_type',
        '_pose',
        '_joint',
    ]

    _fields_and_field_types = {
        'speed': 'nourish_robot_arm_msgs/Speed',
        'acceleration': 'nourish_robot_arm_msgs/Acceleration',
        'zone': 'nourish_robot_arm_msgs/Zone',
        'tool': 'nourish_robot_arm_msgs/Tool',
        'work_object': 'nourish_robot_arm_msgs/WorkObject',
        'interpolation': 'uint8',
        'target_type': 'uint8',
        'pose': 'nourish_robot_arm_msgs/Pose',
        'joint': 'nourish_robot_arm_msgs/Joint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Speed'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Acceleration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Zone'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Tool'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'WorkObject'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nourish_robot_arm_msgs', 'msg'], 'Joint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nourish_robot_arm_msgs.msg import Speed
        self.speed = kwargs.get('speed', Speed())
        from nourish_robot_arm_msgs.msg import Acceleration
        self.acceleration = kwargs.get('acceleration', Acceleration())
        from nourish_robot_arm_msgs.msg import Zone
        self.zone = kwargs.get('zone', Zone())
        from nourish_robot_arm_msgs.msg import Tool
        self.tool = kwargs.get('tool', Tool())
        from nourish_robot_arm_msgs.msg import WorkObject
        self.work_object = kwargs.get('work_object', WorkObject())
        self.interpolation = kwargs.get('interpolation', int())
        self.target_type = kwargs.get('target_type', int())
        from nourish_robot_arm_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from nourish_robot_arm_msgs.msg import Joint
        self.joint = kwargs.get('joint', Joint())

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
        if self.speed != other.speed:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.zone != other.zone:
            return False
        if self.tool != other.tool:
            return False
        if self.work_object != other.work_object:
            return False
        if self.interpolation != other.interpolation:
            return False
        if self.target_type != other.target_type:
            return False
        if self.pose != other.pose:
            return False
        if self.joint != other.joint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Acceleration
            assert \
                isinstance(value, Acceleration), \
                "The 'acceleration' field must be a sub message of type 'Acceleration'"
        self._acceleration = value

    @property
    def zone(self):
        """Message field 'zone'."""
        return self._zone

    @zone.setter
    def zone(self, value):
        if __debug__:
            from nourish_robot_arm_msgs.msg import Zone
            assert \
                isinstance(value, Zone), \
                "The 'zone' field must be a sub message of type 'Zone'"
        self._zone = value

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
    def interpolation(self):
        """Message field 'interpolation'."""
        return self._interpolation

    @interpolation.setter
    def interpolation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interpolation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'interpolation' field must be an unsigned integer in [0, 255]"
        self._interpolation = value

    @property
    def target_type(self):
        """Message field 'target_type'."""
        return self._target_type

    @target_type.setter
    def target_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_type' field must be an unsigned integer in [0, 255]"
        self._target_type = value

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
