class Solution {
public:


void merge(vector<int> &nums , int l , int mid , int hi){

    vector<int> temp;

    int left = l;
    int right = mid+1;

    while(left<= mid && right <= hi){

       if(nums[left]<= nums[right]){
           temp.push_back(nums[left]);
           left++;
       }else{
           temp.push_back(nums[right]);
           right++;
       }
    }
       while(left<=mid){
           temp.push_back(nums[left]);
           left++;
       }
       while(right<=hi){
           temp.push_back(nums[right]);
           right++;
       }
     for (int i = l; i <= hi; i++) {
        nums[i] = temp[i - l];
    }
};

     void sort(vector<int> &nums , int l , int hi){
         if(l>=hi) return ;
          int mid = (l+hi)/2;
         sort(nums , l , mid);
         sort(nums , mid+1 , hi);
         merge(nums , l , mid , hi);

     };
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums , 0 ,n);
        return nums;
    }
};