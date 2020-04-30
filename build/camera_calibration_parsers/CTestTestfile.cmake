# CMake generated Testfile for 
# Source directory: /home/nikhil/nourish_ws/src/ros-perception/image_common/camera_calibration_parsers
# Build directory: /home/nikhil/nourish_ws/build/camera_calibration_parsers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cpplint "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/cpplint.xunit.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/ament_cpplint/cpplint.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_cpplint" "--xunit-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/camera_calibration_parsers")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/lint_cmake.xunit.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/camera_calibration_parsers")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/uncrustify.xunit.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/ament_uncrustify/uncrustify.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_uncrustify" "--xunit-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/camera_calibration_parsers")
add_test(camera_calibration_parsers-parse_ini "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_ini.gtest.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/ament_cmake_gtest/camera_calibration_parsers-parse_ini.txt" "--command" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/camera_calibration_parsers-parse_ini" "--gtest_output=xml:/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_ini.gtest.xml")
set_tests_properties(camera_calibration_parsers-parse_ini PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/camera_calibration_parsers/camera_calibration_parsers-parse_ini" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/camera_calibration_parsers")
add_test(camera_calibration_parsers-parse_yml "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_yml.gtest.xml" "--package-name" "camera_calibration_parsers" "--output-file" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/ament_cmake_gtest/camera_calibration_parsers-parse_yml.txt" "--command" "/home/nikhil/nourish_ws/build/camera_calibration_parsers/camera_calibration_parsers-parse_yml" "--gtest_output=xml:/home/nikhil/nourish_ws/build/camera_calibration_parsers/test_results/camera_calibration_parsers/camera_calibration_parsers-parse_yml.gtest.xml")
set_tests_properties(camera_calibration_parsers-parse_yml PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/nikhil/nourish_ws/build/camera_calibration_parsers/camera_calibration_parsers-parse_yml" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros-perception/image_common/camera_calibration_parsers")
subdirs("gtest")
