// week08-1.cpp 學習計畫 matrix 的第一題 找到最有錢的人
// Leetcode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; // 最多錢的有錢人，有[多少錢]?
        for(auto a:accounts){ // 從一堆人，挑出1個人a
            int sum = 0;
            for(auto b:a){ // a[0] + a[1] + a[2] + ...
                sum += b;
            }
            if(sum>ans) ans = sum;
        }
        return ans;
    }
};