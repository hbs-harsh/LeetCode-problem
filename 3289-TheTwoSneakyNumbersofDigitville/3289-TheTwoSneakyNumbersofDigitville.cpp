// Last updated: 11/1/2025, 1:31:37 AM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        
      unordered_map<int, int> mp;
    vector<int> result;

    for (int num : nums) {
        mp[num]++;
        if (mp[num] == 2) {     
            result.push_back(num);
        }
    }

    return result; 

    }
};