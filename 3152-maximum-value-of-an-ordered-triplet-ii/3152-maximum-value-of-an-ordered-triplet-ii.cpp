class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
         long long maxdiff = 0;
         long long maxi = 0;
         int n = nums.size();

          long long  result = 0;
         for(int i = 0 ; i<n ; i++){
            result = max(result , (maxdiff*nums[i]));
              maxdiff = max(maxdiff,maxi-nums[i]);
              maxi = max(maxi , (long long)nums[i]);
         }

        
       
       
  return result<0 ? 0 : result;
    }
};