cmake_minimum_required(VERSION 3.22)
project(lab7test)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab7test main.cpp
        sampler.cpp
        sampler.h
        disjointSet.cpp
        disjointSet.h)
