// Last updated: 7/16/2025, 10:53:35 PM
class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();

        int evencnt=0;
        int oddcnt=0;
        int  alternating=0;
        for(int num: nums){
            if(num%2==0){
                evencnt++;
            }
            else{
                oddcnt++;
            }
        }
        int parity=nums[0]%2;
        alternating +=1;
        for(int i=1;i<n;i++){
            int curParity=nums[i]%2;
            if(curParity!=parity){
                alternating++;
                parity=curParity;
            }
        }
        return max({evencnt++,oddcnt++,alternating});
    }
};