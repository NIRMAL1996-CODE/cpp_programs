//create a class named rectangle with object and access its member(accessor and mutator//

#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l)
    {
        if(l<0)
        length=1;
        else
            length=l;
    }
    void setBreadth(int b)
    {
        if(b<0)
        breadth= 1;
        else
            breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
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
    rectangle r1;
    r1.setLength(10);
    r1.setBreadth(15);
    cout<<"LENGTH= "<<r1.getLength()<<endl;
    cout<<"area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter()<<endl;
    return 0;
}

