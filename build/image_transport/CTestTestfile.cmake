# CMake generated Testfile for 
# Source directory: /home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport
# Build directory: /home/nikhil/nourish_ws/build/image_transport
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(image_transport-camera_common "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-camera_common.gtest.xml" "--package-name" "image_transport" "--output-file" "/home/nikhil/nourish_ws/build/image_transport/ament_cmake_gtest/image_transport-camera_common.txt" "--command" "/home/nikhil/nourish_ws/build/image_transport/image_transport-camera_common" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-camera_common.gtest.xml")
set_tests_properties(image_transport-camera_common PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_transport/image_transport-camera_common" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport")
add_test(image_transport-publisher "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-publisher.gtest.xml" "--package-name" "image_transport" "--output-file" "/home/nikhil/nourish_ws/build/image_transport/ament_cmake_gtest/image_transport-publisher.txt" "--command" "/home/nikhil/nourish_ws/build/image_transport/image_transport-publisher" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-publisher.gtest.xml")
set_tests_properties(image_transport-publisher PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_transport/image_transport-publisher" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport")
add_test(image_transport-subscriber "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-subscriber.gtest.xml" "--package-name" "image_transport" "--output-file" "/home/nikhil/nourish_ws/build/image_transport/ament_cmake_gtest/image_transport-subscriber.txt" "--command" "/home/nikhil/nourish_ws/build/image_transport/image_transport-subscriber" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-subscriber.gtest.xml")
set_tests_properties(image_transport-subscriber PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_transport/image_transport-subscriber" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport")
add_test(image_transport-message_passing "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-message_passing.gtest.xml" "--package-name" "image_transport" "--output-file" "/home/nikhil/nourish_ws/build/image_transport/ament_cmake_gtest/image_transport-message_passing.txt" "--command" "/home/nikhil/nourish_ws/build/image_transport/image_transport-message_passing" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-message_passing.gtest.xml")
set_tests_properties(image_transport-message_passing PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_transport/image_transport-message_passing" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport")
add_test(image_transport-remapping "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-remapping.gtest.xml" "--package-name" "image_transport" "--output-file" "/home/nikhil/nourish_ws/build/image_transport/ament_cmake_gtest/image_transport-remapping.txt" "--command" "/home/nikhil/nourish_ws/build/image_transport/image_transport-remapping" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-remapping.gtest.xml")
set_tests_properties(image_transport-remapping PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_transport/image_transport-remapping" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport")
add_test(image_transport-single_subscriber_publisher "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-single_subscriber_publisher.gtest.xml" "--package-name" "image_transport" "--output-file" "/home/nikhil/nourish_ws/build/image_transport/ament_cmake_gtest/image_transport-single_subscriber_publisher.txt" "--command" "/home/nikhil/nourish_ws/build/image_transport/image_transport-single_subscriber_publisher" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_transport/test_results/image_transport/image_transport-single_subscriber_publisher.gtest.xml")
set_tests_properties(image_transport-single_subscriber_publisher PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_transport/image_transport-single_subscriber_publisher" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/image_transport")
subdirs("gtest")
