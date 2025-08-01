// Last updated: 8/2/2025, 12:17:17 AM
class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int col = 1; col <= row; col++) {
            ans = ans * (row - col+1);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
