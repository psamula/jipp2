cmake_minimum_required(VERSION 3.16)

project(Operator)
include_directories(include)
add_executable(Operator src/main.cpp src/Vector.cpp src/Vector.h)
