cmake_minimum_required(VERSION 3.5)
project(dcb_plugin)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  # we dont use add_compile_options with pedantic in message packages
  # because the Python C extensions dont comply with it
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")
endif()

find_package(ament_cmake REQUIRED)
find_package(camera_info_manager REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(gazebo_msgs REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(image_transport REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)


# generate messages
#find_package(dolly_plugin REQUIRED)
# set(srv_files
#   "msgs/srv/Attach.srv"
# )
# rosidl_generate_interfaces(${PROJECT_NAME} ${srv_files})
# ament_export_dependencies(rosidl_default_runtime)

#find_package(ignition REQUIRED)

include_directories(
  include
  ${gazebo_dev_INCLUDE_DIRS}
  ${gazebo_ros_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS}
  ${image_transport_INCLUDE_DIRS}
  ${cv_bridge_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS}
  ${sensor_msgs_INCLUDE_DIRS}
  ${tf2_ros_INCLUDE_DIRS}
  ${tf2_INCLUDE_DIRS}
)
link_directories(${gazebo_dev_LIBRARY_DIRS})

# ori_diff_drive
#add_library(ori_diff_drive SHARED
#  src/ori_diff_drive.cpp
#)
#ament_target_dependencies(ori_diff_drive
#  "gazebo_dev"
#  "gazebo_ros"
#  "geometry_msgs"
#  "nav_msgs"
#  "rclcpp"
#  "tf2"
#  "tf2_geometry_msgs"
#  "tf2_ros"
#)
#ament_export_libraries(ori_diff_drive)
#
## ori_color
#add_library(ori_color SHARED
#  src/ori_color.cpp
#)
#ament_target_dependencies(ori_color
#  "gazebo_dev"
#  "gazebo_ros"
#  "geometry_msgs"
#  "nav_msgs"
#  "rclcpp"
#  "tf2"
#  "tf2_geometry_msgs"
#  "tf2_ros"
#)
#ament_export_libraries(ori_diff_drive)
#
## ori_attach
#add_library(ori_attach SHARED
#  src/ori_attach.cpp
#)
#ament_target_dependencies(ori_attach
#  "gazebo_dev"
#  "gazebo_ros"
#  "geometry_msgs"
#  "nav_msgs"
#  "rclcpp"
#  "tf2"
#  "tf2_geometry_msgs"
#  "tf2_ros"
#  "dolly_msgs"
#)
#ament_export_libraries(ori_attach)
#
ament_export_include_directories(include)
ament_export_dependencies(rclcpp)
ament_export_dependencies(gazebo_dev)
ament_export_dependencies(gazebo_msgs)
ament_export_dependencies(gazebo_ros)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_environment_hooks("${CMAKE_CURRENT_SOURCE_DIR}/env-hooks/gazebo_plugins.sh.in")

ament_package()

install(DIRECTORY include/
        DESTINATION include)

install(TARGETS
	#    ori_diff_drive
	#    ori_color
	#    ori_attach
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin)
