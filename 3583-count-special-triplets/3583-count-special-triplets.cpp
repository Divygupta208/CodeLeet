#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

int specialTriplets(vector<int>& nums) {
    const int MOD = 1000000007;
    unordered_map<int,long long> left, right;

    for (int x : nums) right[x]++;

    long long ans = 0;

    for (int j = 0; j < (int)nums.size(); ++j) {
        int x = nums[j];
        right[x]--;

        long long doubleX = 1LL * x * 2;
        ans = (ans + (left[doubleX] * right[doubleX]) % MOD) % MOD;

        left[x]++;
    }

    return (int)ans;
}

};
