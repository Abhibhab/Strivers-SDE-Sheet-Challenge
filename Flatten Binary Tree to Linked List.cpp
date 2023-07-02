#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
// TreeNode<int> *prev=NULL;
void solver(TreeNode<int> *&prev,TreeNode<int> *root){
    if(!root)return;
    solver(prev,root->right);
    solver(prev,root->left);
     root->right=prev;
    root->left=NULL;   
    prev=root;

}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    TreeNode<int> *prev=NULL;
    solver(prev,root);
    return root;


}
