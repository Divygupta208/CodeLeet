class Solution {
public:
    long long countVowels(string words) {
          long long ans=0;
        for(int i=0;i<words.size();i++){
            if(words[i]=='a' || words[i]=='e' || words[i]=='i' || words[i]=='o' || words[i]=='u'){
                ans+=(i+1)*(words.size()-i);
            }
        }
        return ans;
    }
};