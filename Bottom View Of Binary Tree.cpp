#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
       if(root==NULL)
      return {};
 map<int,int>mp;
 queue<pair<BinaryTreeNode<int>*,int>>que;
 que.push({root,0});
 vector<int>ans;
 while(!que.empty()){
     int n=que.size();
     while(n--){
     auto it=que.front();
     que.pop();
    
    
        mp[it.second]=it.first->data;
    
    if(it.first->left)
      que.push({it.first->left,it.second-1});
      if(it.first->right)
        que.push({it.first->right, it.second + 1});
     }
 }
 for(auto it:mp){
     ans.push_back(it.second);
 }
 return ans;
    
}
