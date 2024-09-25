/// week03-1.cpp 考試題目:除惡務盡，但是無法執行
/// 因為 range-based for 迴圈 必須在 c++11 (2011之後)才能用
/// 如果使用 c++98 (1998年版c++) 會無法正確編譯、執行會出錯、迴圈出不來
/// CodeBlocks 17.12 裡 Setting-Compiler 勾第二個 -std=c++11
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (char c : s){
		if (c!='2') cout << c;
	}
	return 0;
}
