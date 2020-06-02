//
// Created by logan on 2020/3/22.
//
#include "insertion_sort.h"
#include <iostream>

using namespace std;
void insertion_sort(int a[], int n){
    int i, key;
    for (i = 1; i < n; i++) {
        int j = i - 1;
        key = a[i];
        while (a[j] > key && j >= 0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main(){
    int a[] = {4, 12, 2, 6, 123, 56};
    insertion_sort(a, 6);
    for (int i = 0; i < 6; i++) {
        cout << a[i] << endl;
    }
}