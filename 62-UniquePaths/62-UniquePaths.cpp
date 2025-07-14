// Last updated: 7/14/2025, 2:40:07 PM
class Solution {
    private:
    int findPath(int row,int col,int m,int n,vector<vector<int>>&dp){

        if(row==0 || col==0){
            return 1;
        }
        if(row<0||col<0){
            return 0;
        }
        if(dp[row][col]!=-1) return dp[row][col];
        int right=findPath(row,col-1,m,n,dp);

        int down=findPath(row-1,col,m,n,dp);

        return dp[row][col]=(right+down);
    }

public:
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

       return findPath(m-1,n-1,m,n,dp);
    }
};