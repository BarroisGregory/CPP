cmake_minimum_required( VERSION 3.0 )
project( TP1 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug ) 

add_executable( main.out src/main.cpp src/Fibonacci.cpp )
