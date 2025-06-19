// Last updated: 6/19/2025, 3:34:02 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int l=0;
        int r=nums.size()-1;
        int maxi=INT_MIN;

        while(l<=r){
            int x=nums[l]+nums[r];
            maxi=max(maxi,x);

            l++;
            r--;
        }
        return maxi;
        
    }

};