//week09-1a.cpp 學習計畫 Matrix 第3題

//Leetcode 54.Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i=0,j=0,dir=0; // 0右、1下、2左、3上
        int dI[4] = {0,1,0,-1}; // 移動的值
        int dJ[4] = {1,0,-1,0}; // 移動的值

        vector<int> ans;
            for(int k=0;k<N-1;k++){
                ans.push_back(matrix[i][j]); //把答案放入ans
                i += dI[dir]; // 移動的值
                j += dJ[dir]; // 移動的值
        }
        return ans;
    }
};