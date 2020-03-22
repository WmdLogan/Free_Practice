#include <iostream>
using namespace std;
void swap(int add[], int i, int j){
    int a = add[i];
    add[i] = add[j];
    add[j] = a;
}

void heapify(int add[], int n, int i) {
    if (i >= n) {
        return;
    }
    int left_child = 2 * i + 1;
    int right_child = 2 * i + 2;
    int max = i;
    if (left_child < n && add[left_child] > add[max]) {
        max = left_child;
    }
    if (right_child < n && add[right_child] > add[max]) {
        max = right_child;
    }
    if (max != i) {
        swap(add, max, i);
        heapify(add, n, max);
    }
}
//建立大根堆
void build_heap(int add[], int n){
    int last_parent = ( n - 2 ) / 2;
    int i;
    for (i = last_parent; i >= 0; i--) {
        heapify(add, n, i);
    }
}

//排序
void heap_sort(int add[], int n){
    build_heap(add, n);
    int i;
    for (i = n - 1; i >= 0; i--) {
        swap(add, i, 0);
        heapify(add, i, 0);
    }
}
int main() {
    int add[] = {12, 1, 42, 3, 10, 4, 5, 14, 8, 20};
    int i = 0;
    heap_sort(add, 10);
    for (i; i < 10; i++) {
        cout << add[i] << " ";
    }
    return 0;
}
//堆排序 先建立大根堆 再出堆 再建立大根堆