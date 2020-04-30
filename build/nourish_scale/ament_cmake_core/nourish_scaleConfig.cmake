# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nourish_scale_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nourish_scale_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nourish_scale_FOUND FALSE)
  elseif(NOT nourish_scale_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nourish_scale_FOUND FALSE)
  endif()
  return()
endif()
set(_nourish_scale_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nourish_scale_FIND_QUIETLY)
  message(STATUS "Found nourish_scale: 0.0.0 (${nourish_scale_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nourish_scale' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nourish_scale_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${nourish_scale_DIR}/${_extra}")
endforeach()
