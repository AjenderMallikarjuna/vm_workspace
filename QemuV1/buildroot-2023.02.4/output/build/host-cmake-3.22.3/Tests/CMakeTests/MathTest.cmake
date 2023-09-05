# Execute each test listed in:
#
set(scriptname "/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/host-cmake-3.22.3/Tests/CMakeTests/MathTestScript.cmake")
set(number_of_tests_expected 4)

include("/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/host-cmake-3.22.3/Tests/CMakeTests/ExecuteScriptTests.cmake")
execute_all_script_tests(${scriptname} number_of_tests_executed)

# And verify that number_of_tests_executed is at least as many as we know
# about as of this writing...
#
message(STATUS "scriptname='${scriptname}'")
message(STATUS "number_of_tests_executed='${number_of_tests_executed}'")
message(STATUS "number_of_tests_expected='${number_of_tests_expected}'")

if(number_of_tests_executed LESS number_of_tests_expected)
  message(FATAL_ERROR "error: some test cases were skipped")
endif()
