// Last updated: 7/11/2025, 12:08:00 AM
class Solution {
public:
void dfs(int node,vector<int>&vis,vector<vector<int>>& isConnected){
    vis[node]=1;
     for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[node][j] == 1 && !vis[j]) {
                dfs(j, vis, isConnected);
            }
        }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinceCnt=0;

        int n=isConnected.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,isConnected);
                  provinceCnt++;
            }
          
        }
        return provinceCnt;
    }
};