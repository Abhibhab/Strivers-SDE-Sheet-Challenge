#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   map<int,int>mp;
   for(int i=0;i<n;i++)mp[arr[i]]++;
   int i=0;
   for (auto it : mp) {
     for (int j = 0; j < it.second; j++) {
        arr[i]=it.first;
        i++;
     }
   }
}
