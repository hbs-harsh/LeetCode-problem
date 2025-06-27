// Last updated: 6/27/2025, 3:34:50 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;

        unordered_map<int,int>mp;

        for(int num:nums){
            mp[num]++;
        }
        for(auto&it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};