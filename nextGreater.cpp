#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    stack<int>st;
    vector<int>ans;
    // st.push(-1);
    for(int i=n-1;i>=0;i--){
    //   if (st.empty()) {
    //     ans.push_back(-1);
    //     continue;
    //   }
        int cur=arr[i];
        while( !st.empty() and st.top()<=cur){
            st.pop();
        }
        if(st.empty())ans.push_back(-1);
          else ans.push_back(st.top());


     st.push(arr[i]);

        
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
