 #include <bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   vector<int>nsr,nsl;
   stack<int>st1,st2;
   int n=heights.size();
   for(int i=0;i<n;i++){
     while(!st1.empty() and heights[st1.top()]>=heights[i])st1.pop();
     if(st1.empty())nsl.push_back(-1);
     else nsl.push_back(st1.top());
     st1.push(i);

   }
      for(int i=n-1;i>=0;i--){
     while(!st2.empty() and heights[st2.top()]>=heights[i])st2.pop();
     if(st2.empty())nsr.push_back(-1);
     else nsr.push_back(st2.top());
     st2.push(i);

   }
   reverse(nsr.begin(),nsr.end());
   int ans=INT_MIN;
   for(int i=0;i<n;i++){
     if(nsr[i]==-1)nsr[i]=n;
     int rem=((nsr[i]-nsl[i])-1)*heights[i];
     ans=max(ans,rem);
   }
   return ans;


 }
