// Last updated: 6/18/2025, 3:09:01 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        
       
        int low=0;
        int high=n-1;
        if(n==1&&target==nums[0]){
            return true;
        }
        while(low<=high){

            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            else if(nums[low]<=nums[mid]){
                if(nums[low]<=target&&target <=nums[mid]){
                    high=mid-1;
                }
                else
                low=mid+1;
            }
            else{
                if(nums[mid]<=target&&target<=nums[high]){
                    low=mid+1;
                }
                else 
                high=mid-1;
            }
        }
        return false;
    }
};