cmake_minimum_required(VERSION 3.1)
project(main)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


find_package(OpenCV REQUIRED)
add_executable(main main.cpp)
target_link_libraries(main ${OpenCV_LIBS})