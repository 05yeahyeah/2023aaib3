// week07-4a.cpp 二合一的第一題(學習計畫simulation第二題)複習 最簡單
// 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0,y = 0;
        for(char c: moves){
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='R') x++;
            if(c=='L') x--;
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};