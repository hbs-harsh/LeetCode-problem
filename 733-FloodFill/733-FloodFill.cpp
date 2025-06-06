// Last updated: 6/7/2025, 2:18:34 AM
class Solution {
private:
    void dfs(int row, int col, int color, vector<vector<int>>& ans,
             vector<vector<int>>& image, int iniColor, int delRow[], int delCol[]) {

        ans[row][col] = color;  // Fill the color
        int n = image.size();
        int m = image[0].size();

        for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            // Check bounds, initial color match, and not yet colored
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                image[nrow][ncol] == iniColor && ans[nrow][ncol] != color) {
                dfs(nrow, ncol, color, ans, image, iniColor, delRow, delCol);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor = image[sr][sc];

        // If the initial color is already the target color, skip
        if (iniColor == color) return image;

        vector<vector<int>> ans = image;
        int delRow[] = {-1, 0, +1, 0};
        int delCol[] = {0, +1, 0, -1};

        dfs(sr, sc, color, ans, image, iniColor, delRow, delCol);
        return ans;
    }
};
