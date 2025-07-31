// Last updated: 8/1/2025, 2:05:14 AM
class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        unordered_set<int> ans;
        set<int> cur;  // Using `set` to avoid duplicates in current iteration
        cur.insert(0);

        for (int x : A) {
            set<int> cur2;
            for (int y : cur) {
                cur2.insert(x | y);
            }
            cur2.insert(x);
            cur = cur2;

            for (int val : cur) {
                ans.insert(val);
            }
        }

        return ans.size();
    }
};