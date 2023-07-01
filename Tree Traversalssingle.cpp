#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    if(root==NULL)
      return {
        {}
      };
    vector<int>inorder,preorder,postorder;
    stack<pair<BinaryTreeNode<int>*,int>>st;
    st.push({root,1});
    while (!st.empty()) {
        auto ele=st.top();
        st.pop();
        if(ele.second==1){
            preorder.push_back(ele.first->data);
            ele.second++;
    
            st.push(ele);
            if(ele.first->left){
              st.push({ele.first->left, 1});
            }

        } else if (ele.second == 2) {
           
             inorder.push_back(ele.first->data);
             ele.second++;
    
            st.push(ele);
              if(ele.first->right){
                st.push({ele.first->right, 1});
              }

        }else{
            postorder.push_back(ele.first->data);
            

        }
    }
    vector<vector<int>>ans({inorder,preorder,postorder});
    // ans.push_back;
    return ans;
}
