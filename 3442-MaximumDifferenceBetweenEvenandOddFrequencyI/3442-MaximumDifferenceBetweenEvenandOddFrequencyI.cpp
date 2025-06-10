// Last updated: 6/11/2025, 12:36:48 AM


class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;

        for (auto& [ch, freq] : mp) {
            if (freq % 2 == 1) {
                maxOdd = max(maxOdd, freq);
            } else {
                minEven = min(minEven, freq);
            }
        }

        if (maxOdd == INT_MIN || minEven == INT_MAX) {
            // Either no odd-count or no even-count character exists
            return 0;
        }

        return maxOdd - minEven;
    }
};
