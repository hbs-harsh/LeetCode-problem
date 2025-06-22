// Last updated: 6/22/2025, 6:32:36 PM
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>res;
        int i=0;
       

        while(s.size()%k !=0){
            s+=fill;
        }
        int j=0;
        while(j<s.size()){
             string ans="";
        for(int i=0;i<k;i++){
           

            ans += s[j+i];
         }
         j+=k;
         res.push_back(ans);
        }
        
    
        
        return res;
    }
};