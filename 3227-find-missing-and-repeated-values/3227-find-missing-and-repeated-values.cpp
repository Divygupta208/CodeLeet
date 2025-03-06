class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
         
         unordered_set<int> st;
         int a , b ;
          int n = grid.size();
          int all = n*n;
          int total = (all*(all+1))/2;
          int local = 0 ;

         for(int i = 0 ; i<grid.size()  ; i++){

            for(int j = 0 ; j< grid[0].size()  ; j++)
{                local += grid[i][j];
                 if(st.find(grid[i][j])!= st.end()){
                    a = grid[i][j];
                    local -= grid[i][j];
                 }

                 st.insert(grid[i][j]);

}         }
           return {a , total-local};
    }
};