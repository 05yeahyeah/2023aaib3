/// week03-1.cpp �Ҹ��D��:���c�ȺɡA���O�L�k����
/// �]�� range-based for �j�� �����b c++11 (2011����)�~���
/// �p�G�ϥ� c++98 (1998�~��c++) �|�L�k���T�sĶ�B����|�X���B�j��X����
/// CodeBlocks 17.12 �� Setting-Compiler �ĲĤG�� -std=c++11
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