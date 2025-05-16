// Last updated: 5/16/2025, 2:47:35 PM
class Solution {
public:
int fun(int i,int j,string s1,string s2,vector<vector<int>>&dp){
    if(i<0||j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s1[i]==s2[j]){
        return dp[i][j]=1+fun(i-1,j-1,s1,s2,dp);
    }
    else{
        return dp[i][j]=max(fun(i-1,j,s1,s2,dp),fun(i,j-1,s1,s2,dp));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      
      for(int i=0;i<=m;i++){
        dp[i][0]=0;
      }
      for(int i=0;i<=n;i++){
        dp[0][i]=0;
      }
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(text1[i-1]==text2[j-1]){
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