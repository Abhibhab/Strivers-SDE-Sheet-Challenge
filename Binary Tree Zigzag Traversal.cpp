#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    if(root==NULL)
      return {};
    vector<int>ans;
    queue<BinaryTreeNode<int>*>que;
    que.push(root);
    int count=0;
    while (!que.empty()) {
        // auto it=que.top();
        int size=que.size();
        // que.pop();
        vector<int>vec;
        while (size--) {
            auto it=que.front();
            vec.push_back(it->data);
            if(it->left)que.push(it->left);
            if(it->right)que.push(it->right);
            que.pop();

        }
        if(count%2==0){
            for(auto z:vec){
                ans.push_back(z);
            }
            count++;
        }else{
            reverse(vec.begin(),vec.end());
            for (auto z : vec) {
            ans.push_back(z);
            }
            count++;
        }
    }
    return ans;
}
