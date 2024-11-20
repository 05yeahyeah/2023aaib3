/// week11-6.cpp 學習計畫 Math 第五題
/// LeetCode 1232. Cheak If It Is a Straight Line
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int N = coordinates.size(); // 全部有幾個點？
        int x0 = coordinates[0][0],y0 = coordinates[0][1];
        int x1 = coordinates[1][0],y1 = coordinates[1][1];
        for(int i=1;i<N;i++){
            int xi = coordinates[i][0], yi = coordinates[i][1];
            if( (y1-y0)*(xi-x0) != (yi-y0)*(x1-x0)) return false;
        }
        return true;
    }
};
