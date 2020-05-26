//
// Created by logan on 2020/5/26.
//

#ifndef LEETCODE_QUEUE_H
#define LEETCODE_QUEUE_H
class Queue
{
public:
    Queue(int queueCapacity);
    virtual ~Queue();
    void ClearQueue();
    bool QueueEmpty() const ;
    bool QueueFull() const ;
    int QueueLength() const ;

    bool EnQueue(int element);

    bool DeQueue(int &element);
    void QueueTraverse();
private:
    int *m_pQueue; //队列数组指针
    int m_iQueueLen;//队列元素个数
    int m_iQueueCapacity;//队列数组容量
    int m_iHead;
    int m_iTail;
};
#endif //LEETCODE_QUEUE_H
