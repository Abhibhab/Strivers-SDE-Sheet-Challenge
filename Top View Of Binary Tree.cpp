#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    if(root==NULL)
      return {};
 map<int,int>mp;
 queue<pair<TreeNode<int>*,int>>que;
 que.push({root,0});
 vector<int>ans;
 while(!que.empty()){
     int n=que.size();
     while(n--){
     auto it=que.front();
     que.pop();
    
    if(mp.find(it.second)==mp.end()){
        mp[it.second]=it.first->val;
    }
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
