// Last updated: 8/15/2025, 11:43:30 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;

        while(n%4==0){
            n/=4;
        }
        return n==1;
    }
};