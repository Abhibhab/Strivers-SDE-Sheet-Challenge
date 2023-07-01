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

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    if(root==NULL)
      return {};
    queue<TreeNode<int>*>que;
    vector<int>ans;
    que.push(root);
    while(!que.empty()){
        int n=que.size();       
        ans.push_back(que.front()->data);
        while (n--) {
        TreeNode<int>* ele=que.front();
        que.pop();
        if(ele->left)que.push(ele->left);
        if(ele->right)que.push(ele->right);



        }
    }
    return ans;
}
