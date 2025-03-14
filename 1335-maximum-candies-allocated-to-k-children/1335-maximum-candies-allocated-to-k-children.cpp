class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        long long sum = 0;
         for(auto c : candies){
            sum += c;
         }

        if(sum < k){
            return 0;
        }  

        int l = 1;
        int h = sum/k;
         int res = 0;

        while(l<=h){
           
           int mid = (l+h)/2;

            long long countofpiles = 0;
            for(auto c : candies){
                if(c >= mid){
                   countofpiles += c/mid;
                }
               
            }
           
           if(countofpiles >= k){
               res = mid;
               l = mid+1;  

           }else{
               h = mid-1;
           }


        }
        return res;
    }
};