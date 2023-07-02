#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/

void solve(TreeNode<int> *root, int x,vector<int>&vec){
	if(root==NULL)return;
	vec.push_back(root->data);
	if(root->data==x)return;
	solve(root->left,x,vec);
	solve(root->right,x,vec);
	if(vec.back()!=x)vec.pop_back();

}



vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int>ans;
	solve(root,x,ans);
	return ans;
}
