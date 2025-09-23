// Last updated: 9/23/2025, 10:57:02 PM
class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string> v1 = getTokens(version1);
        vector<string> v2 = getTokens(version2);

        int m = v1.size();
        int n = v2.size();

        int i = 0;
        while (i < m || i < n) {
            int a = (i < m) ? stoi(v1[i]) : 0;
            int b = (i < n) ? stoi(v2[i]) : 0;

            if (a < b) return -1;
            else if (a > b) return 1;

            i++;
        }
        return 0;
    }

private:
    vector<string> getTokens(string s) {
        vector<string> tokens;
        string token;
        for (char c : s) {
            if (c == '.') {
                tokens.push_back(token);
                token.clear();
            } else {
                token.push_back(c);
            }
        }
        tokens.push_back(token); // last token
        return tokens;
    }
};
