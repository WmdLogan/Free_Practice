//
// Created by logan on 2020/5/21.
//

#include "List.h"
#include "iostream"

using namespace std;

List::List(int size) {
    m_iSize = size;
    m_pList = new int[m_iSize];//线性表容量
    m_iLength = 0;//线性表当前长度
}

List::~List() {
    delete[]m_pList;//如果只delete m_pList那么只释放m_pList[0],会造成内存泄露
    m_pList = NULL;
}

void List::ClearList() {
    m_iLength = 0;
}

bool List::ListEmpty() {
    return m_iLength == 0;
}

int List::ListLength() {
    return m_iLength;
}

bool List::GetElem(int i, Elem *elem) {
    if (i < 0 || i >= m_iSize) {
        return false;
    }
    *elem = m_pList[i];
    return true;
}

int List::LocateElem(const Elem *elem) {
    for (int i = 0; i < m_iLength; ++i) {
        if (m_pList[i] == *elem) {
            return i;
        }
    }
    return -1;
}

bool List::PriorElem(Elem *curentElem, Elem *preElem) {
    int temp = LocateElem(curentElem);
    if (temp == -1 || temp == 0) {
        return false;
    } else {
        *preElem = m_pList[temp - 1];
        return true;
    }
}

bool List::NextElem(Elem *curentElem, Elem *nextElem) {
    int temp = LocateElem(curentElem);
    if (temp == -1 || temp == m_iLength - 1) {
        return false;
    } else {
        *nextElem = m_pList[temp + 1];
        return true;
    }
}

void List::ListTraverse() {
    for (int i = 0; i < m_iLength; ++i) {
        cout << m_pList[i] << " ";
    }
    cout << endl;
}

bool List::ListInsert(int i, Elem *elem) {
    if (i < 0 || i > m_iLength) {
        return false;
    }
    for (int j = m_iLength; j >= i; j--) {
        m_pList[j + 1] = m_pList[j];
    }
    m_pList[i] = *elem;
    m_iLength++;
    return true;
}

bool List::ListDelete(int i, Elem *elem) {
    if (i < 0 || i >= m_iLength) {
        return false;
    }
    *elem = m_pList[i];
    for (int j = i + 1; j < m_iLength; ++j) {
        m_pList[j] = m_pList[j - 1];
    }
    m_iLength--;
    return true;
}

int main() {
    int e1 = 3;
    int e2 = 5;
    int e3 = 7;
    int e4 = 2;
    int e5 = 9;
    int temp;
    List *list1 = new List(10);
    list1->ListInsert(0, &e1);
    list1->ListInsert(1, &e2);
    list1->ListInsert(2, &e3);
    list1->ListInsert(1, &e4);
    list1->ListInsert(2, &e5);
    if (!list1->ListEmpty()) {
        cout << "not empty" << endl;
    }
    cout << "length:" << list1->ListLength() << endl;
    list1->ListTraverse();
    list1->GetElem(3, &temp);
    cout << "temp :" << temp << endl;
    cout << "temp location:" << list1->LocateElem(&temp) << endl;
    list1->PriorElem(&e4, &temp);
    cout << "temp pre location:" << temp << endl;
    list1->NextElem(&e4, &temp);
    cout << "temp next location:" << temp << endl;
    list1->ListDelete(0, &temp);
    cout << "delete:" << temp << endl;
    list1->ClearList();
    cout << "length:" << list1->ListLength() << endl;
    if (list1->ListEmpty()) {
        cout << "empty" << endl;
    }
    delete list1;
    return 0;
}