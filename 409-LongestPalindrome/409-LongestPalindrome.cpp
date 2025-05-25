// Last updated: 5/25/2025, 2:15:06 PM
class Solution {
public:
    int longestPalindrome(string s) {
        int  n=s.size();

        unordered_set<char>st;

        int res=0;

        for(char &ch : s){
            if(st.count(ch)){
                res +=2;
                st.erase(ch);
            }else{
                st.insert(ch);
            }
        }
        if(!st.empty()){
            res++;
        }
        return res;
    }
};