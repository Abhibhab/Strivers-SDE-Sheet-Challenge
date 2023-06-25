#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here]
    int maxi=INT_MAX;
    string str="";
    for(auto it:arr){
        if(it.size()<maxi){
            maxi=it.size();
            str=it;
        }
    }
    int j=0;
    string ans="";
    while(j<maxi){
        for(int i=0;i<n;i++){
            if(arr[i].at(j)!=str.at(j))return ans;
        }
        ans+=str.at(j);
        j++;
        
    
    }
    return ans;
}


