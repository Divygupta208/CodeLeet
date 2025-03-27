class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       
       vector<int> ans ;
       unordered_set<int> st;
         
        int i = 0 ;
        int j = 0;
        int n = 0 ;
        if(nums1.size() < nums2.size()){
              n = nums1.size();
        }else{
            n = nums2.size();
        }
        
         
         for(auto &i : nums1){
            st.insert(i);
         }

         for(auto &c : nums2){
            if(st.count(c)){
                ans.push_back(c);
                st.erase(c);
            }
         }
         
 return ans ;
    }
};