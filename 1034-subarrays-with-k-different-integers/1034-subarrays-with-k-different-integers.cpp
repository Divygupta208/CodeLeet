class Solution {
public:

    //the point is to calculate all the subarrays with a speacific k value and then finding with k-1 , then substracting bopth to get only for particular k value because we can only find value for <=k using j-i+1 , sliding window 

    int sliding(vector<int>& nums , int k){

        int i = 0 ;
        int j = 0 ;
        int n =  nums.size();
        unordered_map<int , int> mpp;
        int result = 0 ;
        while(j<n){
           mpp[nums[j]]++;

           while(mpp.size() >k){
            mpp[nums[i]]--;
            
            if(mpp[nums[i]] == 0){
                mpp.erase(nums[i]);
            }
            i++;
           }
           result += (j-i)+1;
           j++;
        }
        return result;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return sliding(nums , k)-sliding(nums, k-1);
    }
};