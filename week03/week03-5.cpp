// Leetcode 459. Repeated Substring Pattern �r��O�ѭ��ƪ��r��զX�_��
class Solution { // week03-5.cpp �ǲ߭p�e�Ĥ��D
public:
    bool repeatedSubstringPattern(string s) {
        // abcabcabc
        // abcabcabcabcabcabc
        // bcabcabcabcabcab �䦳�S�� abcabcabc
            string s2 = s + s;
            int N = s2.length();
            //cout << string::npos;
            return s2.substr(1, N-2).find(s) != string::npos;
        }
};
