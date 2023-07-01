#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isleaf(TreeNode<int>* root){
    // if(root==NULL)return false;
    if(root->left==NULL && root->right==NULL)return true;
    else return false;
}

// bool isleaf(TreeNode<int> *root) { return !root->left and !root->right; }
void left(TreeNode<int> *root, vector<int> &res) 
{
    TreeNode<int>*cur=root->left;
    while (cur){
        if(!isleaf(cur)){res.push_back(cur->data);}
        if(cur->left)cur=cur->left;
        else {
        //   if (cur->right)
            cur = cur->right;
        }
    }
 }


void revright(TreeNode<int> *root, vector<int> &res) {
      TreeNode<int>*cur=root->right;
      vector<int>temp;
      while(cur){
        if(!isleaf(cur)){temp.push_back(cur->data);}
        if(cur->right)cur=cur->right;
        else {
        //   if (cur->left)
            cur = cur->left;
        }
      }
      reverse(temp.begin(),temp.end());
      for(auto it:temp)res.push_back(it);
}
void leaf(TreeNode<int> *root, vector<int> &res) {
   
    // if(root==NULL)return;
    if(root->left)
    leaf(root->left,res);
    // if(isleaf(root))res.push_back(root->data);
     if(isleaf(root)){
        res.push_back(root->data);
        // return;
    }
    if(root->right)
    leaf(root->right,res);

}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    if(!root)
      return {};
    vector<int>ans;
    if(!isleaf(root))ans.push_back(root->data);
    // if(root->left)
    left(root,ans);
    leaf(root,ans);
    // if(root->right)
    revright(root,ans);
    return ans;

    // return ans;
}
