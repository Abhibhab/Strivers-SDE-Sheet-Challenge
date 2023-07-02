#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(!root)return;
    queue<BinaryTreeNode< int > *>q;
    BinaryTreeNode< int > *temp=root;
    q.push(temp);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            auto it=q.front();
            q.pop();
            //    it->next = n ? q.front() : NULL;
            if(n){
                it->next=q.front();
            }else{
                it->next=NULL;
            }
            if(it->left)q.push(it->left);
            if(it->right)q.push(it->right);

        }
    }
}
