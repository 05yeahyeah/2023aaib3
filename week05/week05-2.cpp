// week05-2.cpp
class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(char c:s){
            if(isupper(c)) c = tolower(c);
            ans += c;
        }
        return ans;
    }
};