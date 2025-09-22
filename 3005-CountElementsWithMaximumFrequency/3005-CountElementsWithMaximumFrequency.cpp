// Last updated: 9/23/2025, 12:49:28 AM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int num:nums){
            mp[num]++;
        }
        int maxFreq=0;
        int ans=0;

        for(auto &it:mp){
            maxFreq=max(maxFreq,it.second);
        }

        for(auto& it:mp){
            if(it.second==maxFreq){
                ans+=it.second;
            }
        }
        return ans;
    }
};