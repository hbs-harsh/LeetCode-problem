// Last updated: 6/27/2025, 3:47:59 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;

        for(int i=0;i<nums.size();i++){
            res=nums[i]^res;
        }
        return res;
    }
};