//计数排序
// Created by logan on 2020/4/13.
//
#include "iostream"

using namespace std;
int* counting_sort(const int A[], int n){
    int i, j;
    int max = A[0];
    //得出A中最大的值
    for (i = 0; i < n; i++) {
        if (max <= A[i]) {
            max = A[i];
        }
    }
    //得到A中每个元素的计数数组C
    int* C, * B;
    C = (int *) malloc(sizeof(int) * (max + 1));
    B = (int *) malloc(sizeof(int) * (n + 1));
    for (j = 0; j <= max; j++) {
        C[j] = 0;
    }
    for (i = 0; i < n; i++) {
        C[A[i]]++;
    }
    for (i = 1; i <= max; i++) {
        C[i] += C[i - 1];
    }
        //排序
//    for (i = n - 1; i >= 0; i--) {
    for (i = 0; i < n; i++) {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }
    return B;
}

int main(){
    int A[] = {2, 5, 3, 0, 2, 3, 0, 3};
    int* B;
    B = counting_sort(A, 8);
    for (int i = 1; i < 9; i++) {
        cout << B[i] << " ";
    }
    return 0;
}