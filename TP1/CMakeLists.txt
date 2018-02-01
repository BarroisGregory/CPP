cmake_minimum_required( VERSION 3.0 )
project( TP1 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )  
add_executable( tp1.out src/main.cpp src/Fibonacci.cpp src/Vecteur3.cpp)

# tests unitaires
find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( tp1_test.out src/main_test.cpp src/Fibonacci.cpp src/Fibonacci_test.cpp src/Vecteur3.cpp src/Vecteur3_test.cpp)
target_link_libraries( tp1_test.out ${PKG_LIBRARIES} )
