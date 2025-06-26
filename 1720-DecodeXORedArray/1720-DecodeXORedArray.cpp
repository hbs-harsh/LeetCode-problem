// Last updated: 6/26/2025, 3:17:33 PM
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        int n=encoded.size();

        vector<int>ans(n+1);
        ans[0]=first;
        for(int i=1;i<ans.size();i++){
            ans[i]=ans[i-1]^encoded[i-1];
        }
        return ans;
    }
};