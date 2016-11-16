cmake_minimum_required(VERSION 3.6)
project(CALC2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(CALC2 ${SOURCE_FILES})