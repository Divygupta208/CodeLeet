class Solution {
public:
    
    string reverse(string s){

        int l = 0;
        int h = s.size()-1;

        while(l<=h){
           swap(s[l] , s[h]);
           l++;
           h--;
        }
        return s;
    }

    string processStr(string s) {
        
        string ans = "";
        for(auto c : s){
           
         if(c>= 'a' && c<='z'){
            ans+= c ;
         }else if(c == '*' && ans.size()>0){
            ans.pop_back();
         }else if(c == '#' && ans.size() >0){
             ans.append(ans);
         }else if(c == '%' && ans.size() > 0){
              ans = reverse(ans);
         }
          

        }
           return ans;
    }
};