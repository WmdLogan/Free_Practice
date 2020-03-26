cmake_minimum_required(VERSION 3.14)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

add_executable(leetcode heap_sort.cpp insertion_sort.cpp main.cpp heap_sort.h insertion_sort.h merge_sort.cpp merge_sort.h bubble_sort.cpp bubble_sort.h)