//
// Created by logan on 2020/6/13.
//

#include "CMap.h"
#include <iostream>
#include <cstring>

using namespace std;

CMap::CMap(int capacity) : m_iCapacity(capacity) {
    m_iNodeCount = 0;
    m_pNodeArray = new Node[m_iCapacity];
    m_pMatrix = new int[m_iCapacity * m_iCapacity];
    memset(m_pMatrix, 0, m_iCapacity * m_iCapacity * sizeof(int));
    m_pEdge = new Edge[m_iCapacity - 1];
}

CMap::~CMap() {
    delete[]m_pNodeArray;
    delete[]m_pMatrix;
}

bool CMap::addNode(Node *pNode) {
    m_pNodeArray[m_iNodeCount].m_cData = pNode->m_cData;
    m_iNodeCount++;
    return true;
}

void CMap::resetNode() {
    for (int i = 0; i < m_iNodeCount; ++i) {
        m_pNodeArray[i].m_bIsVisited = false;
    }
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int val) {
    m_pMatrix[row * m_iCapacity + col] = val;
    return true;
}

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col, int val) {
    m_pMatrix[row * m_iCapacity + col] = val;
    m_pMatrix[col * m_iCapacity + row] = val;
    return true;
}

void CMap::printMatrix() {
    for (int i = 0; i < m_iCapacity; ++i) {
        for (int j = 0; j < m_iCapacity; ++j) {
            cout << m_pMatrix[i * m_iCapacity + j] << " ";
        }
        cout << endl;
    }
}

void CMap::depthFirstTraverse(int nodeIndex) {
    int value = 0;
    cout << m_pNodeArray[nodeIndex].m_cData << " ";
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    for (int i = 0; i < m_iCapacity; i++) {
        getValueFromMatrix(nodeIndex, i, value);
        if (value) {
            if (m_pNodeArray[i].m_bIsVisited) {
                continue;
            }
            depthFirstTraverse(i);
        }
    }
}

void CMap::breadthFirstTraverse(int nodeIndex) {
    cout << m_pNodeArray[nodeIndex].m_cData << " ";
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    vector<int> curVec;
    curVec.push_back(nodeIndex);
    breadthFirstTraverseImpl(curVec);
}

bool CMap::getValueFromMatrix(int row, int col, int &val) {
    val = m_pMatrix[row * m_iCapacity + col];
    return true;
}

void CMap::breadthFirstTraverseImpl(vector<int> preVec) {
    int value = 0;
    vector<int> curVec;
    for (int i = 0; i < (int) preVec.size(); ++i) {
        for (int j = 0; j < m_iCapacity; ++j) {
            getValueFromMatrix(preVec[i], j, value);
            if (value) {
                if (m_pNodeArray[j].m_bIsVisited) {
                    continue;
                }
                cout << m_pNodeArray[j].m_cData << " ";
                m_pNodeArray[j].m_bIsVisited = true;
                curVec.push_back(j);
            }
        }
    }
    if (curVec.size() == 0) {
        return;
    }
    breadthFirstTraverseImpl(curVec);
}

void CMap::primTree(int nodeIndex) {
    int value = 0;
    int edgeCount = 0;
    vector<int> nodeVec;
    vector<Edge> edgeVec;
    cout << m_pNodeArray[nodeIndex].m_cData << endl;
    nodeVec.push_back(nodeIndex);
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    while (edgeCount < m_iCapacity - 1) {
        int temp = nodeVec.back();
        for (int i = 0; i < m_iCapacity; ++i) {
            getValueFromMatrix(temp, i, value);
            if (value) {
                if (m_pNodeArray[i].m_bIsVisited) {
                    continue;
                }
                Edge edge(temp, i, value);
                edgeVec.push_back(edge);//所有与temp相连的边
            }
        }
        //从可选边集合中找出最小的边
        int edgeIndex = getMinEdge(edgeVec);
        edgeVec[edgeIndex].m_bSelected = true;
        cout << edgeVec[edgeIndex].m_iNodeindexA << "---"
             << edgeVec[edgeIndex].m_iNodeindexB << "   "
             << edgeVec[edgeIndex].m_iWeightValue << endl;
        m_pEdge[edgeCount] = edgeVec[edgeIndex];
        edgeCount++;

        int nextNodeIndex = edgeVec[edgeIndex].m_iNodeindexB;

        nodeVec.push_back(nextNodeIndex);
        m_pNodeArray[nextNodeIndex].m_bIsVisited = true;
        cout << m_pNodeArray[nextNodeIndex].m_cData << endl;
    }
}

