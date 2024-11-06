// week09-2.cpp 學習計畫 Math 第2題
// Leetcode 1523. Count Odd Numbers in an Interval
// 找 low...high 中間，有幾個奇數(頭尾包含)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) /2;
        if(low%2==1 || high%2==1) ans++;//頭尾有奇數，就要+1
        return ans;
    }
};