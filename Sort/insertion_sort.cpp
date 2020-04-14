//
// Created by logan on 2020/3/22.
//
#include "insertion_sort.h"

void insertion_sort(int a[], int n){
    int i, key;
    for (i = 1; i <= n; i++) {
        key = a[i];
        while (a[i - 1] > key && i != 0) {
            a[i] = a[i - 1];
            i--;
        }
        a[i] = key;
    }
}
