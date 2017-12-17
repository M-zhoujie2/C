cmake_minimum_required(VERSION 3.6)
project(zhou_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES "c/The Senver Chapter/7.6循环辅助：continue和break/skippart.c")
add_executable(zhou_c ${SOURCE_FILES})