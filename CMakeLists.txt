cmake_minimum_required(VERSION 3.10)
project(stack_overflow)

set(CMAKE_CXX_STANDARD 17)

# Set the output directories for different build types
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/Release)

add_executable(stack_overflow main.cpp)
