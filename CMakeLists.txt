cmake_minimum_required(VERSION 3.9)
project(Chrono)

set(SHOULD_TEST NOT(CMAKE_BUILD_TYPE STREQUAL "Release"))

## Update generated files location.
set(EXECUTABLE_OUTPUT_PATH  "${CMAKE_HOME_DIRECTORY}/bin")
set(LIBRARY_OUTPUT_PATH     "${CMAKE_HOME_DIRECTORY}/lib")

## Enable tests.
if(SHOULD_TEST)
  enable_testing()
endif(SHOULD_TEST)

## Include headers.
include_directories(includes)

## Sub librairies.
add_subdirectory(src) # Declare library: chrono.

## Main executable.
add_executable(exe src/main.cpp)
target_link_libraries(exe chrono)

## Tests.
# if(SHOULD_TEST)
  ## Add real tests.
  add_subdirectory(test)
# endif(SHOULD_TEST)
