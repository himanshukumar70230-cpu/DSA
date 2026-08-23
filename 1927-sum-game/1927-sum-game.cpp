class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        // Left half
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                leftQ++;
            else
                leftSum += num[i] - '0';
        }

        // Right half
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                rightQ++;
            else
                rightSum += num[i] - '0';
        }

        int sumDiff = leftSum - rightSum;
        int qDiff = leftQ - rightQ;

        // Odd number of unmatched '?'
        if (qDiff % 2 != 0)
            return true;

        // Bob can make the sums equal only in this exact situation
        return sumDiff + (qDiff / 2) * 9 != 0;
    }
};