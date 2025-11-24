class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
    vector<bool> result;
    int remainder = 0;

    for (int bit : nums) {
      
        remainder = (remainder * 2 + bit) % 5;

      
        result.push_back(remainder == 0);
    }

    return result;
}

};