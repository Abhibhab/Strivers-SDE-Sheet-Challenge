#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
// <=
void solver(TreeNode<int> *root, int X, int &ans) {
    if(root==NULL)return;
    if (root->val == X) {
    ans=root->val;
    return;
    }else if(root->val>X){
        solver(root->left,X,ans);
    }else{
        ans=root->val;
        solver(root->right,X,ans);
    }
    
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans=-1;
    solver(root,X,ans);
    return ans;

}
