class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1){
            return s;
        }
        string ans = "";
        int n = s.size();

        for(int i = 0; i<numRows ; i++){
            
            int idx = i;
            int niche = 2*(numRows-1-i);
            int upar = 2*i;
            bool goingup = true;

            while(idx < n){
                ans += s[idx];
               
                if(i == 0){
                    idx += niche;
                }else if(i == numRows-1){
                    idx+= upar;
                }else{

               
               if(goingup){
                 idx += niche;
               }else{
                idx += upar;
               }
                
                goingup = !goingup;
              }

            }

        }
           return ans;
    }
};