// Last updated: 9/21/2025, 10:43:37 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        // sort(nums.begin(),nums.end());
       int total= n*(n+1)/2;

       int sum=0;

       for(int x: nums){
        sum += x;
       }
       return total-sum;
    }
};