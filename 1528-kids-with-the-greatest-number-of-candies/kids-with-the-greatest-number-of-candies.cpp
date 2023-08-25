class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans ;
         int maxx = INT_MIN;
        for(int i = 0 ; i<=candies.size()-1 ; i++){
            maxx = max(maxx , candies[i]);
        }
        
         for(int i = 0 ; i<=candies.size()-1 ; i++){
           if((candies[i]+extraCandies) >= maxx){
             ans.push_back(true);
           }else{
               ans.push_back(false);
           }
        }

      return ans ;
    }

};