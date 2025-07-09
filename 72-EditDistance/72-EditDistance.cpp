// Last updated: 7/9/2025, 2:43:34 PM
class Solution {
public:
int fun(int i,int j,string&s1,string &s2,vector<vector<int>>&dp){
    if(i==s1.size()){
        return s2.size()-j;
    }
    if(j==s2.size()){
        return s1.size()-i;

    }
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(s1[i]==s2[j]){
        return dp[i][j]=fun(i+1,j+1,s1,s2,dp);
    }
    else{
        int insert = 1+fun(i,j+1,s1,s2,dp);
        int del= 1+ fun(i+1,j,s1,s2,dp);
        int replace=1+fun(i+1,j+1,s1,s2,dp);
        return dp[i][j]=min({insert, del, replace});
    }
}
    int minDistance(string word1, string word2) {
        
        int m=word1.size();
        int n=word2.size();
        vector<vector<int>>dp(m+1,vector<int>(n,-1));
        return fun(0,0,word1,word2,dp);
    }
};