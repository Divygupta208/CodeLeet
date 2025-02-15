class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

         sort(begin(nums), end(nums));

        int result = 0 ;
        int l = 0 ;
        int n =  nums.size();
        long curr_sum = 0 ;
        for(int r = 0 ; r<nums.size() ; r++){
              
               curr_sum += nums[r];

              long target = nums[r]; 
              

              while((r-l+1)*target - curr_sum > k){
                curr_sum -= nums[l];
                l++;
              }


              result = max(result , r-l+1 );

        }
      return result ;
    }

};