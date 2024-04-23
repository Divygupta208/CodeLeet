class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int lsum = 0 , rsum=0 , maxsum = 0 ;
        
        for(int i = 0 ; i<k ; i++){
            
            lsum = lsum+ nums[i];
            
        }
        
        maxsum = lsum;
        
        int right = n-1;
        
        for(int i = k-1 ; i>=0 ; i--){
            
            lsum = lsum - nums[i];
            
            rsum = rsum + nums[right];
            
            right--;
            
             maxsum = max(maxsum , lsum+rsum);
            
        }
        
       
        
        return maxsum ;
    }
};