// Last updated: 5/29/2025, 1:57:33 AM
class Solution {
public:
int solve(int ind,int buy,vector<int>&prices,int n,int limit,vector<vector<vector<int>>>&dp){

    if(ind == n || limit==0){
        return 0;
    }
    int profit=0;
    if(dp[ind][buy][limit]!=-1) return dp[ind][buy][limit];
    if(buy){
        profit = max(-prices[ind]+solve(ind+1,0,prices,n,limit,dp),solve(ind+1,1,prices,n,limit,dp));
    }else{//sell
    profit = max(prices[ind]+solve(ind+1,1,prices,n,limit-1,dp),solve(ind+1,0,prices,n,limit,dp));
    }
    return  dp[ind][buy][limit]=profit;

}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,1,prices,n,2,dp);
    }
};
