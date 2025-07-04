// Last updated: 7/4/2025, 3:51:03 PM
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long> dp(target + 1,0);

        // if(target<0) return 0;
        // if(target==0) return 1;
        dp[0] = 1;

        for (int i = 1; i <=target; i++) {
           for(int j=0;j<nums.size();j++){
            int currNum= nums[j];
            if(i-currNum>=0){
                dp[i] += dp[i-currNum];
            }

           }
        }

       return dp[target]; 
    }
};
