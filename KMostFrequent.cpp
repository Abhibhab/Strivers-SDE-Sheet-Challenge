#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    priority_queue<pair<int,int>>pq;
    map<int,int>mp;
    for(auto it:arr)mp[it]++;
    for(auto it:mp){
        pq.push({it.second,it.first});
        // if(pq.size()>k){
        //     pq.pop();
        // }
    }
    vector<int>ans;
    for(int i=0;i<k;i++){
        ans.push_back(pq.top().second);
        pq.pop();

    }
     sort(ans.begin(),ans.end());
    // while(!pq.empty()){
    //     ans.push_back(pq.top().second);
    //     pq.pop();
    // }
    return ans;

}
