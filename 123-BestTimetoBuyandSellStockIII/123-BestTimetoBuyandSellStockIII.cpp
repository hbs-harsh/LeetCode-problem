// Last updated: 5/29/2025, 2:16:05 AM
class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n=prices.size();

       vector<vector<int>>after(2,vector<int>(3,0));
       
       vector<vector<int>>curr(2,vector<int>(3,0));
        int profit=0;

        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int limit=1;limit<=2;limit++){
                     if(buy==1){
                        curr[buy][limit] = max(-prices[ind]+after[0][limit],after[1][limit]);
                        }else{//sell
                     curr[buy][limit] = max(prices[ind]+after[1][limit-1],after[0][limit]);
                        }
                    
                }
            }
            after=curr;
        }
         
        return after[1][2];

    }
};
