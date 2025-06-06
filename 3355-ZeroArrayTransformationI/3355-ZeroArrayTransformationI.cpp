// Last updated: 5/22/2025, 10:40:57 PM
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
    vector<int> count(n + 1, 0);
        for(auto& q:queries){
            int start=q[0];
            int end=q[1];
              count[start] += 1;
        if (end + 1 < n) count[end + 1] -= 1;
        }

             for (int i = 1; i < n; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = 0; i < n; ++i) {
        if (count[i] < nums[i]) return false;
    }

    return true;
    }
};