// Last updated: 9/14/2025, 1:40:59 AM
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        int vowel=0;
        int constFreq=0;
        for(auto it: mp){
            if((it.first=='a')||(it.first=='e')||(it.first=='i')||
            (it.first=='o')||(it.first=='u')){
                vowel = max(vowel,it.second);
            }
            else{
                constFreq=max(constFreq,it.second);
            }
        }
        return vowel+constFreq;
    }
};