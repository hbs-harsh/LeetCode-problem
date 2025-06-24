// Last updated: 6/24/2025, 2:38:02 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int i = 0;  // left pointer

        for (int j = 0; j < nums.size(); j++) {
            if (window.find(nums[j]) != window.end()) {
                return true;  // duplicate found in window
            }

            window.insert(nums[j]);

            // If window size exceeds k, shrink from the left
            if (j - i >= k) {
                window.erase(nums[i]);
                i++;
            }
        }

        return false;
    }
};
