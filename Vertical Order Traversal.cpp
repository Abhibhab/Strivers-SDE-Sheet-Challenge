#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
#define to map<int,map<int,vector<int>>>

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    if(root==NULL)
      return {};
    to mp;
    queue<pair<TreeNode<int>*,int>>que;
    que.push({root, 0});
    int level=0;
    // int hori=0;

    while(!que.empty()){
        int n=que.size();
        while (n--) {
            auto it=que.front();
            que.pop();
            mp[it.second][level].push_back(it.first->data);
            if(it.first->left){
              que.push({it.first->left,it.second-1});
            }
            if(it.first->right){
              que.push({it.first->right,it.second+1});
            }
        }
        level++;
    }
    vector<int>ans;
    for (auto it : mp) {
      for (auto jt : it.second) {
          for(auto i:jt.second)ans.push_back(i);
         
      }
    }
    return ans;
}
