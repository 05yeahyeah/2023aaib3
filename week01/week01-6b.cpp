// week01-6b.cpp
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0; // 迴圈前面 ans=0
        while(start>0 || goal>0){
            if(start%2 != goal%2) ans++; 
            start /= 2;
            goal /= 2;
        }
        return ans; //迴圈後面 return ans
    }
}