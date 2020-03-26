//
// Created by logan on 2020/3/25.
//
#include "bubble_sort.h"

void bubble_sort(int a[], int n){
    int i, j, lastSwap, tmp;
    for (j=n-1; j>0; j=lastSwap) {
        lastSwap=0;     //每一轮要初始化为0，防止某一轮未发生交换，lastSwap保留上一轮的值进入死循环
        for (i=0; i<j; i++) {
            if (a[i] > a[i+1]) {
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
                //最后一次交换位置的坐标
                lastSwap = i;
            }
        }
    }
}