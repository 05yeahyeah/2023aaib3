/// week10-3.cpp �n�m�� class ��ܦh���
#include <iostream>
#include <string>
using namespace std;

class Cat { ///���O
public:
    string name; ///�ܼơB��ơB�ݩ�
    void print(){
        cout << "I am a cat. My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1,cat2;
    cat1.name = "��";
    cat1.print();
    cat2.name = "��";
    cat2.print();
}
