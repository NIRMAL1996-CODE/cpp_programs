//create program to call destructor//
#include<iostream>
using namespace std;

class demo
{
public:
    demo()
    {
        cout<<"constructor of demo"<<endl;
    }
    ~demo()
    {
        cout<<"destructor of demo"<<endl;
    }
};
 void fun()
{
     demo *p= new demo(); //this will only call constructor
     delete p;// need to delete by calling destructor
 }
int main()
{
    fun();
    return 0;
}
