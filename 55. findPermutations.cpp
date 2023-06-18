#include <bits/stdc++.h>
// void helper(string &s, vector<string>&ans, string &ss,int arr[]) {
//   if (ss.size() == s.size()) {
//       ans.push_back(ss);
//       return;
//   }
//   for(int i=0;i<s.size();i++){
//     if (arr[i] == 0) {
//         ss.push_back(s[i]);
//         arr[i]=1;
//         helper(s,ans,ss,arr);
//         ss.pop_back();
//         arr[i]=0;
//     }
//   }
// }
void swap(string &s, int i, int j) {
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
void helper2(string &s, int index, int n, vector<string> &ans) {
  if (index == n) {
      ans.push_back(s);
      return;
  }
  for (int i = index; i < n; i++) {
      swap(s,index,i);
      helper2(s,index+1,n,ans);
      swap(s,index,i);
  }
}
vector<string> findPermutations(string &s) {
    vector<string>ans;
    helper2(s,0,s.size(),ans);
    return ans;
    // Write your code here.
    // int arr[s.size()+1] = {0};
    // vector<string>ans;
    // string str;
    //  helper(s,ans,str,arr);
    //  return ans;
}
