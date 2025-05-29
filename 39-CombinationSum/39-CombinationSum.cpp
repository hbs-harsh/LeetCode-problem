// Last updated: 5/30/2025, 12:55:23 AM
class Solution {
public:
void combination(int ind,int target,vector<int>&arr,int n, vector<int>&ds, vector<vector<int>>&result){

    if(ind==n){
        if(target==0){
            result.push_back(ds);
        }
        return;
    }

    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        combination(ind,target-arr[ind],arr,n,ds,result);
        ds.pop_back();

    }
    combination(ind+1,target,arr,n,ds,result);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;

        int n=candidates.size();
        vector<int>ds;

     combination(0,target,candidates,n,ds,result);
     return result;
    }
};