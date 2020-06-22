cmake_minimum_required(VERSION 3.14)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)


add_executable(leetcode  Sort/insertion_sort.cpp main.cpp  Sort/insertion_sort.h Sort/merge_sort.cpp Sort/merge_sort.h Sort/bubble_sort.cpp Sort/bubble_sort.h)
add_executable(subarray Divide-and-conquer/maximum_subarray.cpp)
add_executable(Strassen Divide-and-conquer/square_matrix_multiply.cpp)
add_executable(heap Sort/heap_sort.cpp)
add_executable(quick Sort/quick_sort.cpp)
add_executable(counting Sort/counting_sort.cpp)
add_executable(bucket Sort/bucket_sort.cpp)
add_executable(tree_walk Tree/tree_walk.cpp)
add_executable(List #[[List/List.cpp]] List/Node.cpp List/LinkList.cpp List/LinkList.h)
add_executable(PtF Point_to_Function.cpp)
add_executable(stack Stack/stack.cpp)
add_executable(queue Queue/queue.cpp)
add_executable(tree_array Tree/tree_array.cpp)
add_executable(tree_list Tree/tree_list.cpp)
add_executable(iostream_it iostream_it.cpp)
add_executable(Libmat inherit/LibMat.cpp)
add_executable(graph Graph/CMap.cpp)

#添加包含目录
include_directories(Sort)
include_directories(Divide-and-conquer)
include_directories(Tree)
