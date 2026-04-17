cmake_minimum_required(VERSION 3.22)
project(RBTree)

set(CMAKE_CXX_STANDARD 17)

include_directories($ENV{HOME}/Programming/include)
#include_directories($ENV{HOME}/Programming/include)

add_executable(RBTree main.cpp redBlackTree.h)
