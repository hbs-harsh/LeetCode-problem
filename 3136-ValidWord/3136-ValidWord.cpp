// Last updated: 7/15/2025, 10:25:20 PM
class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;

       bool  has_vowel=false;
       bool has_cons=false;
        for(auto ch : word){
            if(isalpha(ch)){
                ch=tolower(ch);
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                    has_vowel=true;
                }else{
                    has_cons=true;
                }
            }
            else if(!isdigit(ch)){
                return false;
            }
        }
        return has_vowel&&has_cons;
    }
};