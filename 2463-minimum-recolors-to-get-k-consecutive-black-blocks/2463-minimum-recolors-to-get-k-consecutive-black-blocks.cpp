class Solution {
public:
    int minimumRecolors(string blocks, int k) {
    int n = blocks.size();
    int minOp = k; 
    int w = 0;      

 
    for (int i = 0; i < k; i++) {
        if (blocks[i] == 'W') w++;
    }
    minOp = w;  

    // Sliding window logic
    for (int i = 1; i <= n - k; i++) {
        // Remove outgoing element
        if (blocks[i - 1] == 'W') w--;

        // Add incoming element
        if (blocks[i + k - 1] == 'W') w++;

        minOp = min(minOp, w);  // Track the minimum
    }

    return minOp;
    }
};