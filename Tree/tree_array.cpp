//
// Created by logan on 2020/5/27.
//

#include "tree_array.h"
#include <iostream>
using namespace std;

Tree_array::~Tree_array() {
    delete[]m_pTree;
    m_pTree = nullptr;
}

Tree_array::Tree_array(int size, int *pRoot) {
    m_pTree = new int[size];
    m_iSize = size;
    for (int i = 0; i < size; ++i) {
        m_pTree[i] = 0;
    }
    m_pTree[0] = *pRoot;
}

int *Tree_array::SearchNode(int nodeIndex) {
    if (nodeIndex < 0 || nodeIndex > m_iSize || m_pTree[nodeIndex] == 0) {
        return nullptr;
    }
    return &m_pTree[nodeIndex];
}

bool Tree_array::AddNode(int nodeIndex, int direction, int *pNode) {
    if (nodeIndex < 0 || nodeIndex > m_iSize || m_pTree[nodeIndex] == 0) {
        return false;
    }
    if (direction == 0) {
        //插入左孩子
        if (nodeIndex*2 + 1 > m_iSize || m_pTree[nodeIndex*2 + 1] != 0) {
            return false;
        }
        m_pTree[2 * nodeIndex + 1] = *pNode;
    }
    if (direction == 1) {
        //插入左孩子
        if (nodeIndex*2 + 2 > m_iSize || m_pTree[nodeIndex*2 + 2] != 0) {
            return false;
        }
        m_pTree[nodeIndex*2 + 2] = *pNode;
    }
    return true;
}

bool Tree_array::DeleteNode(int nodeIndex, int *pNode) {
    if (nodeIndex < 0 || nodeIndex > m_iSize || m_pTree[nodeIndex] == 0) {
        return false;
    }
    *pNode = m_pTree[nodeIndex];
    m_pTree[nodeIndex] = 0;
    return true;
}

void Tree_array::TreeTraverse() {
    for (int i = 0; i < m_iSize; ++i) {
        cout << m_pTree[i] << " ";
    }
    cout << endl;
}
int main(){
    int root = 3;
    Tree_array *pTree = new Tree_array(10, &root);
    int node1 = 5;
    int node2 = 8;
    pTree->AddNode(0, 0, &node1);
    pTree->AddNode(0, 1, &node2);
    int node3 = 2;
    int node4 = 6;
    pTree->AddNode(1, 0, &node3);
    pTree->AddNode(1, 1, &node4);
    int node5 = 9;
    int node6 = 10;
    pTree->AddNode(2, 0, &node5);
    pTree->AddNode(2, 1, &node6);
    pTree->TreeTraverse();
    int *p = new int;
    p = pTree->SearchNode(2);
    cout << "search result: " << *p << endl;
    int *p1 = new int;
    pTree->DeleteNode(3, p1);
    cout << "delete: " << *p1 << endl;
    pTree->TreeTraverse();
    delete pTree;
}
