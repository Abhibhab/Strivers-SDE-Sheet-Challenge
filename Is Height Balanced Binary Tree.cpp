#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int height(BinaryTreeNode<int> *root) {
    if(root==NULL)return 0;
    int lf=height(root->left);
    if(lf==-1)return -1;
    int rf=height(root->right);
    if(rf==-1)return -1;
    if(abs(lf-rf)>1)return -1;
    return max(lf,rf)+1; 
}

bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    return height(root)!=-1;
}
