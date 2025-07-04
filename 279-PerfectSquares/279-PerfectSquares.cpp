// Last updated: 7/4/2025, 4:21:42 PM
class Solution {
public:
int helper(vector<int>&dp,int n){
    if(n==0) return 0;
    int  ans=INT_MAX;
    
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i*i<=n;i++){
            ans=min(ans,1+helper(dp,n-i*i));
        }
        return dp[n]=ans;
}
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        
        return helper(dp,n);
    }
};  