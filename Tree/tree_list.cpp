//
// Created by logan on 2020/5/27.
//

#include "tree_list.h"
#include <iostream>

using namespace std;
Node::Node() {
    index = 0;
    data = 0;
    pLChild = nullptr;
    pRChild = nullptr;
    pParent = nullptr;
}

Tree_list::Tree_list() {
    m_pRoot = new Node();
}

Tree_list::~Tree_list() {
    DeleteNode(0, nullptr);
}

Node *Node::SearchNode(int nodeIndex) {
    if (this->index == nodeIndex) {
        return this;
    }
    if (this->pLChild != nullptr) {
        if (this->pLChild->index == nodeIndex) {
            return this->pLChild;
        }
    }
    if (this->pRChild != nullptr) {
        if (this->pRChild->index == nodeIndex) {
            return this->pRChild;
        }
    }
    return nullptr;
}

void Node::DeleteNode() {
    if (this->pLChild != nullptr) {
        this->pLChild->DeleteNode();
    }
    if (this->pRChild != nullptr) {
        this->pRChild->DeleteNode();
    }
    if (this->pParent != nullptr) {
        if (this->pParent->pLChild == this) {
            this->pParent->pLChild == nullptr;
        }
        if (this->pParent->pRChild == this) {
            this->pParent->pRChild == nullptr;
        }
    }
    delete this;
}

bool Tree_list::AddNode(int nodeIndex, int direction, Node *pNode) {
    Node *temp = SearchNode(nodeIndex);
    if (temp == nullptr) {
        return false;
    }
    Node *node = new Node();
    node->index = pNode->index;
    node->data = pNode->data;
    if (direction == 0) {
        temp->pLChild = node;
    }
    if (direction == 1) {
        temp->pRChild = node;
    }

}


bool Tree_list::DeleteNode(int nodeIndex, Node *pNode) {
    Node *temp = SearchNode(nodeIndex);
    if (temp == nullptr) {
        return false;
    }
    if (pNode != nullptr) {
        pNode->data = temp->data;
    }
    temp->DeleteNode();
    return true;
}

void Tree_list::PreorderTraversa() {

}

void Tree_list::InorderTraversa() {

}

void Tree_list::PostorderTraversa() {

}

Node *Tree_list::SearchNode(int nodeIndex) {
    return m_pRoot->SearchNode(nodeIndex);
}
