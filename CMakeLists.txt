cmake_minimum_required(VERSION 3.6)
project(zhou_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES "c/The Eight Chapter/8.5创建更友好的用户见面/showchar2.c")
add_executable(zhou_c ${SOURCE_FILES})