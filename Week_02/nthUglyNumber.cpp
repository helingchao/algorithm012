# dp
class Solution {
public:
    int nthUglyNumber(int n) {
        if (n < 1) {
            return 0;
        }
        int dp[1690] = {0};

        dp[0] = 1;
        int a2 = 0;
        int a3 = 0;
        int a5 = 0;

        for (int i = 1; i < n; ++i) {
            dp[i] = min(min(dp[a2] *2, dp[a3] * 3), dp[a5] *5);
            if (dp[i] == dp[a2] * 2) a2++;
            if (dp[i] == dp[a3] * 3) a3++;
            if (dp[i] == dp[a5] * 5) a5++;
        }

        return dp[n-1];
    }
};
