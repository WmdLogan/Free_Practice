//
// Created by logan on 2020/3/22.
//
#include <iostream>
#include "heap_sort.h"
int main() {
    int add[] = {12, 1, 42, 3, 10, 4, 5, 14, 8, 20};
    int i;
    heap_sort(add, 10);
    for (i = 0; i < 10; i++) {
        std::cout << add[i] << " ";
    }
    return 0;
}
