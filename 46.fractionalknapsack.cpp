#include <bits/stdc++.h>
bool comp(pair<int, int> &a, pair<int, int> &b) {
    return ((double)a.second/a.first)>((double)b.second/b.first);
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comp);
    double maxp=0;
    int curr=0;
    for (auto it : items) {
      if (it.first + curr <= w) {
          curr+=it.first;
          maxp+=it.second;
      }else{
          maxp+=double((double)it.second*(w-curr))/it.first;
          break;
      }
    }
    return maxp;
}
