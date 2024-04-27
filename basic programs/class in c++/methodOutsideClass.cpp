//create a class method(function) outside the class using scope resolution operator with objects//
#include<iostream>
using namespace std;
class cls
{
public:
    void method();
};

void cls::method()
{
    cout<<"HELLO WORLD"<<endl;
}

int main()
{
    cls obj;
    obj.method();
    return 0;
}