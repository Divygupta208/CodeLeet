class Solution {
public:
  int numberOfAlternatingGroups(vector<int>& colors, int k) {
    int n = colors.size();
        int count = 0;
        int consecutiveCount = 0;

        // First window check
        for (int i = 0; i < k - 1; i++) {
            if (colors[i] == colors[i + 1]) {
                consecutiveCount++; // Track consecutive pairs
            }
        }
        if (consecutiveCount == 0) count++; // If no consecutive pairs, it's valid

        // Sliding window
        for (int i = 1; i < n; i++) {
            // Remove outgoing element's contribution
            if (colors[i - 1] == colors[(i) % n]) {
                consecutiveCount--;
            }

            // Add incoming element's contribution
            if (colors[(i + k - 2) % n] == colors[(i + k - 1) % n]) {
                consecutiveCount++;
            }

            // Check if the current window is valid
            if (consecutiveCount == 0) count++;
        }

        return count;
}

};