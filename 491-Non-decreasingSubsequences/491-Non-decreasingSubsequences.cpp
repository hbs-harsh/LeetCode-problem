// Last updated: 7/2/2025, 2:54:56 PM
class Solution {
private:
    void findSub(int ind, vector<int>& nums, vector<int>& temp, set<vector<int>>& ans) {
        if (ind == nums.size()) {
            if (temp.size() >= 2) {
                ans.insert(temp);  
            }
            return;
        }

        // pick
        if (temp.empty() || nums[ind] >= temp.back()) {
            temp.push_back(nums[ind]);
            findSub(ind + 1, nums, temp, ans);
            temp.pop_back();  // backtrack
        }

        // not pick
        findSub(ind + 1, nums, temp, ans);
    }

public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        findSub(0, nums, temp, ans);

     
        return vector<vector<int>>(ans.begin(), ans.end());    // Convert set to vector
    }
};
