// Last updated: 11/22/2025, 11:21:35 PM
class Solution {
    public void sortColors(int[] nums) {
        int cntZero=0;
        int cntOnes=0;
        int cntTwo=0;

        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                cntZero++;
            }
            else if(nums[i]==1){
                cntOnes++;
            }
            else{
                cntTwo++;
            }
        }
        for(int i=0;i<cntZero;i++){
            nums[i]=0;
        }
        for(int j=cntZero;j<cntZero+cntOnes;j++){
            nums[j]=1;
        }
        for(int k=cntOnes+cntZero;k<nums.length;k++){
            nums[k]=2;
        }
        
    }
}