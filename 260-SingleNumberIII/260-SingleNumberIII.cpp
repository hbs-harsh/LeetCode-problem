// Last updated: 6/27/2025, 4:20:05 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int xorAll=0;
        for(int num:nums){
            xorAll = xorAll^num;
        }
        unsigned int diffbits = xorAll & (~xorAll + 1u); 

        int grpA=0;
        int grpB=0;

       for (int num : nums) {
            if ((num & diffbits) == 0)
                grpA ^= num;
            else
                grpB ^= num;
        }
        return {grpA,grpB};


    }
};