//
// Created by logan on 2020/6/13.
//
#include <vector>

using namespace std;
#ifndef LEETCODE_CMAP_H
#define LEETCODE_CMAP_H

class Node {
public:
    Node(char data = 0) : m_cData(data) { m_bIsVisited = false; }

    char m_cData;
    bool m_bIsVisited;
};

class Edge {
public:
    Edge(int nodeIndexA = 0, int nodeIndexB = 0, int weightValue = 0) :
            m_iNodeindexA(nodeIndexA), m_iNodeindexB(nodeIndexB), m_iWeightValue(weightValue) {
        m_bSelected = false;
    }

    int m_iNodeindexA;
    int m_iNodeindexB;
    int m_iWeightValue;
    bool m_bSelected;
};

class CMap {
public:
    CMap(int capacity);

    ~CMap();

    bool addNode(Node *pNode);//向图中加入顶点（结点）

    void resetNode();//重置顶点

    bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);//为有向图设置邻接矩阵

    bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1);//为无向图设置邻接矩阵

    void printMatrix();//打印邻接矩阵

    void depthFirstTraverse(int nodeIndex);//深度优先遍历

    void breadthFirstTraverse(int nodeIndex);//广度优先遍历

    void primTree(int nodeIndex);//prim生成树

private:
    bool getValueFromMatrix(int row, int col, int &val);//从矩阵中获取权值

    void breadthFirstTraverseImpl(vector<int> preVec);//广度优先遍历实现函数

    int getMinEdge(vector<Edge> edgeVec);
private:
    int m_iCapacity;//图中最多可以容纳的顶点数
    int m_iNodeCount;//已经添加的顶点（结点）个数
    Node *m_pNodeArray;//用来存放顶点数组
    int *m_pMatrix;//用来存放邻接矩阵
    Edge *m_pEdge;
};

#endif //LEETCODE_CMAP_H
