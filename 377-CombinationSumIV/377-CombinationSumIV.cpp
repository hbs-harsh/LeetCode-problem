// Last updated: 7/4/2025, 3:52:04 PM
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long> dp(target + 1, 0);

        
        dp[0] = 1;

        for (int i = 0; i <dp.size(); i++) {
           for(int j=0;j<nums.size();j++){
            if(i-nums[j]>=0){
                dp[i] += dp[i-nums[j]];
            }

           }
        }

       return  (dp[target]); 
    }
};
