// Last updated: 7/25/2025, 11:07:31 PM
class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> positiveNumsSet;
        for (int num : nums) {
            if (num > 0) {
                positiveNumsSet.emplace(num);
            }
        }
        if (positiveNumsSet.empty()) {
            return *max_element(nums.begin(), nums.end());
        }
        return accumulate(positiveNumsSet.begin(), positiveNumsSet.end(), 0);
    }
};
