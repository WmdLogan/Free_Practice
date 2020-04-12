//
// Created by logan on 2020/4/11.
//

#include "quick_sort.h"
#include "iostream"
using namespace std;

void swap(int add[], int i, int j){
    int a = add[i];
    add[i] = add[j];
    add[j] = a;
}

int Partition(int add[], int l, int r){
    int i = l - 1;
    int m = add[r];
    int j;
    for (j = l; j < r; j++) {
        if (add[j] <= m) {
            i++;
            swap(add, i, j);
        }
    }
    swap(add, ++i, j);
    return i;
}

void Quick_sort(int add[], int l, int r){
    if(l >= r){
        return;
    }
    int m;
    m = Partition(add, l, r);
    Quick_sort(add, l, m - 1);
    Quick_sort(add, m + 1, r);
}

int main(){
    int add[] = {12, 3, 42, 4, 20, 1, 5, 14, 8, 10};
    Quick_sort(add, 0, 9);
//    Partition(add, 0 ,9);
    for (int i = 0; i < 10; i++)
    {
        cout << add[i] << " ";
    }
    return 0;
}