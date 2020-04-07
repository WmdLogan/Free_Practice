//
// Created by logan on 2020/4/1.
//

#include "iostream"

using namespace std;
//求出最大的跨越中点的数组
int* MAX;
int* find_max_mid(int add[], int L, int M, int R){
    int *max;
    max = (int *) malloc(3 * sizeof(int));
    int left_sum = -65535;
    int right_sum = -65535;
    int sum = 0;
    int  j;
    for (j = M; j >= L; j--) {
        sum += add[j];
        if (sum > left_sum) {
            left_sum = sum;
            max[0] = j;
        }
    }
    sum = 0;
    for (j = M + 1; j <= R; j++) {
        sum += add[j];
        if (sum > right_sum) {
            right_sum = sum;
            max[1] = j;
        }
    }
    max[2] = left_sum + right_sum;
    return max;
}
//递归求左子数组、右子数组、跨越中点的数组，并比较大小
int* find_max(int A[], int low, int high){
    int *result;
    int mid;
    int *result_left,*result_right,*result_cross;
    result = (int *)malloc(sizeof(int)*3);
    result_left = (int *)malloc(sizeof(int)*3);
    result_right = (int *)malloc(sizeof(int)*3);
    result_cross = (int *)malloc(sizeof(int)*3);
    if(high == low)
    {
        result[0] = low;
        result[1] = high;
        result[2] = A[low];
        return result;
    }
    else
    {
        mid = (int)((low+high)/2);
        result_left = find_max(A,low,mid);
        result_right = find_max(A,mid+1,high);
        result_cross = find_max_mid(A,low,mid,high);
        if(result_left[2] >= result_right[2]  && result_left[2] >= result_cross[2])
            return result_left;
        else if(result_right[2] >= result_left[2] && result_right[2] >= result_cross[2])
            return result_right;
        else
            return result_cross;
    }
}

int main(){
    int a[] = {18, 20, -7, 12, 13, -3, -25, 20, -3, -16, -23,-5, -22, 15, -4 ,7};
    int *max;
//    int a[] = {13, -3, -25};
    max = find_max(a, 0, 15);
    cout << max[0] << " " << max[1] << " " << max[2];
}