include_directories(${CMAKE_SOURCE_DIR}/firstLib/include)
add_executable(matrixApp main.cpp)
target_link_libraries(matrixApp matrixLib)