#include <bits/stdc++.h>

void sortStack(stack<int> &stack)

{

// Write your code here

int n = stack.size();

vector<int> v;

for(int i = 0; i < n; i++)

{

v.push_back(stack.top());

stack.pop();

}

sort(v.begin(), v.end());

 

for(int i = 0; i < n; i++)

{

stack.push(v[i]);

}

}
