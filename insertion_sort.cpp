//
// Created by logan on 2020/3/22.
//
#include "iostream"
void insertion_sort(int a[], int n){
    int i, j, v;
    for (i = 1; i < n; i++) {
        for (j = i - 1, v = a[i]; j >= 0 && a[j] > v; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = v;
    }
}
