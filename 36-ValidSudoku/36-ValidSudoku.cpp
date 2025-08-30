// Last updated: 8/31/2025, 12:29:37 AM
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        // Use arrays of unordered_sets to track seen numbers for each row, column, and 3x3 box
        std::vector<std::unordered_set<char>> rows(9);
        std::vector<std::unordered_set<char>> cols(9);
        std::vector<std::unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];

                // Only validate filled cells
                if (num == '.') {
                    continue;
                }

                // Check for duplicates in the current row
                if (rows[i].count(num)) {
                    return false;
                }
                rows[i].insert(num);

                // Check for duplicates in the current column
                if (cols[j].count(num)) {
                    return false;
                }
                cols[j].insert(num);

                // Calculate the index of the 3x3 sub-box
                // (i / 3) * 3 + (j / 3) maps the board coordinates to a single box index from 0 to 8
                int boxIndex = (i / 3) * 3 + (j / 3);
                
                // Check for duplicates in the sub-box
                if (boxes[boxIndex].count(num)) {
                    return false;
                }
                boxes[boxIndex].insert(num);
            }
        }

        // If all checks pass, the board is valid
        return true;
    }
};