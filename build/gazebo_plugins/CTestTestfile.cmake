# CMake generated Testfile for 
# Source directory: /home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins
# Build directory: /home/nikhil/nourish_ws/build/gazebo_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/copyright.xunit.xml" "--package-name" "gazebo_plugins" "--output-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/ament_copyright/copyright.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_copyright" "--xunit-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins")
add_test(cppcheck "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/cppcheck.xunit.xml" "--package-name" "gazebo_plugins" "--output-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/ament_cppcheck/cppcheck.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_cppcheck" "--xunit-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/cppcheck.xunit.xml" "--include_dirs" "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins")
add_test(cpplint "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/cpplint.xunit.xml" "--package-name" "gazebo_plugins" "--output-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/ament_cpplint/cpplint.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_cpplint" "--xunit-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/lint_cmake.xunit.xml" "--package-name" "gazebo_plugins" "--output-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/uncrustify.xunit.xml" "--package-name" "gazebo_plugins" "--output-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/ament_uncrustify/uncrustify.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_uncrustify" "--xunit-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins")
add_test(xmllint "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/xmllint.xunit.xml" "--package-name" "gazebo_plugins" "--output-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/ament_xmllint/xmllint.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/nikhil/nourish_ws/build/gazebo_plugins/test_results/gazebo_plugins/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-simulation/gazebo_ros_pkgs/gazebo_plugins")
subdirs("test")