//
// Created by logan on 2020/5/21.
//

#ifndef LEETCODE_LIST_H
#define LEETCODE_LIST_H
typedef int Elem;

class List {
public:
    List(int size);//创建线性表
    ~List();//销毁线性表
    void ClearList();//清空线性表
    bool ListEmpty();//判断线性表是否为空
    int ListLength();//获取线性表长度
    bool GetElem(int i, Elem *elem); //获取指定元素
    int LocateElem(const Elem *elem);//寻找第一个满足elem的数据元素的位序
    bool PriorElem(Elem *curentElem, Elem *preElem);//获取指定元素的前驱
    bool NextElem(Elem *curentElem, Elem *nextElem);//获取指定元素的后继
    void ListTraverse();//遍历线性表
    bool ListInsert(int i, Elem *elem);
    bool ListDelete(int i, Elem *elem);
private:
    int *m_pList;
    int m_iSize;//线性表容量
    int m_iLength;//线性表当前长度
};

#endif //LEETCODE_LIST_H
