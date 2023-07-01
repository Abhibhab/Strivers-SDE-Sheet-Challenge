/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
// int ans=0;
int height(TreeNode<int> *root,int &ans) {
    if(root==NULL)return 0;
    int lh=height(root->left,ans);
    int rh=height(root->right,ans);
    ans=max(ans,lh+rh);
    return max(lh,rh)+1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int ans=0;
    int i=height(root,ans);
    return ans;

}
