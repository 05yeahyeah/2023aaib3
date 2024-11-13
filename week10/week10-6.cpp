// week10-6.cpp 學習計畫 Basic 第八題
// Leetcode 1822. Sign of Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int total = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) total *= 1;
            if(nums[i]<0) total *= -1;
            if(nums[i]==0) total *=0;
        }
        if(total>0) return 1;
        if(total<0) return -1;
        return 0;
    }
};
