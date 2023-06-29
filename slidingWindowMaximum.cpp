// include <>
#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    deque<int>dq;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
            // removing out of bound i.e out of window length index from deque
      if(!dq.empty() && dq.front() == i-k)dq.pop_front();
      
      // removing all indexes from deque whose values are less than the current index value
      while(!dq.empty() && nums[dq.back()] <= nums[i])dq.pop_back();

      // inserting the current at back of deque
      dq.push_back(i);

      // inserting the max element in ans vector
      if(i >= k-1)ans.push_back(nums[dq.front()]);
        // if(!dq.empty() && dq.front()==i-k)dq.pop_front();
        // while(!dp.empty() && nums[dq.back()]<=nums[i])dq.pop_back();
        // dq.push_back(i);
        // if(i>=k-1)
        // vec.push_back(dq.front());
    }
    return ans;
}