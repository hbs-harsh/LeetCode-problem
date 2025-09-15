// Last updated: 9/16/2025, 1:17:38 AM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        vector<bool> isBroken(26, false);
        for (char c : brokenLetters) {
            isBroken[c - 'a'] = true;
        }

        int typeableWordCount = 0;
        
        stringstream ss(text);
        string word;

        while (ss >> word) {
            bool canType = true;
            
            for (char c : word) {
                if (isBroken[c - 'a']) {
                    canType = false;
                    break;
                }
            }
            
            if (canType) {
                typeableWordCount++;
            }
        }
        
        return typeableWordCount;
    }
};