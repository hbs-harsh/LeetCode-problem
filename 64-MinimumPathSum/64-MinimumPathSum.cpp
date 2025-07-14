// Last updated: 7/14/2025, 4:19:02 PM
class Solution {
public:
int find(int row,int col,int m ,int n,vector<vector<int>>& grid,vector<vector<int>>&dp){
 if(row >= m || col >= n) return INT_MAX;
    if(row==m-1&&col==n-1){
        return grid[row][col];
    }
    if(dp[row][col]!=-1) return dp[row][col];
    int way1=find(row+1,col,m,n,grid,dp);

    int way2=find(row,col+1,m,n,grid,dp);

    return dp[row][col]=grid[row][col]+min(way1,way2);

}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));

        dp[0][0]=grid[0][0];

        for(int i=1;i<m;i++){
            dp[i][0]=grid[i][0]+dp[i-1][0];
        }
        for(int j=1;j<n;j++){
            dp[0][j]=grid[0][j]+dp[0][j-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){

                int way1=dp[i-1][j];
                int way2=dp[i][j-1];

                dp[i][j]=grid[i][j]+min(way1,way2);
            }
        }
        return dp[m-1][n-1];
    }
};