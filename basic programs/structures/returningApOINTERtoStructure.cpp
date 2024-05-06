//write a program to create a structure(returning a pointer to structure)//
#include<iostream>
using namespace std;

struct rectangle
{
  int  length;
   int breadth;
};

struct rectangle *fun()
{
    struct rectangle *p;
    p=new rectangle;
    //p=(struct rectangle *)malloc(sizeof(struct rectangle)); (in c)
    p->length=26;
    p->breadth=9;
    return p;
}
int main()
{
    
    struct rectangle *ptr=fun();
   
    cout<<"length="<<ptr->length<<endl<<"breadth="<<ptr->breadth<<endl;
    return 0;
}


