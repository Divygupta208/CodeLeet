class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 , mid = 0;
        int hi = nums.size()-1;

        while(mid<=hi){

            if(nums[mid]==0){
                swap(nums[low] , nums[mid]);
                mid++;
                low++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid] , nums[hi]);
                
                hi--;
            }
        }
     
   
    }
};