//create a class method(function)with objects//
#include<iostream>
using namespace std;
class cls
{
public:
    void method()
    {
        cout<<"HELLO WORLD"<<endl;
    }
};

int main()
{
    cls obj;
    obj.method();
    return 0;
}