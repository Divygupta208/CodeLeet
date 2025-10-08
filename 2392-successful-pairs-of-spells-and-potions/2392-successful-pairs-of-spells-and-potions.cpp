class Solution {
public:
   
    int lowerBound(int l , int r , vector<int> &potions , int minPotion){
        
        int pos = -1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            
            if(potions[mid] >= minPotion){
                pos = mid;
                r= mid-1;
            }else{
                l = mid+1;
            }
            
        }
        
        return pos;
    }
    
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int> result ;
        sort(potions.begin() , potions.end());
        int m = spells.size();
        int n = potions.size();
        int maxpotion = potions[n-1];
        
        for(int i = 0 ; i<m ; i++){
            
            long long minPotion = ceil((1.0*success)/spells[i]);
            
            if(minPotion > maxpotion){
                result.push_back(0);
                continue;
            }
            
            
            int index = lowerBound(0 , n-1 , potions , minPotion);
            
            int count = n-index;
            
            result.push_back(count);
        }
    
        return result;
    }
    
};