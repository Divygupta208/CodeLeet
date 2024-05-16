class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l = 0 ; 
        int h = arr.size()-1;
        int maxarea = INT_MIN;
        
        while(l<h){
            
            int area = min(arr[l] , arr[h])*(h-l);
            
            maxarea = max (maxarea , area);
            
            if(arr[l]<arr[h]){
                l++;
                
            }else{
                h--;
            }
            
        }
        return maxarea;
    }
};