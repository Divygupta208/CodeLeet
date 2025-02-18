class Solution {
public:
    string smallestNumber(string pattern) {
        
        int n = pattern.length();
        stack<char> st;
        string ans = "";
        int counter = 1;

     for(int i = 0 ; i<= n+1 ; i++){
       
       st.push(counter+'0');
       counter++;

       if(i == n || pattern[i] == 'I'){
         
         while(!st.empty()){
           ans.push_back(st.top());
        st.pop();
         }
       
       }

     }

     return ans ;

    }
};