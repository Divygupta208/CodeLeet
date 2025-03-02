class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>> ans;
       unordered_map<int , int> mpp;

       for(auto arr : nums1){
           mpp[arr[0]] = arr[1];  
       }

       for(auto arr : nums2){
             
             if(mpp.find(arr[0]) != mpp.end()){

                mpp[arr[0]] = mpp[arr[0]] + arr[1];
             }else{
                    mpp[arr[0]] = arr[1];
             }

            

       }

      for(auto mp : mpp){
         
        ans.push_back({mp.first , mp.second});
      }

      sort(ans.begin() , ans.end());
     
     return ans;

    }
};