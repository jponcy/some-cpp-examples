cmake_minimum_required(VERSION 3.9)
project(Chrono)

## Update generated file location.
set(EXECUTABLE_OUTPUT_PATH  bin)
set(LIBRARY_OUTPUT_PATH     lib)
# set(CMAKE_BUILD_RPATH rpa)

# file(GLOB_RECURSE source_files src/*)

# ## Sub librairies.
add_subdirectory(app_chrono)
include_directories(${CMAKE_CURRENT_LIST_DIR})
# include_directories(src/app_chrono)
# # link_directories(src/app_chrono)
# # link_directories(lib)

# add_subdirectory(src)
# # link_directories(src)
# # add_library(chrono chrono)

# add_library(app_chrono STATIC src/app_chrono/Chrono.cpp)

add_executable(exe src/main.cpp)
# add_executable(exe ${source_files})

# link_libraries(exe app_chrono)
target_link_libraries(exe LINK_PUBLIC app_chrono)
