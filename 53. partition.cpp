#include <bits/stdc++.h>

bool pal(string str, int start, int end) {

  while (start <= end) {
      if(str[start++]!=str[end--])return false;
  }
  return true;
}
vector<vector<string>>ans;
void helper(int index, int n, string &s, vector<string> &vec) {
  if (index == n) {
    ans.push_back(vec);
    return;
  }
for (int i = index; i < n; i++) {
  if (pal(s, index, i)) {
      vec.push_back(s.substr(index,i-index+1));
      helper(i+1,n,s,vec);
      vec.pop_back();
  }
}
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string>vec;
    helper(0,s.size(),s,vec);
    return ans;
}
