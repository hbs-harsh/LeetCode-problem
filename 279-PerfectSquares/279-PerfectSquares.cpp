// Last updated: 7/4/2025, 4:41:06 PM
class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,INT_MAX);
        if(n==0) return 0;
        dp[0]=0;

        for(int i=1;i<dp.size();i++){
            for(int j=1;j*j<=i;j++){
                dp[i]=min(dp[i],1+dp[i-j*j]);
            }
        }
        return dp[n];
    }
};