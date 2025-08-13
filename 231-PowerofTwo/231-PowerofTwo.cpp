// Last updated: 8/14/2025, 12:47:03 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        while(n%2==0){
            n /=2;
        }
        return n==1;
    }
};