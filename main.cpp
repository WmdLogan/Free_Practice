//
// Created by logan on 2020/3/22.
//
#include <iostream>
#include "Sort/heap_sort.h"
#include "Sort/insertion_sort.h"
#include "Sort/merge_sort.h"
#include "Sort/bubble_sort.h"

int compare(const void *a, const void *b){
    int *pa = (int *) a;
    int *pb = (int *) b;
    int num1 = *pa;
    int num2 = *pb;
    return num2 - num1;
/*    if (num1 - num2 > 0) {
        return 1;
    } else {
        return -1;
    }*/
}
int main() {
    int add[] = {12, 1, 42, 3, 10, 4, 5, 14, 8, 20};
   // int add[] = {1, 3, 10, 12, 42, 4, 5, 8, 14, 20};
    int i;
//    heap_sort(add, 10);
//    insertion_sort(add, 10);
//    merge_sort(add, 0, 9);
//    bubble_sort(add, 10);
    qsort(add, 10, sizeof(int), compare);
    for (i = 0; i < 10; i++) {
        std::cout << add[i] << " ";
    }
/*    int key = 0;
    int* re = (int*)bsearch(&key, add, 10, sizeof(int), compare);
    std::cout << *re << std::endl;*/
    return 0;
}
