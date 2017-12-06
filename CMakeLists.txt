cmake_minimum_required(VERSION 3.9)
project(Chrono)

## Update generated file location.
set(EXECUTABLE_OUTPUT_PATH  bin)
set(LIBRARY_OUTPUT_PATH     lib)
set(CMAKE_BUILD_RPATH rpa)

# add_executable(exe src/main.cpp)

## Sub librairies.
add_subdirectory(src)
link_directories(src)

add_executable(exe src/main.cpp)
