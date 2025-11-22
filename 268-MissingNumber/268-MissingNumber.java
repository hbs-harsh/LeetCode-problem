// Last updated: 11/22/2025, 11:28:26 PM
class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;

        int total=(n*(n+1))/2;
        int sm=0;
        for(int x : nums ){
            sm +=x;
        }
        return total-sm;
    }
}