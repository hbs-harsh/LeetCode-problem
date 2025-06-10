// Last updated: 6/11/2025, 12:32:17 AM
class Solution {
public:

    int maxProfit(vector<int>& prices,int fee) {
        
       int n=prices.size();
        vector<vector<int>>dp(n+2,vector<int>(2,0));

       int profit=0;

        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy){
                    profit=max(-prices[ind] + dp[ind+1][0],0+dp[ind+1][1]);
                    }else{
                        profit=max(prices[ind]-fee+dp[ind+1][1],dp[ind+1][0]);
                    }
                    dp[ind][buy]=profit;
            }
        }
        return profit;
    }
};