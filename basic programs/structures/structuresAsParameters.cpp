//write a program to create a structure as a parameter//
#include<iostream>
using namespace std;
int area(struct rectangle r1);
struct rectangle
{
  int  length;
   int breadth;
};
int main()
{
    struct rectangle r={10,20};
    cout<<"area="<<area(r)<<endl;
    return 0;
}

int area(struct rectangle r1)
{
    return r1.length* r1.breadth;
}