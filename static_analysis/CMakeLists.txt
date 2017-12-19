cmake_minimum_required (VERSION 3.0)

project(cppcheck_analysis)

# Add a custom CMake Modules directory
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# find the cppcheck binary


# static analysis. Should be before adding subprojects


# Add sub directories
add_subdirectory(project1)
add_subdirectory(project2)



include(${CMAKE_MODULE_PATH}/cppcheck.cmake)
include(${CMAKE_MODULE_PATH}/clang-format.cmake)