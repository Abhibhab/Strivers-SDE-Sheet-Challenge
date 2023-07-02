#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

void solver(TreeNode<int> *root, int k,int &ans,int &index){
    if(root==NULL)return;
    solver(root->left,k,ans,index);
    index++;
    if (index == k) {
    ans=root->data;
    return;
    }
    solver(root->right,k,ans,index);
}

int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int ans=-1;
    int index=0;
     solver(root,k,ans,index);
    return ans;
}
