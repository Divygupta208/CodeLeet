class Solution {
public:

    bool canPlace(vector<int>& stalls , int dist , int cows){
        int n = stalls.size();
         int count = 1 ;
          int last = stalls[0];
        for(int i = 1 ; i<n ; i++){

            if(stalls[i]-last >= dist){
                last = stalls[i] ;
                count++;
            }

            if(count>=cows){
                return true;
            }
            
        }

        return false ;
    }
    
    int maxDistance(vector<int>& stalls, int cows) {
        int n = stalls.size();
        sort(stalls.begin() , stalls.end());
        int min = 0;

        int high =  stalls[n - 1] - stalls[0];

        while(min<=high){
               int mid = (min+high)/2;
            if(canPlace(stalls , mid , cows) == true){
                  min = mid+1;
            }else{
                high = mid-1;
            }
        }
           
           return high ;
    }
};