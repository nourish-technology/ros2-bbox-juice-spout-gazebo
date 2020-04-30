# CMake generated Testfile for 
# Source directory: /home/nikhil/nourish_ws/src/ros-perception/vision_opencv/image_geometry/test
# Build directory: /home/nikhil/nourish_ws/build/image_geometry/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(image_geometry-utest "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml" "--package-name" "image_geometry" "--output-file" "/home/nikhil/nourish_ws/build/image_geometry/ament_cmake_gtest/image_geometry-utest.txt" "--append-env" "LD_LIBRARY_PATH=/home/nikhil/nourish_ws/build/image_geometry" "--command" "/home/nikhil/nourish_ws/build/image_geometry/test/image_geometry-utest" "--gtest_output=xml:/home/nikhil/nourish_ws/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml")
set_tests_properties(image_geometry-utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/image_geometry/test/image_geometry-utest" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/vision_opencv/image_geometry")
subdirs("../gtest")
