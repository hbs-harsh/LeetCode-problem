// Last updated: 7/8/2025, 2:55:15 PM
class Solution {
public:
int fun(int i,int j,vector<int>& nums1, vector<int>& nums2, vector<vector<int>>&dp){
    if(i<0||j<0){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(nums1[i]==nums2[j]){
        return dp[i][j]=1 + fun(i-1,j-1,nums1,nums2,dp);
    }
    else{
        return dp[i][j]=max(fun(i-1,j,nums1,nums2,dp),fun(i,j-1,nums1,nums2,dp));
    }

}
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        
        return fun(m-1,n-1,nums1,nums2,dp);
    }
};