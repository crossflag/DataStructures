# cmake_minimum_required(VERSION <specify CMake version here>)
project(Q1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Q1
        main.cpp
        myStack.h)
