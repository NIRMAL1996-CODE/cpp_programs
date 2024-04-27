//create a class with constructor//
#include<iostream>
using namespace std;
class my
{
public:
    my()
    {
        cout<<"HELLO WORLD"<<endl;
    }
};

int main()
{
    my obj; //by creating object it automatically call the constructor of class//
    return 0;
}