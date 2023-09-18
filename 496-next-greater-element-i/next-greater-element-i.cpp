class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        stack<int>s ;
        unordered_map<int,int> mp;
        
        s.push(nums2[nums2.size()-1]);
       mp[nums2[nums2.size()-1]] = -1;
       
        for(int i = nums2.size()-2 ; i >=0 ; i--){
            while( !s.empty() && s.top()<nums2[i]){
                s.pop();
            }
            
            mp[nums2[i]] = s.empty() ? -1 : s.top();
            
             s.push(nums2[i]);
            
            
        }
        
        for(auto i : nums1){
            
            if(mp.find(i) != mp.end()){
                 ans.push_back(mp[i]);
            }
        }
        
        
        return ans;
    }
};