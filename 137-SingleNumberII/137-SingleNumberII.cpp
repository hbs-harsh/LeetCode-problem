// Last updated: 6/26/2025, 3:59:23 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int num:nums){
            mp[num]++;
        }
        int ans=0;
        for(auto&it:mp){
            if(it.second==1){
                ans=it.first;
            }
        }
        return ans;
    }
};