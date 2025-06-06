// Last updated: 5/27/2025, 12:32:04 AM
class Solution {
public:
int solve(int n,vector<int>&cost, vector<int>&dp){
    if(n==0) return cost[0];
    if(n==1) return cost[1];
if(dp[n]!=-1) return dp[n];
    return cost[n]+min(solve(n-1,cost,dp),solve(n-2,cost,dp));
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,0);
      dp[0]=cost[0];
      dp[1]=cost[1];

      for(int i=2;i<n;i++){
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
      }
      return min(dp[n-1],dp[n-2]);
    }
    
};