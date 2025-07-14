// Last updated: 7/14/2025, 3:21:20 PM
class Solution {
public:
int findPath(int row,int col,vector<vector<int>>&grid,
vector<vector<int>>&dp){
        if(row<0|| col<0 ||grid[row][col]==1){
            return 0;
        }
        if(row==0 && col==0){
            return 1;
        }

        if(dp[row][col]!=-1){
            return dp[row][col];
        }
     
        int left=findPath(row,col-1,grid,dp);

        int up=findPath(row-1,col,grid,dp);

       
        

        return dp[row][col]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return findPath(m-1,n-1,obstacleGrid,dp);
    }
};