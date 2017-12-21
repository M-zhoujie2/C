cmake_minimum_required(VERSION 3.6)
project(zhou_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES "c/The Nine Chapter/9.4编译多源代码文件的程序/usehotel.c")
add_executable(zhou_c ${SOURCE_FILES})