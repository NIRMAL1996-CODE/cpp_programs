// write  a program to create pointer to access variables in structure//
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    rectangle r={ 10,20};
    cout<<r.length<<endl<<r.breadth<<endl;
    
    rectangle *p;//from here access throught pointers
    p=&r;
    cout<<p->length<<endl<<p->breadth<<endl;
    return 0;
}
