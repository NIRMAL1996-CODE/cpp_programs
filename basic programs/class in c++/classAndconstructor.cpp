//class and constructor
#include<iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle()    //non parameterised constructor
    {
        length=0;
        breadth=0;
    }
    rectangle(int l, int b) //parameterised constructor
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    
    void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int l)   //set are all mutators
    {
        breadth=l;
    }
    int getlength(int l)  //get are all accessors
    {
        return length;
    }
    int getbreadth(int l)
    {
        return breadth;
    }
    
    ~rectangle()   //destructors are amde to destroy dynamic memory allocation
    {
        cout<<"destructor"<<endl;
    }
};

int main()
{
    rectangle r(10,9);
    cout<<"AREA= "<<r.area()<<endl;
    cout<<"PERIMETER= "<<r.perimeter()<<endl;
    return 0;  //its printing destructor becoz once the main function is end the object get automatically destroy by call destructor function//
}

