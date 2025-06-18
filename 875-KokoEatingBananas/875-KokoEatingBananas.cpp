// Last updated: 6/18/2025, 4:36:10 PM
class Solution {
public:
   bool canEatAllInTime(int hourly, vector<int>& piles, int h) {
        long long hours = 0;
        for (int val : piles) {
            hours += (val + hourly - 1) / hourly;
            if (hours > h) return false;
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){

            int mid=low+(high-low)/2;

            if(canEatAllInTime(mid,piles,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }
};