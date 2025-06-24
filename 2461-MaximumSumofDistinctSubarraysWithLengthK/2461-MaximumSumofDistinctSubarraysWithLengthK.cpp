// Last updated: 6/24/2025, 4:17:12 PM
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        int l=0;
     
        unordered_map<int,int>freq;
        long long currSum=0;
        long long maxSum=0;

        for(int r=0;r<n;r++){
             currSum += nums[r];
            freq[nums[r]]++;

              if (r - l + 1 > k) {
                freq[nums[l]]--;
                if (freq[nums[l]] == 0) freq.erase(nums[l]);
                currSum -= nums[l];
                l++;
            }

             if (r - l + 1 == k && freq.size() == k) {
                maxSum = max(maxSum, currSum);
            }
        }

      
        return maxSum;
    }
};