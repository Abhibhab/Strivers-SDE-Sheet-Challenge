// #include<bits/stdc++.h>
// vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
// {
// 	// Write your code here.
// 	priority_queue<int,vector<int>>maxheap(arr.begin()arr.end());
// 	priority_queue<int,vector<int>,greater<int>>minheap(arr.begin(),arr.end());
// 	for(int i=0;i<k-1;i++){
// 		minheap.pop();
// 		maxheap.pop();

// 	}
// 	return{minheap.top(),maxheap.top()};
// }
#include<bits/stdc++.h>

vector<int> kthSmallLarge(vector<int> &nums, int n, int k)
{
	sort(nums.begin(), nums.end());
	return {nums[k-1], nums[n-k]};
}
