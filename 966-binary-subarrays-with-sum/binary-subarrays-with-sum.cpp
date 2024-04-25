class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countSubarray(nums , goal) - countSubarray(nums , goal-1);
    }
    
    int countSubarray(vector<int>& nums, int goal){
        int l = 0 , r=0 , sum =0 , count = 0 ;
        
        if(goal < 0) return 0 ;
        while(r<nums.size()){
            
            sum = sum + nums[r];
            
            while(sum > goal){
                sum = sum-nums[l];
                l++;
            }
            
            count = count + (r-l+1);
            r++;
            
        }
        
        return count ;
    }
};