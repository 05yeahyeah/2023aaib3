// week08-2.c 學習計畫 matrix 第二題
// Leetcode 1572. Matrix Diagonal Sum 對角線的數字加起來
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int ans = 0;
    int N = matSize;
    for(int i=0;i<N;i++){
        ans += mat[i][i];
        ans += mat[i][N-1-i];
    }
    if(N%2==1) ans -= mat[N/2][N/2];
    return ans;
}