// Last updated: 6/26/2025, 4:24:40 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<32;i++){
            int cntZero=0;
            int cntOnes=0;

            for(int val:nums){
                if((val&(1<<i))!=0){
                    cntOnes++;
                }
                else{
                    cntZero++;
                }
            }
            if((cntOnes%3)!=0){
                res=(res|(1<<i));
            }
        }
        return res;
    }
};