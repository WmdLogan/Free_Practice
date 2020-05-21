//
// Created by logan on 2020/4/27.
//
#include "iostream"

using namespace std;
struct Tree {
    int key;
    Tree *left_child = NULL;
    Tree *right_child;
    Tree *parent;
};

void build_tree(Tree *tree, int n) {
    printf("Present Number is %d\n", n);
    if (n <= tree->key) {
        if (tree->left_child == NULL) {
            printf("left new\n");
            Tree *temp = (Tree *) malloc(sizeof(Tree));
            tree->left_child = temp;
            temp->key = n;
            temp->parent = tree;
            temp->left_child = NULL;
            temp->right_child = NULL;
        } else {
            printf("left next\n");
            build_tree(tree->left_child, n);
        }
    } else{
        if(tree->right_child == NULL){
            printf("right new\n");
            Tree *temp = (Tree *) malloc(sizeof(Tree));
            tree->right_child = temp;
            temp->key = n;
            temp->parent = tree;
            temp->left_child = NULL;
            temp->right_child = NULL;
        } else {
            printf("right next\n");
            build_tree(tree->right_child, n);
        }
    }
}

void preorder_tree_walk(Tree *tree){
    if (tree->left_child != NULL) {
        preorder_tree_walk(tree->left_child);
    }
    printf("%d ", tree->key);
    if (tree->right_child != NULL) {
        preorder_tree_walk(tree->right_child);
    }
}
void inorder_tree_walk(Tree *tree){
    printf("%d ", tree->key);
    if (tree->left_child != NULL) {
        inorder_tree_walk(tree->left_child);
    }
    if (tree->right_child != NULL) {
        inorder_tree_walk(tree->right_child);
    }
}


void postorder_tree_walk(Tree *tree){
    if (tree->left_child != NULL) {
        postorder_tree_walk(tree->left_child);
    }
    if (tree->right_child != NULL) {
        postorder_tree_walk(tree->right_child);
    }
    printf("%d ", tree->key);
}
int main() {
    int a[] = {15, 6, 3, 2, 4, 7, 13, 9, 18, 17, 20};
    Tree * tree;
    tree = (Tree *) malloc(sizeof(Tree));
    tree->left_child = NULL;
    tree->right_child = NULL;
    tree->key = a[0];
    for (int i = 1; i < 11; ++i) {
        build_tree(tree, a[i]);
    }
    printf("The preorder is: ");
    preorder_tree_walk(tree);
    printf("\nThe inorder is: ");
    inorder_tree_walk(tree);
    printf("\nThe postorder is: ");
    postorder_tree_walk(tree);

}