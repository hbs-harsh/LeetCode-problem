// Last updated: 6/24/2025, 3:11:59 PM
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.size();

        int l=0;
        int r=0;

        int currCost=0;
        int maxLen=0;

        while(r<n){
            currCost += abs(s[r] -t[r]);

            while(currCost > maxCost){
                currCost = currCost - abs(s[l]-t[l]);
                l++;
            }

            int len= r-l+1;
            maxLen= max(maxLen,len);

            r++;
        }
        return maxLen;
    }
};