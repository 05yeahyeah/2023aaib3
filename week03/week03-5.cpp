// Leetcode 459. Repeated Substring Pattern 字串是由重複的字串組合起來
class Solution { // week03-5.cpp 學習計畫第五題
public:
    bool repeatedSubstringPattern(string s) {
        // abcabcabc
        // abcabcabcabcabcabc
        // bcabcabcabcabcab 找有沒有 abcabcabc
            string s2 = s + s;
            int N = s2.length();
            //cout << string::npos;
            return s2.substr(1, N-2).find(s) != string::npos;
        }
};
