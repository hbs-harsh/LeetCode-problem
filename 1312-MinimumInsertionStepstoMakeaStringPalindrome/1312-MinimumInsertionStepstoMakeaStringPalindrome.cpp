// Last updated: 5/17/2025, 1:11:22 AM
class Solution {
public:
int longestPalindromeSubseq(string s) {
        string s1=s;
       reverse(s1.begin(),s1.end());
       int m=s.size();
       int n=s1.size();
     vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      
      for(int i=0;i<=m;i++){
        dp[i][0]=0;
      }
      for(int i=0;i<=n;i++){
        dp[0][i]=0;
      }
      for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s[i-1]==s1[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
      }
      return dp[m][n];
    }
    int minInsertions(string s) {
        return s.size()-longestPalindromeSubseq(s);
    }
};