class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
      int can=capacity;
        int step=0;
    
        for(int i=0;i<plants.size();i++){
            if(plants[i]>can){
                step+=2*i;
                can=capacity;
            }
            can-=plants[i];
            step++;
            }
        
        return step;
        
    }
};