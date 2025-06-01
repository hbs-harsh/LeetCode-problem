// Last updated: 6/2/2025, 12:54:58 AM
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 1), hash(n);
        int maxi = 1;
        int last_index = 0;

        for (int i = 0; i < n; i++) {
            hash[i] = i;
            for (int prev = 0; prev < i; prev++) {
                if (nums[prev] < nums[i] && dp[prev] + 1 > dp[i]) {
                    dp[i] = dp[prev] + 1;
                    hash[i] = prev;
                }
            }

            if (dp[i] > maxi) {
                maxi = dp[i];
                last_index = i;
            }
        }

        // Reconstruct the LIS
        vector<int> temp;
        temp.push_back(nums[last_index]);
        while (hash[last_index] != last_index) {
            last_index = hash[last_index];
            temp.push_back(nums[last_index]);
        }

        reverse(temp.begin(), temp.end());

        for (auto it : temp) cout << it << " ";
        cout << endl;

        return maxi;
    }
};
