#include <bits/stdc++.h>


string kthPermutation(int n, int k) {
    
    int fact = 1;

    
    vector<int> numbers;
    for(int i = 1; i < n; i++){
        fact = fact * i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    // for 0 base indexing
    k = k-1;
    string ans = "";
    while(true){
        ans += to_string(numbers[k/fact]);
        // erasing the picked number
        numbers.erase(numbers.begin() + k/fact);

        if(numbers.size() == 0){
            break;
        }

        // re calculating k
        k = k % fact;
        fact = fact / numbers.size();
    }

    return ans;
}
