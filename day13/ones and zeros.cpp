class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < strs.size(); i++) {
            int zero = count(strs[i].begin(), strs[i].end(), '0');
            int one = strs[i].size() - zero;
            for (int j = m; j >= zero; j--) {
                for (int k = n; k >= one; k--) {
                    dp[j][k] = max(1 + dp[j - zero][k - one], dp[j][k]);
                }
            }
        }
        return dp[m][n];
    }
};
