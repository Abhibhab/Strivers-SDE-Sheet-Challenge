//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  int burn(Node*start,map<Node*,Node*>&mp){
      map<Node*,bool>vis;
      vis[start]=1;
      int ans=0;
      queue<Node*>que;
      que.push(start);
      while(!que.empty()){
          int n=que.size();
             int flag=0;
         
          for(int i=0;i<n;i++){
            auto ele=que.front();
          que.pop();
          if(ele->left && !vis[ele->left]){
              que.push(ele->left);
             vis[ele->left]=1;
             flag=1;
          }
           if(ele->right && !vis[ele->right]){
              que.push(ele->right);
             vis[ele->right]=1;
             flag=1;
          }
           if(mp[ele] && !vis[mp[ele]]){
              que.push(mp[ele]);
             vis[mp[ele]]=1;
             flag=1;
          }
       
              
          }
          if(flag)ans++;
         
      }
      return ans;
  }
  Node* parents(Node*root,int target,map<Node*,Node*>&mp){
      Node* res=NULL;
      if(!root)return NULL;
      queue<Node*>que;
      mp[root]=NULL;
      que.push(root);
      while(!que.empty()){
          auto cur=que.front();
           que.pop();
          if(cur->data==target)res=cur;
         
          if(cur->left){
              que.push(cur->left);
              mp[cur->left]=cur;
          }
          if(cur->right){
              que.push(cur->right);
              mp[cur->right]=cur;
          }
      }
      return res;
  }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*,Node*>mp;
        Node* naya=parents(root,target,mp);
        // return naya->data;
        return(burn(naya,mp));
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends
