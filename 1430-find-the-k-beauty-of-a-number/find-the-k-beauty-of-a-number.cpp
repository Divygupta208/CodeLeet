class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int result = 0;
        string num_str = to_string(num);
        int sub_num = 0;

        for (int i = 0; i < num_str.size(); i++) {
            if (i < k) {
                sub_num = sub_num * 10 + (num_str[i] - '0');
                continue;
            }
            if (sub_num != 0 && num % sub_num == 0) result++;
            // remove the most significant digit
            sub_num = sub_num % (int)pow(10, k-1);
            sub_num = sub_num * 10 + (num_str[i] - '0');
        }
        if (sub_num != 0 && num % sub_num == 0) result++;

        return result;
    }
};