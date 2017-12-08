## Find test files.
file(GLOB_RECURSE TEST_SRC *.cpp)

message(STATUS "Files: ${TEST_SRC}")

## Add test executable.
add_executable(exe_test ${TEST_SRC})
target_link_libraries(exe_test chrono)

## Add the test.
add_test(NAME test_modules COMMAND "${EXECUTABLE_OUTPUT_PATH}/exe_test")

## Run test after build.
add_custom_command(
  TARGET exe_test
  COMMENT "Run tests"
  POST_BUILD COMMAND ctest ARGS --output-on-failure
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
