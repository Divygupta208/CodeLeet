class Solution {
public:

    bool allZero(vector<int> &counter){
       for(auto &k : counter){
        if(k != 0 ){
            return false;
        }
       }
       return true;

    }
    vector<int> findAnagrams(string s, string p) {
        
        int n = s.size();
       vector<int> counter(26,0);

        vector<int> ans ;
       
       for(auto &i : p){
        counter[i-'a']++;
       }

       int i = 0 ;
       int j = 0 ;

       while(j<n){
            
          counter[s[j]-'a']--;
          int k = p.size();
          if(j-i+1 == k){
             if(allZero(counter)){
                ans.push_back(i);
             }
              counter[s[i]-'a']++;
          i++;
          }
          
         j++;


       }

        return ans ; 
    }
};