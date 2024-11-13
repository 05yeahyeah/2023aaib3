/// week10-3.cpp 要練習 class 放很多資料
#include <iostream>
#include <string>
using namespace std;

class Cat { ///類別
public:
    string name; ///變數、資料、屬性
    void print(){
        cout << "I am a cat. My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1,cat2;
    cat1.name = "花";
    cat1.print();
    cat2.name = "白";
    cat2.print();
}
