// Last updated: 6/18/2025, 4:34:44 PM
class Solution {
public:
int findMax(vector<int>& arr){
     int n=arr.size();
        int maxi=INT_MAX;

        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
}
int calTotalHour(vector<int> & nums,int hourly){
    int n=nums.size();
    int totalH=0;
    for(int i=0;i<n;i++){
        totalH +=ceil((double)nums[i]/(double)hourly);
    }
    return totalH;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=piles.size();
       int low=1;
       int high=findMax(piles);
       while(low<=high){
        int mid= low +(high-low)/2;
        int totalH=calTotalHour(piles,mid);

        if(totalH<=h){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
       }
       return low;
    }
};