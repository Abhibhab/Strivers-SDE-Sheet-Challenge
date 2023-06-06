#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int profit=0,mini=prices[0];
    for (int i = 0; i < prices.size(); i++) {
        mini=min(mini,prices[i]);
        profit=max(profit,prices[i]-mini);
      
    

    }
    return profit;
}
