// Last updated: 6/27/2025, 4:37:20 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int xorAll=0;
        for(int num:nums){
            xorAll = xorAll^num;
        }
      int val=xorAll;

      int i=0;
      while((val&1)==0){
        val=val>>1;
        i++;
      }

        int grpA=0;
        int grpB=0;

       for (int num : nums) {
            if ((num & (1<<i)) == 0)
                grpA ^= num;
            else
                grpB ^= num;
        }
        return {grpA,grpB};


    }
};