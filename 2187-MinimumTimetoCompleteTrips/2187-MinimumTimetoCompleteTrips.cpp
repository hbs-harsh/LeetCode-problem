// Last updated: 6/19/2025, 2:17:46 PM
class Solution {
public:
    bool can(long long trip, vector<int>& time, int totalTrips) {
        long long count = 0;
        for (int t : time) {
            count += trip / t;
        }
        return count >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long high = (long long)(*min_element(time.begin(), time.end())) * totalTrips;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (can(mid, time, totalTrips)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};