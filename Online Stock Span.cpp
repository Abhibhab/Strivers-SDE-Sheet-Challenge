#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<price.size();i++){
        while(!st.empty() && price[st.top()]<=price[i])st.pop();
        if(st.empty())ans.push_back(i+1);
        else ans.push_back(i-st.top());
        st.push(i);


    }
    return ans;
}
