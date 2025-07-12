// Last updated: 7/13/2025, 12:52:23 AM
class Solution {
public:
bool fun(int ind,vector<vector<int>>&dp,int sum,vector<int>& arr){
      if(sum==0) return true;
      if(ind == 0 ) return (arr[0]==sum);
      if(dp[ind][sum]!=-1) return dp[ind][sum];
      bool notTake=fun(ind-1,dp,sum,arr);
      bool take=false;
      if(sum>=arr[ind]){
          take=fun(ind-1,dp,sum-arr[ind],arr);
      }
      return dp[ind][sum]=(take||notTake);
  }
    bool canPartition(vector<int>& nums) {
        int totalsum=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            totalsum += nums[i];
        }
        int sum=totalsum/2;
        if (totalsum % 2 != 0) return false;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return fun(n-1,dp,sum,nums);
    }
};