cmake_minimum_required(VERSION 3.6)
project(PP0506A)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(PP0506A ${SOURCE_FILES})