// Last updated: 6/5/2025, 12:45:03 AM
class Solution {
    private:
    void dfs(int node,vector<int>adj[],vector<int>&vis){
        vis[node]=1;

        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
      int v=isConnected[0].size();
   
      int cnt=0;
      vector<int>adj[v];
      vector<int>vis(v,0);
      for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(isConnected[i][j]==1&&i!=j){
                adj[i].push_back(j);
             
            }
        }
      }

      for(int i=0;i<v;i++){
        if(vis[i]==0){
            cnt++;
            dfs(i,adj,vis);
        }
      }
return cnt;
    }
};