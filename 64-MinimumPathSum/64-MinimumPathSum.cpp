// Last updated: 7/14/2025, 4:10:54 PM
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
        vector<vector<int>>dp(m,vector<int>(n,-1));

        return find(0,0,m,n,grid,dp);
    }
};