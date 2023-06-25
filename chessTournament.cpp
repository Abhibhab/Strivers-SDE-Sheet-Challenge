#include <bits/stdc++.h>
// #define int long long
bool check(int focus, vector<int> &positions, int n, int c) {
	int pre=positions[0];
	int count=1;
	for(int i=1;i<n;i++){
		if(positions[i]-pre>=focus){
			count++;
			pre=positions[i];
		}
	}
	return count>=c;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(),positions.end());
	int low=0,high=positions[n-1]-positions[0];
	while(low<=high){
		int mid=low+(high-low)/2;
		if(check(mid,positions,n,c)){
			low=mid+1;
		}else{
			high=mid-1;
		
		}
	}
	return high;

}
