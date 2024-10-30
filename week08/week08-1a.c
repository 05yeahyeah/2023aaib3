// week08-1.c 學習計畫 matrix 的第一題 找到最有錢的人
// Leetcode 1672. Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans=0;
    for(int i=0;i<accountsSize;i++){
        int sum = 0;
        for(int j=0;j<accountsColSize[i];j++){
            sum += accounts[i][j];
        }
        if(sum>ans) ans = sum;
    }
    return ans;
}