#include <bits/stdc++.h>
void helper(string &s, vector<string>&ans, string &ss,int arr[]) {
  if (ss.size() == s.size()) {
      ans.push_back(ss);
      return;
  }
  for(int i=0;i<s.size();i++){
    if (arr[i] == 0) {
        ss.push_back(s[i]);
        arr[i]=1;
        helper(s,ans,ss,arr);
        ss.pop_back();
        arr[i]=0;
    }
  }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    int arr[s.size()+1] = {0};
    vector<string>ans;
    string str;
     helper(s,ans,str,arr);
     return ans;
}
