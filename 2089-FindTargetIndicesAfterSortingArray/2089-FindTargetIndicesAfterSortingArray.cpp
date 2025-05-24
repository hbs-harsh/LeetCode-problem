// Last updated: 5/25/2025, 12:40:49 AM
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        // lower_bound: first position >= target
        // upper_bound: first position > target
        auto low = lower_bound(nums.begin(), nums.end(), target);
        auto up = upper_bound(nums.begin(), nums.end(), target);

        vector<int> ans;

        // Fill all indices from low to up - 1
        for (auto it = low; it != up; ++it) {
            ans.push_back(it - nums.begin());
        }

        return ans;
    }
};
