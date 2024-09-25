/// Leetcode 28. Find the Index of the First Occurrence in a String
/// 在 c++ 也是一行 haystack.find(needle) 在草堆裡，找到needle針
/// week03-4.cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///https://cplusplus.com/reference/string/string/find/
        return haystack.find(needle);
    }
};
