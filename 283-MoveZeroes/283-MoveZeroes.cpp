// Last updated: 6/19/2025, 3:22:43 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int l=0;
        int r=0;

        while(r<nums.size()){

            if(nums[r]!=0){

                swap(nums[l],nums[r]);
                l++;
            }
            r++;
        }
    }
};