class Solution {
public:
    bool isIdealPermutation(vector<int>&nums ) {
   int n = nums.size();
    int max_value = -1;

    for (int i = 0; i < n - 2; ++i) {
        max_value = max(max_value, nums[i]);
        if (max_value > nums[i + 2]) {
            return false;
        }
    }

    return true;
    }
};