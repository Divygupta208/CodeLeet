class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int p = lower_bound(nums.begin() , nums.end() , 1) - begin(nums);
        int ne = lower_bound(nums.begin() , nums.end() , 0) - begin(nums);
        int res = max((n-p) , ne);
        return res;
    }
};