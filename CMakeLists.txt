cmake_minimum_required(VERSION 3.16)

project(Figures)
include_directories(include)
add_executable(Figures include/Figures.h src/Figures.cpp src/main.cpp src/Rectangles.cpp)
