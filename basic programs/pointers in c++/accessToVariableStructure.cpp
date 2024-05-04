// write  a program to access variables in structure//
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    rectangle r={ 10,20}; /*you can initialise this way too and their is no need to write struct as well in c++ ,
     its not mandatory*/
    //r.length=10;
    //r.breadth=20;
    cout<<r.length<<endl<<r.breadth<<endl;
    return 0;
}
