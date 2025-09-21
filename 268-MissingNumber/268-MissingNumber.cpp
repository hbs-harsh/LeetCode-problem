// Last updated: 9/21/2025, 10:53:31 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        // sort(nums.begin(),nums.end());
       int xor1=0;
       int xor2=0;

       for(int i=0;i<=n;i++){
        xor1^=i;

       }

       for(int x:nums){
        xor2 ^= x;
       }
       return xor1^xor2;
    }

};