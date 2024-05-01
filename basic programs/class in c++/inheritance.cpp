//write a program to inherit attributes and methods from base class//
#include<iostream>
//base class
using namespace std;
class vehicle
{
public:
    string brand= "ford ";
    void honk()
    {
        cout<<"tuut,tuut \n";
    }
};

//derived class
class car:public vehicle
{
public:
    string model="mustang";
};

int main()
{
    car obj;
    obj.honk();
    cout<<obj.brand +" "+obj.model<<endl;
    return 0;
}
