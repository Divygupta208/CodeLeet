class Solution {
public:
    string smallestSubsequence(string s) {
        
        vector<bool> seen(26 , false);
        vector<int> last(26 , -1);
        string ans = "";
        stack<int> st;
        
        for(int i = 0 ; i< s.length() ; i++){
            
            last[s[i]-'a'] = i;
        }
      
        
        for(int i = 0 ; i< s.length() ; i++){
            
            char ch = s[i];
            int idx = ch-'a';
            if(seen[idx] == true) continue;
            
            while(!st.empty()  && ch < st.top() && last[st.top() - 'a'] > i ){
               
                seen[st.top()-'a'] = false;
                 st.pop();
                
            }
            st.push(ch);
            seen[idx] = true;
            
        }
        
        while(!st.empty()){
            
            ans += st.top();
            st.pop();
            
        }
        
        reverse(ans.begin() , ans.end());
        
        return ans ;
    }
};