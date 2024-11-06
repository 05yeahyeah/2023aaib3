// week09-4.cpp 學習計畫 Math 第3題
// Leetcode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5 = 0,b10 = 0,b20 = 0;
        for(int b : bills){
            if(b==5) b5++;
            else if(b==10) {
                if(b5==0) return false;
                b10++;
                b5--;
            } 
            else{ // 客人拿20元鈔，找他一張10元，一張5元
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }
            else if(b5>=3){
                b20++;
                b5-=3;
            } else return false;
            }
        }
        return true;
    }
};