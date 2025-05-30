// Last updated: 5/31/2025, 12:17:42 AM
class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        
      
       int profit=0;
       for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            for(int k=1;k<=2;k++){

                  if(buy){
        profit= max(-prices[ind]+dp[ind+1][0][k],0+dp[ind+1][1][k]);
    }
    else{
        profit=max(prices[ind]+dp[ind+1][1][k-1],dp[ind+1][0][k]);
         }
         dp[ind][buy][k]=profit;
            }
            
        }
       }
       return profit;
    }
};