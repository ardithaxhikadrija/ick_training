cmake_minimum_required(VERSION 3.5)
project(ICK-Training)

# General
###############################################################################

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BUILD_TYPE Debug)

# Find required sub-directories
###############################################################################

add_subdirectory(chapter_0)
add_subdirectory(chapter_1)