#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=0;
    long long currsum=arr[0];
    for (int i = 1; i < n; i++) {
        
        currsum+=arr[i];
        sum=max(sum,currsum);
        if(currsum<0)currsum=0;
       

     

    }
    return sum;
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}
