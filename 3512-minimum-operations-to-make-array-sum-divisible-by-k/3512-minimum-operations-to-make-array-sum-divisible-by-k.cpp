class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int sum = 0;

        for(int& num : nums){
            sum += num;
        }
         
         if(sum < k){
            return sum;
         } 

          if(sum % k == 0){
            return 0;
          }else{
            return sum%k;
          }
              

    }
};