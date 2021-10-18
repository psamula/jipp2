cmake_minimum_required(VERSION 3.16)

project(firstLib)

SET(CMAKE_CXX_STANDARD 17)

include_directories(include)

ADD_LIBRARY(firstLib
        src/lib.cpp include/lib.h)