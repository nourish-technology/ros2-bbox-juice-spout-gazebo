# generated from rosidl_generator_py/resource/_idl.py.em
# with input from juice_spout_msgs:srv/RunRecipe.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RunRecipe_Request(type):
    """Metaclass of message 'RunRecipe_Request'."""

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
                'juice_spout_msgs.srv.RunRecipe_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__run_recipe__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__run_recipe__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__run_recipe__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__run_recipe__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__run_recipe__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RunRecipe_Request(metaclass=Metaclass_RunRecipe_Request):
    """Message class 'RunRecipe_Request'."""

    __slots__ = [
        '_recipe_name',
    ]

    _fields_and_field_types = {
        'recipe_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.recipe_name = kwargs.get('recipe_name', str())

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
        if self.recipe_name != other.recipe_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def recipe_name(self):
        """Message field 'recipe_name'."""
        return self._recipe_name

    @recipe_name.setter
    def recipe_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'recipe_name' field must be of type 'str'"
        self._recipe_name = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RunRecipe_Response(type):
    """Metaclass of message 'RunRecipe_Response'."""

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
                'juice_spout_msgs.srv.RunRecipe_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__run_recipe__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__run_recipe__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__run_recipe__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__run_recipe__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__run_recipe__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RunRecipe_Response(metaclass=Metaclass_RunRecipe_Response):
    """Message class 'RunRecipe_Response'."""

    __slots__ = [
        '_message',
    ]

    _fields_and_field_types = {
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_RunRecipe(type):
    """Metaclass of service 'RunRecipe'."""

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
                'juice_spout_msgs.srv.RunRecipe')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__run_recipe

            from juice_spout_msgs.srv import _run_recipe
            if _run_recipe.Metaclass_RunRecipe_Request._TYPE_SUPPORT is None:
                _run_recipe.Metaclass_RunRecipe_Request.__import_type_support__()
            if _run_recipe.Metaclass_RunRecipe_Response._TYPE_SUPPORT is None:
                _run_recipe.Metaclass_RunRecipe_Response.__import_type_support__()


class RunRecipe(metaclass=Metaclass_RunRecipe):
    from juice_spout_msgs.srv._run_recipe import RunRecipe_Request as Request
    from juice_spout_msgs.srv._run_recipe import RunRecipe_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
