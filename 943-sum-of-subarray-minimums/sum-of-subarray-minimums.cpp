class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
         int n = arr.size();

        //pre computation
        int NSOE[n]; // next smaller or equal
        int PS[n];   // previous smaller
        stack<int> st;
        for (int i=0; i<n; i++) {
            while (!st.empty() && arr[i] <= arr[st.top()]) {
                NSOE[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty()) {
            NSOE[st.top()] = n;
            st.pop();
        }
        for (int i=n-1; i>=0; i--) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                PS[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty()) {
            PS[st.top()] = -1;
            st.pop();
        }

        // core logic
        long long ans = 0, mod = 1e9 + 7;
        for (int i=0; i<n; i++) {
            long long contribution = (((NSOE[i]-i)%mod) * ((i-PS[i])%mod ) * (arr[i]%mod))%mod;
            ans = ((ans%mod) + (contribution%mod)) % mod ;
        }
        return ans;
      
    }
};