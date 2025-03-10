class Solution {
public:
    int numSub(string s) {
         int i=0;
        int j=0;
        int mod=1e9+7;
         int cnt=0;
        while(j<s.size()){

            while(s[j]=='0'){
                j++;
            }
            i=j;
            while(s[j]=='1'){
                cnt=(cnt+j-i+1)%(mod);
                j++;
            }

        }
        return cnt;

    }
};