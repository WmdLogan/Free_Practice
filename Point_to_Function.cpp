//
// Created by logan on 2020/5/25.
//

#include "iostream"
#include "vector"
using namespace std;
const vector<int>* fibon_seq(int size){
    static vector<int> elem;
    for (int i = elem.size(); i < size; ++i) {
        if (i == 0 || i == 1) {
            elem.push_back(1);
        } else {
            elem.push_back(elem[i - 1] + elem[i - 2]);
        }
    }
    return &elem;
}
//回调函数写法
bool seq_elem(int pos,int &elem, const vector<int> *(*seq_ptr)(int)){
    const vector<int> *pseq = seq_ptr(pos);
    if (!pseq) {
        return false;
    } else{
        elem = (*pseq)[pos - 1];
        return true;
    }
}
int main(){
    int elem = 1;
    if (seq_elem(7, elem, fibon_seq)) {
        cout << elem << endl;
    }
    return 0;
}
