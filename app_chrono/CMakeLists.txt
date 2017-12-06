set(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/lib)

include_directories(${CMAKE_CURRENT_LIST_DIR})
# include_directories(${CMAKE_CURRENT_LIST_DIR})
# link_directories(${CMAKE_CURRENT_LIST_DIR})

add_library(appschrono STATIC Chrono.cpp)
# export(LIBRARY appp_chrono)
