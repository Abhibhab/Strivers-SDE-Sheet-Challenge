#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
//>=
void solver(BinaryTreeNode<int> *root, int X, int &ans) {
    if(root==NULL)return;
    if (root->data == X) {
    ans=root->data;
    return;
    }else if(root->data<X){
        solver(root->right,X,ans);
    }else{
        ans=root->data;
        solver(root->left,X,ans);
    }
    
}

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=-1;
    solver(node,x,ans);
    return ans;
}
