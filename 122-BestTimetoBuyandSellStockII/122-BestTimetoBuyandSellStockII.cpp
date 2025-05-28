// Last updated: 5/29/2025, 1:23:20 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1]; 
            }
        }
        return profit;
    }
};
