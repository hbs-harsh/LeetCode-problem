// Last updated: 7/5/2025, 11:20:04 PM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;

        unordered_map<int,int>mp;

        for(int num : arr){
            mp[num]++;
        }

        for(auto& it:mp){
            if(it.first==it.second){
                ans=max(ans,it.first);
            }
        }
        return ans;
    }
};