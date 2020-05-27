//
// Created by logan on 2020/5/27.
//

#ifndef LEETCODE_TREE_ARRAY_H
#define LEETCODE_TREE_ARRAY_H


class Tree_array {
public:
    virtual ~Tree_array();

    Tree_array(int size, int *pRoot);

    int *SearchNode(int nodeIndex);//根据索引寻找结点
    bool AddNode(int nodeIndex, int direction, int *pNode);

    bool DeleteNode(int nodeIndex, int *pNode);
    void TreeTraverse();

private:
    int *m_pTree;
    int m_iSize;
};

#endif //LEETCODE_TREE_ARRAY_H
