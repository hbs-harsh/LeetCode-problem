// Last updated: 6/24/2025, 2:29:23 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> map; 
        
        for(int i = 0; i < n; i++) {
            if(map.find(nums[i]) != map.end() && i - map[nums[i]] <= k) {
                return true;
            }
            map[nums[i]] = i; 
        }
        return false;
    }
};
