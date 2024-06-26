// Problem link: https://leetcode.com/problems/fibonacci-number/
// Top-down
class Solution {
public:
    vector<int> dp;
    Solution() : dp(31, -1)
    {
    }
    int fib(int n) {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = fib(n - 1) + fib(n - 2);
    }
};

// Bottom-up
class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i < n + 1; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};