//
// Created by logan on 2020/3/22.
//
#include <iostream>
#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"
#include "fstream"
#include "vector"

using namespace std;

int compare(const void *a, const void *b) {
    int *pa = (int *) a;
    int *pb = (int *) b;
    int num1 = *pa;
    int num2 = *pb;
    return num2 - num1;
/*    if (num1 - num2 > 0) {
        return 1;
    } else {
        return -1;
    }*/
}

template<typename T>
void display(const vector<T> &vec){
    for (int i = 0; i < vec.size();i++) {
        cout << vec[i] << ' ';

    }
    cout << endl;
}
int main() {
    vector<char> vec;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('v');
    display(vec);
    return 0;
    int add[] = {12, 1, 42, 3, 10, 4, 5, 14, 8, 20};
    int i;
    int a = 10;
    int b = 20;
    //int &c; //错误，引用必须初始化
    int &c = a; //一旦初始化后，就不可以更改
    c = b; //这是赋值操作，不是更改引用

    cout << "a = " << &a << endl;
    cout << "b = " << &b << endl;
    cout << "c = " << &c << endl;
    return 0;
    ofstream outfile("D://A.txt", ios_base::app);
    if (!outfile) {
        cerr << "Unable to save data!\n";
    }
//    heap_sort(add, 10);
    insertion_sort(add, 10);
//    merge_sort(add, 0, 9);
//    bubble_sort(add, 10);
//    qsort(add, 10, sizeof(int), compare);
    for (i = 0; i < 10; i++) {
        std::cout << add[i] << " ";
        outfile << add[i] << " ";
    }
    ifstream infile("D://A.txt");
    if (!infile) {
        cerr << "Unable to read data!\n";
    }
    char name;
    string nt, nc;
    while (infile >> name) {
        if (name == '4') {
            infile >> nt >> nc;
            cout << "found " << name << "\nnext next is " << nc << "\nnext is " << nt << endl;
        }
    }
/*    int key = 0;
    int* re = (int*)bsearch(&key, add, 10, sizeof(int), compare);
    std::cout << *re << std::endl;*/

    return 0;
}
