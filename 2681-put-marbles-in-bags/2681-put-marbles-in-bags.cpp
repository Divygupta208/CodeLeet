class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        int m = weights.size()-1;
        vector<int> pairSum(m , 0);


        for(int i = 0 ; i<m ; i++){

            pairSum[i] = weights[i] + weights[i+1];
        }

        sort(begin(pairSum) , end(pairSum));

        long maxsum = 0;
        long minsum = 0;
        for(int i = 0 ; i<k-1 ; i++){
           minsum += pairSum[i];
           maxsum+= pairSum[m-1-i];
        }


        return maxsum-minsum;
    }
};