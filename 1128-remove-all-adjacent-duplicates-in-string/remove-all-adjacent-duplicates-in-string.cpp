class Solution {
public:
    string removeDuplicates(string s) {
        
        
        stack<char> st ;
        string ans = "";
        for(auto c : s){
            
            
            if(!st.empty() && c == st.top()){
                
                  st.pop();
                
             }else{
                st.push(c);
            }
            
            
            
        }
        
        while(!st.empty()){
            
            ans = st.top()+ans;
            st.pop();
        }
        
        return ans;
    }
};