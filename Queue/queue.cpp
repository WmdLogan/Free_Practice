//
// Created by logan on 2020/5/26.
//

#include "queue.h"
#include "iostream"
using namespace std;

Queue::Queue(int queueCapacity) :{
    m_iQueueCapacity = queueCapacity;
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLen = 0;
    m_pQueue = new int[queueCapacity];
}

Queue::~Queue() {
    delete[]m_pQueue;
    m_pQueue = NULL;
}

void Queue::ClearQueue() {
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLen = 0;
}

bool Queue::QueueEmpty() const {
    return m_iQueueLen == 0;
}

bool Queue::QueueFull() const {
    return m_iQueueLen == m_iQueueCapacity;
}

int Queue::QueueLength() const {
    return m_iQueueLen;
}

bool Queue::EnQueue(int element) {
    if (QueueFull()) {
        return false;
    }
    m_pQueue[m_iTail] = element;
    m_iTail++;
    m_iTail = m_iTail % m_iQueueCapacity;
    m_iQueueLen++;
    return true;
}

bool Queue::DeQueue(int &element) {
    if (QueueEmpty()) {
        return false;
    }
    element = m_pQueue[m_iHead];
    m_iHead++;
    m_iHead = m_iHead % m_iQueueCapacity;
    m_iQueueLen--;
    return true;
}

void Queue::QueueTraverse() {
    for (int i = m_iHead; i < m_iQueueLen + m_iHead; ++i) {
        i = i % m_iQueueCapacity;
        cout << m_pQueue[i] << " ";
    }
    cout << endl;
}
int main(){
    auto *q = new Queue(4);
    q->EnQueue(10);
    q->EnQueue(0);
    q->EnQueue(1);
    q->EnQueue(120);
    q->QueueTraverse();
    int e;
    q->DeQueue(e);
    cout << endl;
    cout << "dequeue " << e << endl;
    q->DeQueue(e);
    cout << endl;
    cout << "dequeue " << e << endl;
    q->QueueTraverse();
    q->ClearQueue();
    q->QueueTraverse();
    q->EnQueue(120);
    q->QueueTraverse();
    e = q->QueueLength();
    cout << "length = " << e << endl;
    delete q;
    return 0;
}



