class Solution {
public:
  
    int numberOfPoints(vector<vector<int>>& nums) {
        
        sort(nums.begin()  , nums.end() , [](auto a , auto b){ return a[0]<b[0] ;});
        
          int current = 0, numberOfPoints = 0;
    for (vector<int>& car : nums) {
      if (car[0] > current)
        numberOfPoints += car[1] - car[0] + 1;
      else if (car[1] > current)
        numberOfPoints += car[1] - current;

      current = max(current, car[1]);
    }

    return numberOfPoints; 
        
        
    }
};