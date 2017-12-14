cmake_minimum_required(VERSION 3.9)
project(Chrono)

include(CTest)

## Update generated file location.
set(EXECUTABLE_OUTPUT_PATH  ${CMAKE_HOME_DIRECTORY}/bin)
set(LIBRARY_OUTPUT_PATH     ${CMAKE_HOME_DIRECTORY}/lib)

## Tests.
enable_testing()

## Headers files.
include_directories(include)

## Sub librairies.
add_subdirectory(src) # Provide library: chrono.

## Main executable.
add_executable(exe src/main.cpp)
target_link_libraries(exe chrono friend)

## Tests
add_test(can_execute ${EXECUTABLE_OUTPUT_PATH}/exe)
add_subdirectory(test)
