/// week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string>
using namespace std;

///struct Node {}; /// ������������ c�y�������c
///class Cat {}; /// c++ �����c
struct Node{
    int val; ///value���Y�g �o��Node�̭�����
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
