# generated from rosidl_generator_py/resource/_idl.py.em
# with input from juice_spout_msgs:action/RunActionRecipe.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RunActionRecipe_Goal(type):
    """Metaclass of message 'RunActionRecipe_Goal'."""

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
                'juice_spout_msgs.action.RunActionRecipe_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RunActionRecipe_Goal(metaclass=Metaclass_RunActionRecipe_Goal):
    """Message class 'RunActionRecipe_Goal'."""

    __slots__ = [
        '_recipe_identifier',
    ]

    _fields_and_field_types = {
        'recipe_identifier': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.recipe_identifier = kwargs.get('recipe_identifier', str())

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
        if self.recipe_identifier != other.recipe_identifier:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def recipe_identifier(self):
        """Message field 'recipe_identifier'."""
        return self._recipe_identifier

    @recipe_identifier.setter
    def recipe_identifier(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'recipe_identifier' field must be of type 'str'"
        self._recipe_identifier = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunActionRecipe_Result(type):
    """Metaclass of message 'RunActionRecipe_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESULT_UNKNOWN': 0,
        'RESULT_SUCCESS': 1,
        'RESULT_ERROR_UNKNOWN': 2,
        'RESULT_ERROR_TIME_OUT': 3,
        'RESULT_ERROR_BECAME_UNHEALTHY': 4,
        'RESULT_ERROR_CUP_REMOVED': 5,
        'RESULT_ERROR_INSUFFICIENT_FILL_LEVEL': 6,
        'RESULT_ERROR_INVALID_RECIPE': 7,
        'RESULT_MANUALLY_STOPPED': 8,
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
                'juice_spout_msgs.action.RunActionRecipe_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESULT_UNKNOWN': cls.__constants['RESULT_UNKNOWN'],
            'RESULT_SUCCESS': cls.__constants['RESULT_SUCCESS'],
            'RESULT_ERROR_UNKNOWN': cls.__constants['RESULT_ERROR_UNKNOWN'],
            'RESULT_ERROR_TIME_OUT': cls.__constants['RESULT_ERROR_TIME_OUT'],
            'RESULT_ERROR_BECAME_UNHEALTHY': cls.__constants['RESULT_ERROR_BECAME_UNHEALTHY'],
            'RESULT_ERROR_CUP_REMOVED': cls.__constants['RESULT_ERROR_CUP_REMOVED'],
            'RESULT_ERROR_INSUFFICIENT_FILL_LEVEL': cls.__constants['RESULT_ERROR_INSUFFICIENT_FILL_LEVEL'],
            'RESULT_ERROR_INVALID_RECIPE': cls.__constants['RESULT_ERROR_INVALID_RECIPE'],
            'RESULT_MANUALLY_STOPPED': cls.__constants['RESULT_MANUALLY_STOPPED'],
        }

    @property
    def RESULT_UNKNOWN(self):
        """Message constant 'RESULT_UNKNOWN'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_UNKNOWN']

    @property
    def RESULT_SUCCESS(self):
        """Message constant 'RESULT_SUCCESS'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_SUCCESS']

    @property
    def RESULT_ERROR_UNKNOWN(self):
        """Message constant 'RESULT_ERROR_UNKNOWN'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_ERROR_UNKNOWN']

    @property
    def RESULT_ERROR_TIME_OUT(self):
        """Message constant 'RESULT_ERROR_TIME_OUT'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_ERROR_TIME_OUT']

    @property
    def RESULT_ERROR_BECAME_UNHEALTHY(self):
        """Message constant 'RESULT_ERROR_BECAME_UNHEALTHY'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_ERROR_BECAME_UNHEALTHY']

    @property
    def RESULT_ERROR_CUP_REMOVED(self):
        """Message constant 'RESULT_ERROR_CUP_REMOVED'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_ERROR_CUP_REMOVED']

    @property
    def RESULT_ERROR_INSUFFICIENT_FILL_LEVEL(self):
        """Message constant 'RESULT_ERROR_INSUFFICIENT_FILL_LEVEL'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_ERROR_INSUFFICIENT_FILL_LEVEL']

    @property
    def RESULT_ERROR_INVALID_RECIPE(self):
        """Message constant 'RESULT_ERROR_INVALID_RECIPE'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_ERROR_INVALID_RECIPE']

    @property
    def RESULT_MANUALLY_STOPPED(self):
        """Message constant 'RESULT_MANUALLY_STOPPED'."""
        return Metaclass_RunActionRecipe_Result.__constants['RESULT_MANUALLY_STOPPED']


class RunActionRecipe_Result(metaclass=Metaclass_RunActionRecipe_Result):
    """
    Message class 'RunActionRecipe_Result'.

    Constants:
      RESULT_UNKNOWN
      RESULT_SUCCESS
      RESULT_ERROR_UNKNOWN
      RESULT_ERROR_TIME_OUT
      RESULT_ERROR_BECAME_UNHEALTHY
      RESULT_ERROR_CUP_REMOVED
      RESULT_ERROR_INSUFFICIENT_FILL_LEVEL
      RESULT_ERROR_INVALID_RECIPE
      RESULT_MANUALLY_STOPPED
    """

    __slots__ = [
        '_final_status',
    ]

    _fields_and_field_types = {
        'final_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.final_status = kwargs.get('final_status', int())

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunActionRecipe_Feedback(type):
    """Metaclass of message 'RunActionRecipe_Feedback'."""

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
                'juice_spout_msgs.action.RunActionRecipe_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RunActionRecipe_Feedback(metaclass=Metaclass_RunActionRecipe_Feedback):
    """Message class 'RunActionRecipe_Feedback'."""

    __slots__ = [
        '_percent_complete',
    ]

    _fields_and_field_types = {
        'percent_complete': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.percent_complete = kwargs.get('percent_complete', float())

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
        if self.percent_complete != other.percent_complete:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def percent_complete(self):
        """Message field 'percent_complete'."""
        return self._percent_complete

    @percent_complete.setter
    def percent_complete(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percent_complete' field must be of type 'float'"
        self._percent_complete = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunActionRecipe_SendGoal_Request(type):
    """Metaclass of message 'RunActionRecipe_SendGoal_Request'."""

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
                'juice_spout_msgs.action.RunActionRecipe_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__send_goal__request

            from juice_spout_msgs.action import RunActionRecipe
            if RunActionRecipe.Goal.__class__._TYPE_SUPPORT is None:
                RunActionRecipe.Goal.__class__.__import_type_support__()

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


class RunActionRecipe_SendGoal_Request(metaclass=Metaclass_RunActionRecipe_SendGoal_Request):
    """Message class 'RunActionRecipe_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'juice_spout_msgs/RunActionRecipe_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['juice_spout_msgs', 'action'], 'RunActionRecipe_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Goal
        self.goal = kwargs.get('goal', RunActionRecipe_Goal())

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
            from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Goal
            assert \
                isinstance(value, RunActionRecipe_Goal), \
                "The 'goal' field must be a sub message of type 'RunActionRecipe_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunActionRecipe_SendGoal_Response(type):
    """Metaclass of message 'RunActionRecipe_SendGoal_Response'."""

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
                'juice_spout_msgs.action.RunActionRecipe_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__send_goal__response

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


class RunActionRecipe_SendGoal_Response(metaclass=Metaclass_RunActionRecipe_SendGoal_Response):
    """Message class 'RunActionRecipe_SendGoal_Response'."""

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


class Metaclass_RunActionRecipe_SendGoal(type):
    """Metaclass of service 'RunActionRecipe_SendGoal'."""

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
                'juice_spout_msgs.action.RunActionRecipe_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__run_action_recipe__send_goal

            from juice_spout_msgs.action import _run_action_recipe
            if _run_action_recipe.Metaclass_RunActionRecipe_SendGoal_Request._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_SendGoal_Request.__import_type_support__()
            if _run_action_recipe.Metaclass_RunActionRecipe_SendGoal_Response._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_SendGoal_Response.__import_type_support__()


class RunActionRecipe_SendGoal(metaclass=Metaclass_RunActionRecipe_SendGoal):
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_SendGoal_Request as Request
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunActionRecipe_GetResult_Request(type):
    """Metaclass of message 'RunActionRecipe_GetResult_Request'."""

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
                'juice_spout_msgs.action.RunActionRecipe_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__get_result__request

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


class RunActionRecipe_GetResult_Request(metaclass=Metaclass_RunActionRecipe_GetResult_Request):
    """Message class 'RunActionRecipe_GetResult_Request'."""

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


class Metaclass_RunActionRecipe_GetResult_Response(type):
    """Metaclass of message 'RunActionRecipe_GetResult_Response'."""

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
                'juice_spout_msgs.action.RunActionRecipe_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__get_result__response

            from juice_spout_msgs.action import RunActionRecipe
            if RunActionRecipe.Result.__class__._TYPE_SUPPORT is None:
                RunActionRecipe.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RunActionRecipe_GetResult_Response(metaclass=Metaclass_RunActionRecipe_GetResult_Response):
    """Message class 'RunActionRecipe_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'juice_spout_msgs/RunActionRecipe_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['juice_spout_msgs', 'action'], 'RunActionRecipe_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Result
        self.result = kwargs.get('result', RunActionRecipe_Result())

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
            from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Result
            assert \
                isinstance(value, RunActionRecipe_Result), \
                "The 'result' field must be a sub message of type 'RunActionRecipe_Result'"
        self._result = value


class Metaclass_RunActionRecipe_GetResult(type):
    """Metaclass of service 'RunActionRecipe_GetResult'."""

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
                'juice_spout_msgs.action.RunActionRecipe_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__run_action_recipe__get_result

            from juice_spout_msgs.action import _run_action_recipe
            if _run_action_recipe.Metaclass_RunActionRecipe_GetResult_Request._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_GetResult_Request.__import_type_support__()
            if _run_action_recipe.Metaclass_RunActionRecipe_GetResult_Response._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_GetResult_Response.__import_type_support__()


class RunActionRecipe_GetResult(metaclass=Metaclass_RunActionRecipe_GetResult):
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_GetResult_Request as Request
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunActionRecipe_FeedbackMessage(type):
    """Metaclass of message 'RunActionRecipe_FeedbackMessage'."""

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
                'juice_spout_msgs.action.RunActionRecipe_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__run_action_recipe__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__run_action_recipe__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__run_action_recipe__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__run_action_recipe__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__run_action_recipe__feedback_message

            from juice_spout_msgs.action import RunActionRecipe
            if RunActionRecipe.Feedback.__class__._TYPE_SUPPORT is None:
                RunActionRecipe.Feedback.__class__.__import_type_support__()

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


class RunActionRecipe_FeedbackMessage(metaclass=Metaclass_RunActionRecipe_FeedbackMessage):
    """Message class 'RunActionRecipe_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'juice_spout_msgs/RunActionRecipe_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['juice_spout_msgs', 'action'], 'RunActionRecipe_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Feedback
        self.feedback = kwargs.get('feedback', RunActionRecipe_Feedback())

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
            from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Feedback
            assert \
                isinstance(value, RunActionRecipe_Feedback), \
                "The 'feedback' field must be a sub message of type 'RunActionRecipe_Feedback'"
        self._feedback = value


class Metaclass_RunActionRecipe(type):
    """Metaclass of action 'RunActionRecipe'."""

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
                'juice_spout_msgs.action.RunActionRecipe')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__run_action_recipe

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from juice_spout_msgs.action import _run_action_recipe
            if _run_action_recipe.Metaclass_RunActionRecipe_SendGoal._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_SendGoal.__import_type_support__()
            if _run_action_recipe.Metaclass_RunActionRecipe_GetResult._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_GetResult.__import_type_support__()
            if _run_action_recipe.Metaclass_RunActionRecipe_FeedbackMessage._TYPE_SUPPORT is None:
                _run_action_recipe.Metaclass_RunActionRecipe_FeedbackMessage.__import_type_support__()


class RunActionRecipe(metaclass=Metaclass_RunActionRecipe):

    # The goal message defined in the action definition.
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Goal as Goal
    # The result message defined in the action definition.
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Result as Result
    # The feedback message defined in the action definition.
    from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from juice_spout_msgs.action._run_action_recipe import RunActionRecipe_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
