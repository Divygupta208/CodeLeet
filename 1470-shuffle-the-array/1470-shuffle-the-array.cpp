class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int i = 0 , j = n , k=0 ;
        bool f =  true;
        while(i<=n && j <2*n){
            if(f){
             ans[k] = nums[i];
             k++;
             i++;
             f = false;
            }else{
               ans[k] = nums[j];
               j++;
               k++;
               f = true; 
            }
        }
       
       return ans ;

    }
};