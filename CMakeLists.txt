cmake_minimum_required(VERSION 3.14)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

add_executable(leetcode Sort/heap_sort.cpp Sort/insertion_sort.cpp main.cpp Sort/heap_sort.h Sort/insertion_sort.h Sort/merge_sort.cpp Sort/merge_sort.h Sort/bubble_sort.cpp Sort/bubble_sort.h)
add_executable(leetcode_subarray Divide-and-conquer/maximum_subarray.cpp)
add_executable(leetcode_Strassen Divide-and-conquer/square_matrix_multiply.cpp)
add_executable(heap Sort/heap_sort.cpp)
add_executable(quick Sort/quick_sort.cpp)
add_executable(counting Sort/counting_sort.cpp)

#添加包含目录
include_directories(Sort)
include_directories(Divide-and-conquer)
