#include <bits/stdc++.h> 
// vector<int>ans;
void helper(int i ,vector<int>&num,int sum,vector<int>&ans){
  if (i == num.size()) {
      ans.push_back(sum);
      return;
  }
  helper(i+1,num,sum,ans);

  helper(i+1,num,sum + num[i],ans);
  
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.v
    vector<int>ans;

    helper(0,num,0,ans);
sort(ans.begin(),ans.end());
    return ans;
}
