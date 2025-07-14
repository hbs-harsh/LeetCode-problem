// Last updated: 7/15/2025, 12:12:31 AM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int, int>, int>> q; // {{row, col}, time}
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int fresh = 0;

        // Step 1: Count fresh oranges & push all rotten oranges in the queue
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                } else {
                    vis[i][j] = 0;
                }

                if(grid[i][j] == 1) fresh++;
            }
        }

        // Step 2: BFS from all rotten oranges
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        int time = 0;
        int cnt = 0;

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            time = max(time, t);

            for(int i = 0; i < 4; i++) {
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                // Check if valid and fresh orange
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                   vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {

                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 2;
                    cnt++;
                }
            }
        }

        // Step 3: If all fresh oranges are not rotten, return -1
        if(cnt != fresh) return -1;
        return time;
    }
};
