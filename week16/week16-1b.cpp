// week16-1b.cpp 學習計畫 Math 最後一題
// Leetcode 50. Pow(x,n)

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){
            for(int i=0;i<n;i++){
            ans *= x;
            }
        }
        else if(n<0){ // 特別針對 n<0 用負負得正，換成倒過來的形式
            for(int i=0;i<-n;i++){
                ans*=1/x;
            }
        }
        return ans;
    }
};