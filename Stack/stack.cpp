//
// Created by logan on 2020/5/25.
//

#include "stack.h"
#include "iostream"
using namespace std;
template<typename T>
Mystack<T>::Mystack(int size) {
    m_iSize = size;
    m_pBuffer = new T[size];
    m_iTop = 0;
}
template<typename T>
Mystack<T>::~Mystack() {
    delete[]m_pBuffer;
}
template<typename T>
bool Mystack<T>::stackEmpty() const {
    return 0 == m_iTop;
}
template<typename T>
bool Mystack<T>::stackFull() const {
    return m_iTop >= m_iSize;
}
template<typename T>
void Mystack<T>::clearStack() {
    m_iTop = 0;
}
template<typename T>
int Mystack<T>::stackLength() const {
    return m_iTop;
}
template<typename T>
bool Mystack<T>::push(T elem) {
    if (!stackFull()) {
        m_pBuffer[m_iTop] = elem;
        m_iTop++;
        return true;
    }
    return false;
}
template<typename T>
bool Mystack<T>::pop(T &elem) {
    if (!stackEmpty()) {
        m_iTop--;
        elem = m_pBuffer[m_iTop];
        return true;
    }
    return false;
}
template<typename T>
void Mystack<T>::stackTraverse() {
    for (int i = m_iTop - 1; i >= 0; i--) {
        cout << m_pBuffer[i] << " ";
    }
}
#define BINARY 2
#define OCTONARY 8
#define HEXADECIMAL 16

int main(){
    char num[] = "0123456789ABCDEF";
    auto *pStack = new Mystack<int>(10);
    int N = 2016;
    int mod = 0;
    while (N != 0) {
        mod = N % HEXADECIMAL;
        pStack->push(mod);
        N /= HEXADECIMAL;
    }
    int e;
//    pStack->stackTraverse();
    for (int i = pStack->stackLength() - 1; i >= 0; i--) {
        pStack->pop(e);
        cout << num[e];
    }
    delete pStack;
   /* if (pStack->stackEmpty()) {
        cout << "stack is empty!" << endl;
    }
    pStack->push('h');
    pStack->push('e');
    pStack->push('l');
    cout << "length is :" << pStack->stackLength() << endl;
    pStack->push('l');
    pStack->push('o');
    pStack->stackTraverse();
    char a;
    pStack->pop(a);
    cout << "\npop is :" << a << endl;
    if (pStack->stackFull()) {
        cout << "stack is full!" << endl;
    }
    pStack->clearStack();
    if (pStack->stackEmpty()) {
        cout << "stack is empty!" << endl;
    }
    delete pStack;*/
    return 0;
}
