cmake_minimum_required(VERSION 3.17)
project(SortingAlgos)

set(CMAKE_CXX_STANDARD 14)

add_executable(SortingAlgos main.cpp)
add_executable(buble bubble.cpp)
add_executable(selection selection.cpp)
add_executable(insertion insertion.cpp)
add_executable(merge merge.cpp)
add_executable(linearSearch linearSearch.cpp)
add_executable(binarySearch binarySearch.cpp)
add_executable(quick quick.cpp)
add_executable(interpolationSearch interpolationSearch.cpp)