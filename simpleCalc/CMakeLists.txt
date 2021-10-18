cmake_minimum_required(VERSION 3.16)

project(simpleCalc)

SET(CMAKE_CXX_STANDARD 17)

include_directories(include)

ADD_EXECUTABLE(simpleCalc
        src/main.cpp include/calc.h)