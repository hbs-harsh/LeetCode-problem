// Last updated: 7/14/2025, 3:14:37 PM
class Solution {
public:
int findPath(int row,int col,int m,int n,vector<vector<int>>&grid,
vector<vector<int>>&dp){
        if(row==m|| col==n ||grid[row][col]==1){
            return 0;
        }
        if(row==m-1 && col==n-1){
            return 1;
        }

        if(dp[row][col]!=-1){
            return dp[row][col];
        }
     
        int right=findPath(row,col+1,m,n,grid,dp);

        int down=findPath(row+1,col,m,n,grid,dp);

       
        

        return dp[row][col]=right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return findPath(0,0,m,n,obstacleGrid,dp);
    }
};