int CMap::getMinEdge(vector<Edge> edgeVec) {
    int minWeight = 0;
    int edgeIndex = 0;
    int i;
    //找第一条没被选中的边
    for (i = 0; i < edgeVec.size(); ++i) {
        if (!edgeVec[i].m_bSelected) {
            minWeight = edgeVec[i].m_iWeightValue;
            edgeIndex = i;
            break;
        }
    }
    if (minWeight==0){return -1;}//所有边全被选中
    //找最小的边
    for (; i < edgeVec.size(); ++i) {
        if (edgeVec[i].m_bSelected) {
            continue;
        }
        if (minWeight > edgeVec[i].m_iWeightValue) {
            minWeight = edgeVec[i].m_iWeightValue;
            edgeIndex = i;
        }
    }
    return edgeIndex;
}

int main() {
/*
           A
          / \
        B    D
       / \  / \
      C  F G  H
      \ /
       E
*/
/*    CMap *pMap = new CMap(8);

    Node *pNodeA = new Node('A');
    Node *pNodeB = new Node('B');
    Node *pNodeC = new Node('C');
    Node *pNodeD = new Node('D');
    Node *pNodeE = new Node('E');
    Node *pNodeF = new Node('F');
    Node *pNodeG = new Node('G');
    Node *pNodeH = new Node('H');

    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);
    pMap->addNode(pNodeG);
    pMap->addNode(pNodeH);

    pMap->setValueToMatrixForUndirectedGraph(0, 1);
    pMap->setValueToMatrixForUndirectedGraph(0, 3);
    pMap->setValueToMatrixForUndirectedGraph(1, 2);
    pMap->setValueToMatrixForUndirectedGraph(5, 1);
    pMap->setValueToMatrixForUndirectedGraph(3, 6);
    pMap->setValueToMatrixForUndirectedGraph(3, 7);
    pMap->setValueToMatrixForUndirectedGraph(2, 4);
    pMap->setValueToMatrixForUndirectedGraph(5, 4);

    pMap->printMatrix();
    cout << endl;
    pMap->depthFirstTraverse(0);
    cout << endl;
    pMap->resetNode();
    pMap->breadthFirstTraverse(0);*/

    /*
             A
        /6  |1  \5
      B -2- F -9- E
       \3 /8 \4 /2
        C -7- D

     A-B 6  A-E 5   A-F 1
     B-C 3  B-F 2
     C-F 8  C-D 7
     D-F 4  D-E 2
     E-F 9

     */
    CMap *pMap = new CMap(6);

    Node *pNodeA = new Node('A');
    Node *pNodeB = new Node('B');
    Node *pNodeC = new Node('C');
    Node *pNodeD = new Node('D');
    Node *pNodeE = new Node('E');
    Node *pNodeF = new Node('F');

    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);

    pMap->setValueToMatrixForUndirectedGraph(0, 1, 6);
    pMap->setValueToMatrixForUndirectedGraph(0, 4, 5);
    pMap->setValueToMatrixForUndirectedGraph(0, 5, 1);
    pMap->setValueToMatrixForUndirectedGraph(1, 2, 3);
    pMap->setValueToMatrixForUndirectedGraph(1, 5, 2);
    pMap->setValueToMatrixForUndirectedGraph(2, 5, 8);
    pMap->setValueToMatrixForUndirectedGraph(2, 3, 7);
    pMap->setValueToMatrixForUndirectedGraph(3, 5, 4);
    pMap->setValueToMatrixForUndirectedGraph(3, 4, 2);
    pMap->setValueToMatrixForUndirectedGraph(4, 5, 9);

    pMap->printMatrix();
    cout << endl;
    pMap->primTree(0);
}