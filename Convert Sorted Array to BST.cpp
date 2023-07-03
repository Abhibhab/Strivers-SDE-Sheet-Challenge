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
TreeNode<int>* solver(vector<int>&arr,int n,int low,int high){
    if(low>high)return NULL;
    int mid=low+(high-low)/2;
    TreeNode<int>*root=new TreeNode<int>(arr[mid]);
    root->left=solver(arr,n,low,mid-1);
    root->right=solver(arr,n,mid+1,high);
    return root;
}

TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return(solver(arr,n,0,arr.size()-1));
    
}
