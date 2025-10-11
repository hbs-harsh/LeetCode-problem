// Last updated: 10/12/2025, 12:21:27 AM
class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char c:s){
            if(isalnum(c)){
                temp += tolower(c);
            }
        }

        int i=0;
        int j=temp.length()-1;

        while(i<=j){
            if(temp[i]==temp[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};