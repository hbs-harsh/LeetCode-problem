// Last updated: 5/31/2025, 12:15:27 AM
class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        int profit=0;

        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int limit=1;limit<=2;limit++){
                     if(buy){
                        profit = max(-prices[ind]+dp[ind+1][0][limit],dp[ind+1][1][limit]);
                        }else{//sell
                       profit = max(prices[ind]+dp[ind+1][1][limit-1],dp[ind+1][0][limit]);
                        }
                    dp[ind][buy][limit]=profit;     
                }
            }
        }
         
        return profit;

    }
};
