/// week10-4.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    Cat(string _name){
        name = _name;
    }
    void print(){
        cout << "My name is" << name <<".\n";
    }
};

int main()
{
    Cat cat1("е╒"), cat2("кс");
    cat1.print();
    cat2.print();
}
