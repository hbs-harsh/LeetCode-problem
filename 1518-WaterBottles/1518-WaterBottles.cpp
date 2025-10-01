// Last updated: 10/2/2025, 1:07:55 AM
class Solution {
public:

int numWaterBottles(int numBottles, int numExchange) {
        int totalDrank = numBottles;
        
        while (numBottles >= numExchange) {
            int newBottles = numBottles / numExchange;
            totalDrank += newBottles;
            numBottles = newBottles + (numBottles % numExchange);
        }
        
        return totalDrank;
    }
};

