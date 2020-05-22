//
// Created by logan on 2020/5/22.
//
#include "Node.h"

#ifndef LEETCODE_LINKLIST_H
#define LEETCODE_LINKLIST_H

class LinkList {
public:
    LinkList();//创建线性表
    ~LinkList();//销毁线性表
    void ClearList();//清空线性表
    bool ListEmpty();//判断线性表是否为空
    int ListLength();//获取线性表长度
    bool GetElem(int i, Node *pNode); //获取指定位序的元素
    int LocateElem(Node *pNode);//返回第一个满足的数据元素的位序
    bool PriorElem(Node *pCurrentNode, Node *pPreNode);//获取指定元素的前驱
    bool NextElem(Node *pCurrentNode, Node *pNextNode);//获取指定元素的后继
    void ListTraverse();//遍历线性表
    bool ListInsert(int i, Node *pNode);
    bool ListDelete(int i, Node *pNode);
    bool ListInsertHead(Node *pNode);
    bool ListInsertTail(Node *pNode);

private:
    Node *m_pList;
    int m_iLength;//线性表当前长度
};

#endif //LEETCODE_LINKLIST_H
