// Last updated: 7/4/2025, 3:19:43 PM
class Solution {
public:
int comb(int target,vector<int>& nums,vector<int>&dp){
    int n=nums.size();
    if(target==0) return 1;
    if(target<0) return 0;
    int cnt=0;
    
    for(int i=0;i<n;i++){
        if(dp[target]!=-1) return dp[target];
      cnt +=  comb(target-nums[i],nums,dp);
    }
    return dp[target]=cnt;
}
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
       vector<int>dp(target+1,-1);
       return comb(target,nums,dp);
    }
};