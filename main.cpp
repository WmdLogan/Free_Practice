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
#include "algorithm"
#include <functional>

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
void display(const vector<T> &vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';

    }
    cout << endl;
}

vector<int> filter(const vector<int> &vec, int val, less<int> &lt) {
    vector<int> nvec;
    //bind2nd(lt, val)将val绑定到less的第二个参数上
    vector<int>::const_iterator iterator = vec.begin();
    while ((iterator = find_if(iterator, vec.end(), bind1st(lt, val))) != vec.end()) {
        nvec.push_back(*iterator);
        iterator++;
    }
    return nvec;
}

//filter泛型化
template<typename InputIterator, typename OutputIterator, typename ElemType, typename Comp>
OutputIterator filter(InputIterator first, InputIterator last, OutputIterator at,
                      const ElemType &val, Comp pred) {
    while ((first = find_if(first, last, bind2nd(pred, val))) != last) {
        cout << "found value: " << *first << endl;
        *at++ = *first++;
    }
    return at;
}

vector<int> sub_vec(const vector<int> &vec, int val) {
    vector<int> local_vec(vec);
    sort(local_vec.begin(), local_vec.end());
    vector<int>::iterator iter =
            find_if(local_vec.begin(), local_vec.end(), bind2nd(greater<int>(), val));
    local_vec.erase(iter, local_vec.end());
    return local_vec;
}

//sub_vec泛型化
template<typename InputIterator, typename OutputIterator, typename ElemType, typename Comp>
OutputIterator sub_vec(InputIterator first, InputIterator last, OutputIterator at,
                      const ElemType &val, Comp pred) {
    int size = 0;
    while ((first = find_if(first, last, bind2nd(pred, val))) != last) {
        cout << "found value: " << *first << endl;
        size++;
        *at++ = *first++;
    }
    sort(at - size, at, greater<int>());

    return at;
}

int main() {
    int a1[7] = {28, 55, 4, 9, 5, 6, 89};
    int a2[8];
    vector<int> vec(a1, a1 + 7);
    vector<int> Output(8);
    sub_vec(vec.begin(), vec.end(), a2, 8, greater<int>());
    cout << "sub_vec : " << endl;
    display(Output);
//    less<int> less;
//    sort(vec.begin(), vec.end(), greater<int>());
//    vector<int>::iterator it = find(vec.begin(), vec.begin() + 7, 2);
//    vec.erase(it,it+3);
//    vector<int> v = filter(vec, 6, less);
    filter(vec.begin(), vec.end(), Output.begin(), 7, less<int>());
    display(Output);
    filter(vec.begin(), vec.end(), a2, 7, greater<int>());
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
