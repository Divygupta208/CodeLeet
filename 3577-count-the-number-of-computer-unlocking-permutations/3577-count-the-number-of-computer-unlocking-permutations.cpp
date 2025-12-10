class Solution {
public:
    int mod = 1000000007;
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
         long long ans = 1;
         
          for(int i = 1 ; i<n ; i++){
               if(complexity[0]>= complexity[i]){
                return 0;
               }

          }

        for(int i = 1 ; i<n ; i++){
              
              ans = (ans*i)%mod;
              
          }


          return (int)ans;
    }
};