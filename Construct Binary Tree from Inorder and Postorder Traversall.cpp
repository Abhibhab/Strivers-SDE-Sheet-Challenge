/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
#include <bits/stdc++.h>
TreeNode<int>* solver(vector<int> &postOrder, vector<int> &inOrder, int ins, int ine,
            int prs, int pre, unordered_map<int,int>&mp) {
                 if(prs>pre || ins>ine)return NULL;
                 TreeNode<int>*root=new TreeNode<int>(postOrder[pre]);
                 int rootin=mp[postOrder[pre]];
                 int left=rootin-ins;
                 root->left=solver(postOrder,inOrder,ins,rootin-1,prs,prs+left-1,mp);
                 root->right=solver(postOrder,inOrder,rootin+1,ine,prs+left,pre-1,mp);
                 return root;



            }

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     //hashing;
     unordered_map<int,int>mp;
     for(int i=0;i<inOrder.size();i++)mp[inOrder[i]]=i;
     return(solver(postOrder,inOrder,0,inOrder.size()-1,0,postOrder.size()-1,mp));
     

}
