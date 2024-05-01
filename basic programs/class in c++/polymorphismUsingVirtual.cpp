
//polymorphism using virtual//
#include<iostream>
using namespace std;
class car
{
public:
    virtual void start()
    {
        cout<<"car started"<<endl;
    }
};
class Innova : public car
{
public:
    void start()
    {
        cout<<"Innova started"<<endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout<<"swift started"<<endl;
    }
};
int main()
{
    car *p;
    p= new Innova();
    p->start();
    p= new swift();
    p->start();
    return 0;
}




