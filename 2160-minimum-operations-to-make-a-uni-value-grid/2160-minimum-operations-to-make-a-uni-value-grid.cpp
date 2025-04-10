class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
         
         vector<int> nums;
         int m = grid.size();
         int n = grid[0].size();

         for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                nums.push_back(grid[i][j]);
            }
         }


         sort(begin(nums) , end(nums));
         
         int target = nums[(m*n)/2];
         int result = 0;
         for(auto& num : nums){
             if(num %x != target%x){
                return -1;
             }
           result += abs(target-num)/x;



         }

  return result;
    }
};