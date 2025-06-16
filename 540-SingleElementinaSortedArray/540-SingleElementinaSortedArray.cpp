// Last updated: 6/16/2025, 4:40:27 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int ans=0;
        for(int num :nums){
            ans ^=num;
        }
        return ans;
    }
};