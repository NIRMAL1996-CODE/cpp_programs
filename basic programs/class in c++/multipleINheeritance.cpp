//derived class from more than one base class, using a comma-separated list//
#include<iostream>
using namespace std;
//base class
class myclass
{
public:
    void fun()
    {
        cout<<"base class1 = HELLO EVERYONE!\n";
    }
};
//base class2
class yourclass
{
public:
    void fun2()
    {
        cout<<"base class2 = hello hello\n";
    }
};
//derived class
class otherclass: public myclass, public yourclass{
};

int main()
{
    otherclass obj;
    obj.fun();
    obj.fun2();
    return 0;
}

