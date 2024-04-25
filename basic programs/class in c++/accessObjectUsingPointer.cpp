//create a class named rectangle with object and access its member using pointer//
#include<iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1;
    rectangle *p;
   // rectangle *p=new rectangle(); this will use when need to create object in heap
    p=&r1;
    p->length=10;
    p->breadth=15;
    cout<<"area is "<<p->area()<<endl;
    cout<<"perimeter is "<<p->perimeter()<<endl;
    return 0;
}