#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


    int specialTriplets(vector<int>& nums) {
       const int MOD = 1000000007;
        const int MAXV = 100005;
        vector<long long> left(MAXV, 0), right(MAXV, 0);
        
       
        for (int x : nums) ++right[x];
        
        long long ans = 0;
        for (int j = 0; j < nums.size(); ++j) {
            int x = nums[j];
            right[x]--;                     
            
            int doubleX = x * 2;
            if (doubleX < MAXV) {
                ans = (ans + left[doubleX] * right[doubleX]) % MOD;
            }
            
            left[x]++;                     
        }
        return ans;
    }
};
