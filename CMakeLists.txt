cmake_minimum_required(VERSION 3.10)
project(stack_overflow)

set(CMAKE_CXX_STANDARD 17)

# Set the output directory for the built executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Release)

add_executable(stack_overflow
    main.cpp
)
