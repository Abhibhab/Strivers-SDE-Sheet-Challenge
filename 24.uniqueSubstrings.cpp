#include <bits/stdc++.h> 
int uniqueSubstrings(string str)
{
    unordered_map<int,int>mp;
    int ans=0;
    int i=0,j=0;
    while (j < str.size()) {
      if (mp.find(str[j]) != mp.end()) {
          i=max(i,mp[str[j]]+1);

      }
      mp[str[j]]=j;
      ans=max(ans,j-i+1);
      j++;
    }
    return ans;
}
