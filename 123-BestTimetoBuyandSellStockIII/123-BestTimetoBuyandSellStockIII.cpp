// Last updated: 5/31/2025, 12:11:02 AM
class Solution {
public:
int solve(int ind,int buy,vector<int>& prices,int n,int k, vector<vector<vector<int>>>&dp){
int profit=0;
if(ind==n){
    return 0;
}
if(k<1){
    return 0;
}
if(dp[ind][buy][k]!=-1){
    return dp[ind][buy][k];
}

    if(buy){
        profit= max(-prices[ind]+solve(ind+1,0,prices,n,k,dp),0+solve(ind+1,1,prices,n,k,dp));
    }
    else{
        profit=max(prices[ind]+solve(ind+1,1,prices,n,k-1,dp),0+solve(ind+1,0,prices,n,k,dp));
    }
    return dp[ind][buy][k]=profit;

}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        
       int k=2;
         return solve(0,1,prices,n,k,dp);
       
    }
};