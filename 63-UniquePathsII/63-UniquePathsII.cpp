// Last updated: 7/14/2025, 3:41:02 PM
class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        vector<vector<int>>dp(m,vector<int>(n,0));
      
        dp[0][0]=1;
        for(int i=1;i<m;i++){
            if(obstacleGrid[i][0]==1){
                dp[i][0]=0;
            }
            else{
                dp[i][0]=dp[i-1][0];
            }
        }
        for(int j=1;j<n;j++){
            if(obstacleGrid[0][j]==1){
                dp[0][j]=0;
            }
            else{
                dp[0][j]=dp[0][j-1];
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                }
                else{
                int way1=dp[i-1][j];
                int way2=dp[i][j-1];
                dp[i][j]=way1+way2;
            }
            }
        }
        return dp[m-1][n-1];
    }
};