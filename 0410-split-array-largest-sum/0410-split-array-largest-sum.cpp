class Solution {
public:
    //painter ki same
     int countStudent(vector<int>& nums , int pages){
        
        int student =  1 ;
        long long pagesStudent = 0;
        for(int i = 0 ; i<nums.size(); i++){
            
            if(pagesStudent+ nums[i] <= pages){
                pagesStudent += nums[i];
            }else{
                student++;
                pagesStudent = nums[i];
            }
        }
        return student;
    };
    
  
    int splitArray(vector<int>& nums, int k) {
        
     
        int low = *max_element(nums.begin() , nums.end());
        
        int high = accumulate(nums.begin() , nums.end() , 0);
        
        while(low<=high){
            
            int mid = (low+high)/2;
            
            int students = countStudent(nums , mid);
            
            if(students> k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        return low ;
      
    }
};