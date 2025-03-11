
    class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0; 
        int j = 0;
        int occ = -1; // Default value if not found
        
        int n = haystack.size();
        int m = needle.size();

        if (n < m) {
            return -1; // Needle can't fit in haystack
        }

        while (i < n) {
            int k = i;
            j = 0; // Reset `j` to start checking from the first character of `needle`
            
            while (k < n && haystack[k] == needle[j]) {
                k++;
                j++;

                // If the entire `needle` is matched
                if (j == m) {
                    return i; // Found the starting index
                }
            }

            i++;
        }

        return -1; // If no match is found
    }
};
