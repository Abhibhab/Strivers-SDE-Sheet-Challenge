
// vector<vector<int>>ans;
void helper(int i, int n, vector<int> &arr, int k, vector<int> &sub,
vector<vector<int>>&ans) {
 

  if (i == n ) {
      if(k==0) ans.push_back(sub);

      return;
  }
    

 
    sub.push_back(arr[i]);

    helper(i + 1, n, arr, k - arr[i],sub ,ans);\
    sub.pop_back();

      helper(i+1,n,arr,k,sub,ans);
  
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>sub;
    helper(0,n,arr,k,sub,ans);
    return ans;
}
