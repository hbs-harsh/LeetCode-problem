// Last updated: 5/30/2025, 11:48:31 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int mini=prices[0];

        for(int i=1;i<n;i++){

            int cost=prices[i]-mini;
            ans = max(ans,cost);
            mini=min(prices[i],mini);
        }
        return ans;



    }
};