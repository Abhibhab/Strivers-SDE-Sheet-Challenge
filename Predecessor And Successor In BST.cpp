#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
//>key
//<key
void sus(BinaryTreeNode<int>* root, int key,int &ans){
    if(!root)return;
    if(root->data>=key){
        sus(root->left,key,ans);

    }else{
        ans=root->data;
        sus(root->right,key,ans);
    }
 
    


}

void pre(BinaryTreeNode<int>* root, int key,int &ans){
    if(!root)return;
    if(root->data<=key){
        pre(root->right,key,ans);

    }else{
        ans=root->data;
        pre(root->left,key,ans);
    }
 
    


}

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    int prede=-1,succ=-1;
    pre(root,key,prede);
    sus(root,key,succ);
    return{succ,prede};
}
