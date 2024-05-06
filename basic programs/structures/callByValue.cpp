//write a program to create a structure as a parameter(call by value)//
#include<iostream>
using namespace std;
//int area(struct rectangle r1);
void fun(struct rectangle r1);
struct rectangle
{
  int  length;
   int breadth;
};
int main()
{
    struct rectangle r={10,20};
    fun(r);
   // cout<<"area="<<area(r)<<endl;
    return 0;
}

/*
 int area(struct rectangle r1)//call by value //
{
    return r1.length* r1.breadth;
}
 */
void fun(struct rectangle r1)// call by value
{
    r1.length=20;
    r1.breadth=69;
    cout<<"length="<<r1.length<<endl<<"breadth="<<r1.breadth<<endl;
    
}
