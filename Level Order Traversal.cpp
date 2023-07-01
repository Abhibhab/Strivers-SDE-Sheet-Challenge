#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int>ans;
    queue<BinaryTreeNode<int>*>que;
    if(root==NULL)return {};
    que.push(root);
    while(!que.empty()){
        BinaryTreeNode<int>* ele=que.front();
        que.pop();
        if(ele->left){
            que.push(ele->left);
        }
        if(ele->right)que.push(ele->right);
        ans.push_back(ele->val);

    }
    return ans;
}
