// Last updated: 7/8/2025, 3:04:25 PM
class Solution {
public:

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        //dp[i][j] means max UCL betwn num1 of size i and num2 of size j
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(nums1[i-1]==nums2[j-1]){  //reason id dp[2][2] we are checkig [1,4] .ie 0,1
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};