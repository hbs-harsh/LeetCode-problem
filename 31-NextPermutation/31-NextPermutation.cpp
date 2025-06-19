// Last updated: 6/19/2025, 4:25:31 PM
class Solution {
public:
  void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find the first decreasing element from the end
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the next larger element from the end
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i]) {
            j--;
        }

        // Step 3: Swap
        swap(nums[i], nums[j]);
    }

    // Step 4: Reverse the remaining part
    reverse(nums.begin() + i + 1, nums.end());
}

        

};