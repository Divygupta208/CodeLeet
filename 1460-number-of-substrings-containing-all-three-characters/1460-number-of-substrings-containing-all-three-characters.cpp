class Solution {
public:
    int numberOfSubstrings(string s) {
        
        unordered_map<char , int> mp;

        int i = 0;
        int j = 0;
        long long count = 0;
        int n = s.size();
        
        while(j<n){
            
            mp[s[j]]++;

            while(mp['a'] > 0 && mp['b'] >0 && mp['c']>0){ 
               count += n-j; 
               mp[s[i]]--; 
               i++;
            }
             
            j++;
        }

     return count ;
    }
};