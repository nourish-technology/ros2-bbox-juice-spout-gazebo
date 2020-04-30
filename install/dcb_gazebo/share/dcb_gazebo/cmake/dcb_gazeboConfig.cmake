# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dcb_gazebo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dcb_gazebo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dcb_gazebo_FOUND FALSE)
  elseif(NOT dcb_gazebo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dcb_gazebo_FOUND FALSE)
  endif()
  return()
endif()
set(_dcb_gazebo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dcb_gazebo_FIND_QUIETLY)
  message(STATUS "Found dcb_gazebo: 0.1.1 (${dcb_gazebo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dcb_gazebo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dcb_gazebo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${dcb_gazebo_DIR}/${_extra}")
endforeach()
