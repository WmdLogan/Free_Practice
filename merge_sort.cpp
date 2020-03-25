//
// Created by logan on 2020/3/24.
//

#include "merge_sort.h"

void merge(int a[], int L, int M, int R) {
    int L_size = M - L;
    int R_size = R - M + 1;
    int Left[L_size];
    int Right[R_size];
    int i, j, k;
    for (i = L; i < M; i++) {
        Left[i - L] = a[i];
    }
    for (i = M; i <= R; i++) {
        Right[i - M] = a[i];
    }
    i = 0;j = 0;k = L;
    while(i < L_size && j < R_size) {
        if(Left[i] < Right[j]){
            a[k] = Left[i];
            k++;
            i++;
        }
        if(Left[i] > Right[j]){
            a[k] = Right[j];
            k++;
            j++;
        }
    }
    while (i < L_size) {
        a[k] = Left[i];
        i++;
        k++;
    }
    while (j < R_size) {
        a[k] = Right[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int L, int R) {
    int M;
    if (L == R) {
        return;
    } else {
        M = (L + R) / 2 + 1;
        merge_sort(a, L, M - 1);
        merge_sort(a, M, R);
        merge(a, L, M, R);
    }

}