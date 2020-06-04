//
// Created by logan on 2020/5/22.
//

#include "LinkList.h"
#include "iostream"
using namespace std;
LinkList::LinkList() {
    m_pList = new Node;
    m_pList->data = 0;
    m_pList->next = nullptr;
    m_iLength = 0;
}

LinkList::~LinkList() {
    ClearList();
    delete m_pList;
    m_pList = nullptr;
}

void LinkList::ClearList() {
    Node *currentNode = m_pList->next;
    while (currentNode != nullptr) {
        Node *temp = currentNode->next;
        delete currentNode;
        currentNode = temp;
    }
    m_pList->next = nullptr;
}

bool LinkList::ListEmpty() {
    return m_iLength == 0;
}

int LinkList::ListLength() {
    return m_iLength;
}

bool LinkList::GetElem(int i, Node *pNode) {
    if (i < 0 || i >= m_iLength) {
        return false;
    }
    Node *currentNode = m_pList;
    for (int j = 0; j <= i; ++j) {
        currentNode = currentNode->next;
    }
    pNode->data = currentNode->data;
    return true;
}

bool LinkList::PriorElem(Node *pCurrentNode, Node *pPreNode) {
    return false;
}

bool LinkList::NextElem(Node *pCurrentNode, Node *pNextNode) {
    return false;
}

void LinkList::ListTraverse() {
    Node *current = m_pList->next;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

bool LinkList::ListInsert(int i, Node *pNode) {
    if (i < 0 || i > m_iLength) {
        return false;
    }
    Node *currnetNode = m_pList;
    for (int j = 0; j < i; ++j) {
        currnetNode = currnetNode->next;
    }
    Node *newNode = new Node;
    if (newNode == nullptr) {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = currnetNode->next;
    currnetNode->next = newNode;
    m_iLength++;
    return true;
}

bool LinkList::ListDelete(int i, Node *pNode) {
    if (i < 0 || i >= m_iLength) {
        return false;
    }
    Node *currentNode = m_pList;
    Node *currentNodeBefore = nullptr;
    for (int j = 0; j <= i; ++j) {
        currentNodeBefore = currentNode;
        currentNode = currentNode->next;
    }
    currentNodeBefore->next = currentNode->next;
    pNode->data = currentNode->data;
    delete currentNode;
    currentNode = nullptr;
    m_iLength--;
    return true;
}

bool LinkList::ListInsertHead(Node *pNode) {
    Node *temp = m_pList->next;
    Node *newNode = new Node;//开辟到堆区，这样函数运行完不会被释放
    if (newNode == nullptr) {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = m_pList->next;
    m_pList->next = newNode;
    m_iLength++;
    return true;
}

bool LinkList::ListInsertTail(Node *pNode) {
    Node *currentNode = m_pList;
    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }
    Node *newNode = new Node;//开辟到堆区，这样函数运行完不会被释放
    if (newNode == nullptr) {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = nullptr;
    currentNode->next = newNode;
    m_iLength++;
    return true ;
}

int LinkList::LocateElem(Node *pNode) {
    Node *currentNode = m_pList;//头节点数据没有意义
    int count = 0;
    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
        if (currentNode->data == pNode->data) {
            return count;
        }
        count++;
    }
    return 0;
}

typedef void (LinkList::*pre)(int);//指向成员函数的指针
int main() {
    pre pm = 0;
    Node node1;
    Node node2;
    Node node3;
    node1.data = 3;
    node2.data = 4;
    node3.data = 6;
    LinkList *list = new LinkList();
    list->ListInsertHead(&node1);
    list->ListInsertHead(&node2);
    list->ListInsert(0, &node3);
    list->ListInsertTail(&node3);
//    list->ListDelete(2, &node3);
//    cout << node3.data;
    list->ListTraverse();
    delete list;
    list = nullptr;
    return 0;
}