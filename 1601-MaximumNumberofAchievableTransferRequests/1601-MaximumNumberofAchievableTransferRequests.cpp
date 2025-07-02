// Last updated: 7/2/2025, 3:36:00 PM
class Solution {
public:
int  MaxRequest=0;
    int maximumRequests(int n, vector<vector<int>>& requests) {
        
         MaxRequest = 0;  // Reset for each function call
        vector<int> building(n, 0);
        findMaxRequest(0, 0, building, requests);
        return MaxRequest;
    }

    void findMaxRequest(int ind,int cnt,vector<int>&building,vector<vector<int>>& requests){

        if(ind==requests.size()){
           for(int val : building){
            if(val!=0) return;
           }
            MaxRequest = max(MaxRequest,cnt);
            return ;
        }
        int from=requests[ind][0];
        int to=requests[ind][1];

        //process
        building[from]--;
        building[to]++;

        findMaxRequest(ind+1,cnt+1,building,requests);

        building[from]++;
        building[to]--;

        //notproceess
        findMaxRequest(ind+1,cnt,building,requests);
    }
};