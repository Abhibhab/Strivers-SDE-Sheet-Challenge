#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
struct info {
    int mini;
    int maxi;
    // bool isBST;
    int siz;

};
info solver(TreeNode<int>* root){
    if(!root)
      return {INT_MAX,INT_MIN,0};
    info left=solver(root->left);
    info right=solver(root->right);
    if(left.maxi<root->data &&right.mini>root->data){
      return {min(left.mini,root->data),max(right.maxi,root->data),left.siz+right.siz+1};
    }
    return {INT_MIN,INT_MAX,max(right.siz,left.siz)};
}


int largestBST(TreeNode<int>* root) 
{
  // Write your code here.
  auto ans=solver(root);
  return ans.siz;
}
