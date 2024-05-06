//write a program to create a structure as a parameter(call by address)//
#include<iostream>
using namespace std;

void fun(struct rectangle *p);
struct rectangle
{
  int  length;
   int breadth;
};
int main()
{
    struct rectangle r={10,20};
    fun(&r);
   
    cout<<"length="<<r.length<<endl<<"breadth="<<r.breadth<<endl;
    return 0;
}

void fun(struct rectangle *p)// call by value
{
    p->length=20;
    p->breadth=69;
    cout<<"length="<<p->length<<endl<<"breadth="<<p->breadth<<endl;
    
}
