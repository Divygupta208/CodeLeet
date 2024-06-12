class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();
        int totalkamayi = accumulate(gas.begin() , gas.end() , 0);
        int totalkharcha = accumulate(cost.begin() , cost.end(), 0);

        if(totalkamayi < totalkharcha){
            return -1 ;
        }
        
        int result = 0;
        int total = 0 ;

        for(int i = 0 ; i<n ; i++){
             total += gas[i]-cost[i];

             if(total < 0){
                result = i+1 ;
              total = 0;
             }
        }

        return result ;
    }
};