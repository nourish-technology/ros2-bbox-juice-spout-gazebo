# CMake generated Testfile for 
# Source directory: /home/nikhil/nourish_ws/src/ros2-nourish-common-messages/juice_spout_msgs
# Build directory: /home/nikhil/nourish_ws/build/juice_spout_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_spout_msgs/test_results/juice_spout_msgs/lint_cmake.xunit.xml" "--package-name" "juice_spout_msgs" "--output-file" "/home/nikhil/nourish_ws/build/juice_spout_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_spout_msgs/test_results/juice_spout_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-nourish-common-messages/juice_spout_msgs")
add_test(xmllint "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_spout_msgs/test_results/juice_spout_msgs/xmllint.xunit.xml" "--package-name" "juice_spout_msgs" "--output-file" "/home/nikhil/nourish_ws/build/juice_spout_msgs/ament_xmllint/xmllint.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_spout_msgs/test_results/juice_spout_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-nourish-common-messages/juice_spout_msgs")
subdirs("juice_spout_msgs__py")
