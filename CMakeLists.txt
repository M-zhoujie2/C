cmake_minimum_required(VERSION 3.6)
project(zhou_c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES "Book/C Primer Plus(第六版)/The Eleven Chapter/11.9把字符串转换成数字/strcnvt.c")
add_executable(zhou_c ${SOURCE_FILES})