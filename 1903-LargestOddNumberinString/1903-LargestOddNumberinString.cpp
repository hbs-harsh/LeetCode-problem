// Last updated: 8/9/2025, 11:36:20 PM
class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";

        for(int i=num.size();i>=0;i--){
            if((num[i]-'0')%2==1){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};