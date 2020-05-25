//
// Created by logan on 2020/5/25.
//

#ifndef LEETCODE_STACK_H
#define LEETCODE_STACK_H
#include "iostream"

template<typename T>
class Mystack{
public:
    Mystack(int size);
    ~Mystack();
    bool stackEmpty() const;
    bool stackFull() const;
    void clearStack();
    int stackLength() const;

    bool push(T elem);

    bool pop(T &elem);

    void stackTraverse();

private:
    T* m_pBuffer;//栈指针空间
    int m_iSize;//栈容量
    int m_iTop;//栈顶，栈中元素个数
};
#endif //LEETCODE_STACK_H
