// Last updated: 6/16/2025, 2:38:57 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int n=nums.size();

        int pos=0;
        int neg=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos++;
            }
            else if(nums[i]<0){
                neg++;
            }
           
             
            
        }
           ans=max(pos,neg);
        return ans;
    }
};