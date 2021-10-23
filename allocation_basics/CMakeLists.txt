cmake_minimum_required(VERSION 3.16)

project(allocation_basics)

set(CMAKE_CXX_STANDARD 17)

add_executable(allocation_basics main.cpp ../simpleCalc/src/main.cpp ../firstLib/src/lib.cpp ../firstLib/include/lib.h ../firstLibCall/main.cpp)