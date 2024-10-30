// week08-2.cpp 學習計畫 matrix 第二題
// Leetcode 1572. Matrix Diagonal Sum 對角線的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int N = mat.size();
        for(int i=0;i<N;i++){
            ans += mat[i][i]; //左上右下, i正,i正
            ans += mat[i][N-1-i]; //左下右上 i 正, N-1-i 倒過來
        }
        if(N%2==1) ans -= mat[N/2][N/2];// 奇數: 正中間數用兩次，要扣掉
        return ans;
    }
};