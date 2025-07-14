// Last updated: 7/14/2025, 2:32:37 PM
class Solution {
    private:
    int findPath(int row,int col,int m,int n,vector<vector<int>>&dp){

        if(row==m-1 || col==n-1){
            return 1;
        }
        if(row==m||col==n){
            return 0;
        }
        if(dp[row][col]!=-1) return dp[row][col];
        int right=findPath(row,col+1,m,n,dp);

        int down=findPath(row+1,col,m,n,dp);

        return dp[row][col]=(right+down);
    }

public:
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m,vector<int>(n,-1));
        return findPath(0,0,m,n,dp);
    }
};