#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
// #include <bits/stdc++.h>
TreeNode<int>* solver(vector<int> &postOrder, vector<int> &inOrder, int ins, int ine,
            int prs, int pre, unordered_map<int,int>&mp) {
                 if(prs>pre || ins>ine)return NULL;
                 TreeNode<int>*root=new TreeNode<int>(postOrder[prs]);
                 int rootin=mp[postOrder[prs]];
                 int left=rootin-ins;
                 root->left=solver(postOrder,inOrder,ins,rootin-1,prs+1,prs+left,mp);
                 root->right=solver(postOrder,inOrder,rootin+1,ine,prs+left+1,pre,mp);
                 return root;



            }

// TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
// {
// 	// Write your code here.
//      //hashing;
//      unordered_map<int,int>mp;
//      for(int i=0;i<inOrder.size();i++)mp[inOrder[i]]=i;
//      return(solver(postOrder,inOrder,0,inOrder.size()-1,0,postOrder.size()-1,mp));
     

// }


TreeNode<int> *buildBinaryTree(vector<int> &inOrder, vector<int> &postOrder)
{
	//    Write your code here
         unordered_map<int,int>mp;
     for(int i=0;i<inOrder.size();i++)mp[inOrder[i]]=i;
     return(solver(postOrder,inOrder,0,inOrder.size()-1,0,postOrder.size()-1,mp));
}
TreeNode<int>* solver(int& i,vector<int>&pre,int bound){
    if(i==pre.size() || pre[i]>bound)return NULL;
    TreeNode<int>* root=new TreeNode<int>(pre[i++]);
    root->left=solver(i,pre,root->data);
    root->right=solver(i,pre,bound);
    return root;


}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    int i=0;
    return solver(i,preOrder,INT_MAX);
    // Write your code here.
    // vector<int>in=preOrder;
    // sort(in.begin(),in.end());
    // return buildBinaryTree(in,preOrder);


}
