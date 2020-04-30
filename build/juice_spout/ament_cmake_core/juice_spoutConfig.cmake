# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_juice_spout_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED juice_spout_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(juice_spout_FOUND FALSE)
  elseif(NOT juice_spout_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(juice_spout_FOUND FALSE)
  endif()
  return()
endif()
set(_juice_spout_CONFIG_INCLUDED TRUE)

# output package information
if(NOT juice_spout_FIND_QUIETLY)
  message(STATUS "Found juice_spout: 0.0.0 (${juice_spout_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'juice_spout' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(juice_spout_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${juice_spout_DIR}/${_extra}")
endforeach()