// Last updated: 6/16/2025, 3:11:49 PM
class Solution {
public:
    int arrangeCoins(int n) {
        int rows=1;
        while(n>=rows){
            n=n-rows;
            rows++;
        }
        return rows-1;
    }
};