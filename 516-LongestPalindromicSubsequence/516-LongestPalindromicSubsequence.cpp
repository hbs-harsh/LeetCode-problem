// Last updated: 7/8/2025, 3:23:35 PM
class Solution {
public:
    int LCS(int i, int j, string &s1, string &s2, vector<vector<int>> &dp) {
        if (i == s1.size() || j == s2.size()) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        if (s1[i] == s2[j])
            return dp[i][j] = 1 + LCS(i + 1, j + 1, s1, s2, dp);
        else
            return dp[i][j] = max(LCS(i + 1, j, s1, s2, dp), LCS(i, j + 1, s1, s2, dp));
    }

    int longestPalindromeSubseq(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));

        return LCS(0, 0, s, rev, dp);
    }
};
