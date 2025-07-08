// Last updated: 7/8/2025, 4:13:51 PM
class Solution {
public:
  
// int LPS(int i,int j,string&s,vector<vector<int>>&dp){
//     if(i == j){
//         return 1;
//     }
//     if(i>j){
//         return 0;
//     }
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(s[i]==s[j]){
//         return dp[i][j]=2+LPS(i+1,j-1,s,dp);
//     }
//     else{
//         return dp[i][j]=max(LPS(i+1,j,s,dp),LPS(i,j-1,s,dp));
//     }
// }
    int longestPalindromeSubseq(string s) {
        

        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        for(int i=0;i<n;i++){
            dp[i][i]=1;  // cases for dp[0][0],dp[1][1] etc
        }

        for(int len=2;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j=i+len-1;
                
                if(s[i]==s[j]){
                    dp[i][j]=2+dp[i+1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
        
    }
};
