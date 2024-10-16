// week06-5.cpp LeetCode 1078. Occurrences After Bigram
// 找到第一個字、找到第二個字，再來找到第三個字
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;

        stringstream ss(text);

        string word1,word2,word3;
        ss >> word1;
        ss >> word2;
        while(ss >> word3){
            if(word1==first && word2==second) ans.push_back(word3);
            word1 = word2;
            word2 = word3;
        }

        return ans;
    }
};
