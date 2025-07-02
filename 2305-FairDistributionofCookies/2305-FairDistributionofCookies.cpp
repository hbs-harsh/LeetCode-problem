// Last updated: 7/2/2025, 4:30:13 PM
class Solution {
public:
 int ans=INT_MAX;
void find(int ind,vector<int>&cookies,vector<int>&child,int k){
  

   //base case
   if(ind==cookies.size()){
    int maxi=INT_MIN;
      for(int val : child){
        maxi=max(maxi,val);
      }
      ans=min(ans,maxi);
      return;
   }
   for(int i=0;i<k;i++){
    int cookie=cookies[ind];

    child[i]+=cookie;
    find(ind+1,cookies,child,k);

    //backtrac
    child[i] -= cookie;
   }
   

}
    int distributeCookies(vector<int>& cookies, int k) {
        
        vector<int>child(k);

       find(0,cookies,child,k);
       return ans;
    }
};