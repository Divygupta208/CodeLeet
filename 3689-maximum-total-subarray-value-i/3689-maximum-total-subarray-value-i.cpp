class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        
        int m2 = *max_element(nums.begin() , nums.end());
        int m1 = *min_element(nums.begin(), nums.end());

        return (long long)(m2 - m1) * k;
    }
};