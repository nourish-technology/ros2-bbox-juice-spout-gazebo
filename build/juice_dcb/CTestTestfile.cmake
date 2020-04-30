# CMake generated Testfile for 
# Source directory: /home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb
# Build directory: /home/nikhil/nourish_ws/build/juice_dcb
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/copyright.xunit.xml" "--package-name" "juice_dcb" "--output-file" "/home/nikhil/nourish_ws/build/juice_dcb/ament_copyright/copyright.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_copyright" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb")
add_test(cppcheck "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/cppcheck.xunit.xml" "--package-name" "juice_dcb" "--output-file" "/home/nikhil/nourish_ws/build/juice_dcb/ament_cppcheck/cppcheck.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_cppcheck" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/cppcheck.xunit.xml" "--include_dirs" "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb")
add_test(cpplint "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/cpplint.xunit.xml" "--package-name" "juice_dcb" "--output-file" "/home/nikhil/nourish_ws/build/juice_dcb/ament_cpplint/cpplint.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_cpplint" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb")
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/lint_cmake.xunit.xml" "--package-name" "juice_dcb" "--output-file" "/home/nikhil/nourish_ws/build/juice_dcb/ament_lint_cmake/lint_cmake.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_lint_cmake" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb")
add_test(uncrustify "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/uncrustify.xunit.xml" "--package-name" "juice_dcb" "--output-file" "/home/nikhil/nourish_ws/build/juice_dcb/ament_uncrustify/uncrustify.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_uncrustify" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb")
add_test(xmllint "/usr/bin/python3" "-u" "/home/nikhil/ros2_dashing/ros2-linux/share/ament_cmake_test/cmake/run_test.py" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/xmllint.xunit.xml" "--package-name" "juice_dcb" "--output-file" "/home/nikhil/nourish_ws/build/juice_dcb/ament_xmllint/xmllint.txt" "--command" "/home/nikhil/ros2_dashing/ros2-linux/bin/ament_xmllint" "--xunit-file" "/home/nikhil/nourish_ws/build/juice_dcb/test_results/juice_dcb/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/nikhil/nourish_ws/src/ros2-bbox-juice-machine/juice_dcb")
