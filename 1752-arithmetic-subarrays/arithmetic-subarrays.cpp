class Solution {
public:
    
    bool check(vector<int>& arr){
        
        int n = arr.size();
        
        unordered_set<int> st;
        
        int minE = INT_MAX;
        int maxE = INT_MIN;
        
        for(int i = 0  ; i<n ; i++){
            minE = min(minE , arr[i]);
            maxE = max(maxE , arr[i]);
            st.insert(arr[i]);
        }
        
        if( (maxE-minE)%(n-1) != 0) return false;
        
        int d = (maxE-minE)/(n-1);
        
        int curr = minE+d;
        
        while(curr<maxE){
            
        if(st.find(curr) == st.end()){
            
            return false ;
            
        }
            
            curr = curr+d;
            
        }
        
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int i = 0 ;
            vector<bool>ans ;
        while(i<l.size()){
       int right = r[i];
        int left = l[i];
    
        vector<int>arr(begin(nums)+left , begin(nums)+right+1);
        
        
        bool isAp = check(arr);
        
        ans.push_back(isAp);
        
        i++;
        
        }
        return ans;
       
    }
};