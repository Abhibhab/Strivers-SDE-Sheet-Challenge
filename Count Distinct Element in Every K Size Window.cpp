#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    map<int,int>mp;
    vector<int>ans;
    int i=0,j=0;
    while (j < arr.size()) {
        mp[arr[j]]++;
        if((j-i)+1==k){  
            ans.push_back(mp.size());          
            
            mp[arr[i]]--;
            if(mp[arr[i]]==0)mp.erase(arr[i]);
            i++;
            
            j++;
        } else {
          j++;
        }
    }
    return ans;
}
