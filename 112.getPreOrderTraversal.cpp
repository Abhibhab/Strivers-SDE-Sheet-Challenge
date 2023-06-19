#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int>ans;
void helper(TreeNode *root) {
if(root==NULL)return;
ans.push_back(root->data);
helper(root->left);
helper(root->right);

}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    ans.clear();
    helper(root);
    return ans;
}
