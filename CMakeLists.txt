cmake_minimum_required(VERSION 3.6)
project(zhou_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES "C Primer Plus(第六版)/The Ten Chapter/10.7指针和多维数组/zippo2.c")
add_executable(zhou_c ${SOURCE_FILES})