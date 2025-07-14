// Last updated: 7/14/2025, 2:55:48 PM
class Solution {

public:
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m,vector<int>(n,0));

        dp[0][0]=0;
        for(int i=0;i<m;i++){
            dp[i][0]=1;
        }
        for(int j=0;j<n;j++){
            dp[0][j]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                int way1=dp[i-1][j];
                int way2=dp[i][j-1];
                dp[i][j]=way1+way2;
            }
        }
        return dp[m-1][n-1];
       
    }
};