/// week12-1.cpp 學習資料結構的 struct vs. class
#include <iostream>
#include <string>
using namespace std;

///struct Node {}; /// 都有分號結尾 c語言的結構
///class Cat {}; /// c++ 的結構
struct Node{
    int val; ///value的縮寫 這個Node裡面的值
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
