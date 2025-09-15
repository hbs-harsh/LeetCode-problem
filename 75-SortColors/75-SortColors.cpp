// Last updated: 9/15/2025, 10:53:03 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        
        int cntZero=0;
        int cntOne=0;
        int cntTwo=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cntZero++;
            }
            else if(nums[i]==1){
                cntOne++;
            }
            else{
                cntTwo++;
            }

        }
        for(int i=0;i<cntZero;i++){
            nums[i]=0;
        }
        for(int i=cntZero;i<cntZero+cntOne;i++){
            nums[i]=1;
        }
        for(int i=cntZero+cntOne;i<n;i++){
            nums[i]=2;
        }
       
    }
};