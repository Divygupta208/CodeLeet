class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int mex = 0;

      for(auto &num : nums){
           mp[(((num%value)+value)%value)]++;
      }

   
        while(mp[mex%value] > 0){
           mp[mex%value]--;

           mex++;

        }
    
      
return mex ;

    }
};