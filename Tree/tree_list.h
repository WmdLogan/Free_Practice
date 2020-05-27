//
// Created by logan on 2020/5/27.
//

#ifndef LEETCODE_TREE_LIST_H
#define LEETCODE_TREE_LIST_H
class Node{
public:
    Node();
    Node *SearchNode(int nodeIndex);
    int index;
    int data;
    Node *pLChild;
    Node *pRChild;
    Node *pParent;
};
class Tree_list{
    Tree_list();

    ~Tree_list();

    Node *SearchNode(int nodeIndex);

    bool AddNode(int nodeIndex, int direction, Node *pNode);

    bool DeleteNode(int nodeIndex, Node *pNode);
    void PreorderTraversa();
    void InorderTraversa();
    void PostorderTraversa();

private:
    Node *m_pRoot;
};
#endif //LEETCODE_TREE_LIST_H
