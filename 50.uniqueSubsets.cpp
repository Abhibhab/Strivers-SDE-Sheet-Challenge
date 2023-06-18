#include<bits/stdc++.h>
#define ll int
#define pb push_back
#define vll vector<ll>
#define vvll vector<vll>

void fillAllSubsets(ll pos, vll subset , vvll& ans, vll& arr){
    if(pos==arr.size()){
        if(!subset.empty()){
            sort(subset.begin(), subset.end());
            ans.pb(subset);   
        }
        return ;
    }
    fillAllSubsets(pos+1, subset, ans, arr);
    subset.pb(arr[pos]);
    fillAllSubsets(pos+1, subset, ans, arr);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vvll ans;
    vll subset={};
    fillAllSubsets(0, subset, ans, arr);
    sort(ans.begin(), ans.end());
    
    vvll uniqueAns;
    uniqueAns.pb(ans[0]);
    for(ll i=1;i<ans.size();i++){
        if(ans[i]!=uniqueAns.back()){
            uniqueAns.pb(ans[i]);
        }
    }
    return uniqueAns;
}
