//object oriented program to find area and perimeter of rectangle//
#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    
    void initialise(int l ,int b)
    {
        length=l;
        breadth= b;
    }
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
    rectangle r;
    int l,b;
    cout<<"enter length=";
    cin>>l;
    cout<<"enter breadth=";
    cin>>b;
    r.initialise(l,b);
    
    int a= r.area();
    int p= r.perimeter();
    
    cout<<"AREA ="<<a<<endl<<"PERIMETER ="<<p<<endl;
    return 0;
}
