// week13-4.cpp 使用Leetcode 的 Playground 遊樂場 寫程式
// 右下角有stdin 可輸入資料 輸入自己的數字
int main() {
    std::cout << "Hello World!\n";
    int a,b;
    vector<int> A,B;
    while(cin >>a >>b){
        A.push_back(a); //把數字a 放入 陣列A
        B.push_back(b); //把數字b 放入 陣列B
    }// 目標: 把A從小到大排好 把B從小到大排好
    sort(A.begin(),A.end() );
    sort(B.begin(),B.end() );
    int ans=0;
    for(int i=0;i<A.size();i++){
        cout << A[i] << " ";
        ans += abs(A[i] - B[i]); // 相減，只取正的
    }
    cout << "加起來的答案是" << ans;
}