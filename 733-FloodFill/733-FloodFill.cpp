// Last updated: 9/5/2025, 2:44:46 AM
class Solution {
public:
void dfs(int row,int col, vector<vector<int>>&vis,vector<vector<int>>& image,int color,int initalColor){
      int n=image.size();
     int m=image[0].size();  
     vis[row][col]=1;
     image[row][col]=color;
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};

    for(int i=0;i<4;i++){
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];

        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&
        !vis[nrow][ncol]&&
        image[nrow][ncol]==initalColor){

            image[nrow][ncol]=color;
            dfs(nrow,ncol,vis,image,color,initalColor);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
        

        int n=image.size();
        int m=image[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        int initalColor=image[sr][sc];

        if(initalColor!=color){
            dfs(sr,sc,vis,image,color,initalColor);
        }
        return image;
    }
};