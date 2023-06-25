// #include <bits/stdc++.h> 
// // bool check(vector<int>&time,int n,int m,long long mid){
// // 	long long days=1;		
// // 	long long sub=0;
// // 	for(int i=0;i<m;i++){
// // 		if(sub+time[i]<=mid){
// // 			sub+=time[i];
// // 		}else{
// // 			days++;
// // 			sub=time[i];
// // 		}


// // 	}
// // 	return days<=n;




// // }

// bool valid(int n, int m,vector<int> time,long long a)

// {

//     int cnt=0;

//     long long sum=0;

//     for(int i=0;i<m;i++)

//     {

//         if(sum+time[i]<=a)

//           sum+=time[i];

//         else

//         {

//             cnt++;

//             sum=time[i];

//         }

//     }

 

//     return  cnt<n;

 

// }
// long long ayushGivesNinjatest(int n, int m, vector<int> time) 
// {	
// 	// Write your code here.
// 	long long low=*max_element(time.begin(),time.end());
// 	long long high=accumulate(time.begin(),time.end(),0);
// 	// long long ans=0;
// 	while(low<=high){
// 		long long mid=low+(high-low)/2;
// 		if(check(time,n,m,mid)){
// 			// ans=mid;
// 			high=mid-1;
// 		}else{
// 			low=mid+1;
// 		}
// 	}
// 	return low;

// }
#include <bits/stdc++.h> 

 

bool valid(int n, int m,vector<int> time,long long a)

{

    int cnt=0;

    long long sum=0;

    for(int i=0;i<m;i++)

    {

        if(sum+time[i]<=a)

          sum+=time[i];

        else

        {

            cnt++;

            sum=time[i];

        }

    }

 

    return  cnt<n;

 

}

 

long long ayushGivesNinjatest(int n, int m, vector<int> time) 

{   

    // Write your code here.

    long long sum=0;

    int maxi=0;

    for(auto it:time)

    {

        sum+=it;

        maxi=max(maxi,it);

    }

 

    long long ans=0;

    long long low=maxi,high=sum;

    while(low<=high)

    {

        long long mid=(low+high)/2;

        if(valid(n,m,time,mid))

        {

            ans=mid;

            high=mid-1;

        }

        else

          low=mid+1;

    }

    return ans;

}
