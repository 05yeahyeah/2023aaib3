// week16-2.cpp 學習計畫 Math 最後一題 用函式呼叫函式，簡化問題
// Leetcode 50. Pow(x,n)
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0){
            n = -n;
            x = 1/x;
        }
        if(n%2==0){
            double now = myPow(x, n/2); // 一半的x相乘
            return now * now; // 左一半，右一半，再相乘
        }
        else{
            double now = myPow(x, n/2);
            return now * now * x;
        }
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