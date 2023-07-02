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

int getMaxWidth(TreeNode<int> *root)
{
    if(!root)return 0;
    // Write your code here.

    queue<pair<TreeNode<int> *,int>>que;
    int ans=INT_MIN;
    que.push({root,0});
    while(!que.empty()){
        int sub=que.front().second;
        int size=que.size();
        int first,last;
        ans=max(ans,size);
        // int first=que.front().first->val;
        // int last=que.front().first->val;
        for(int i=0;i<size;i++){
            int cur=que.front().second-sub;
            auto ele=que.front().first;
            que.pop();
            if(i==0)first=cur;
            if(i==size-1)
             last=cur;
            if(ele->left){
              que.push({ele->left,cur*2+1});
            }
            if(ele->right){
              que.push({ele->right,cur*2+2});
            }


        }
        // ans=max(ans,last-first+1);

    }
    return ans;
}
