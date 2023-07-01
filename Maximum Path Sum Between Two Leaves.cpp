#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long int solve(TreeNode<int>*root,long long int&ans)
{
    if(!root) return -1e9;
    if(!root->left and !root->right) return root->val;
    long long int left=solve(root->left,ans);
    long long int right=solve(root->right,ans);
    if(left==-1e9 || right==-1e9)
    {
        return max(left,right)+root->val;
    }
    ans=max(ans,left+right+root->val);
    return max(left,right)+root->val;
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(!root) return -1;
    long long int ans=-1;
    solve(root,ans);
    return ans;

}
// long long int height(TreeNode<int> *root, long long int &maxi) {
//     if(root==NULL)return 0;
//     long long int hel=0;
//     long long int lh=max(hel,height(root->left,maxi));
//     long long int rh=max(hel,height(root->right,maxi));
//     maxi=max(maxi,lh+rh+root->val);
//     return max(lh,rh)+root->val;
// }

// long long int findMaxSumPath(TreeNode<int> *root)
// {
//     long long int maxi=0;
//     long long helo=height(root, maxi);
//     return maxi;
    
    
//     // Write your code here.
// }
