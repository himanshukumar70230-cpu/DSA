class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int ans = 0;

        while (j < n) {

            bool valid = true;

            for (int m = i; m <= j; m++) {
                int count = 0;

                for (int r = i; r <= j; r++) {
                    if (s[m] == s[r]) {
                        count++;
                    }
                }

                if (count > 2) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans = max(ans, j - i + 1);
                j++;
            }
            else {
                i++;
            }
        }

        return ans;
    }
};