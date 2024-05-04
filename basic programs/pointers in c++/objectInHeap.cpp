// write  a prohgram to create object of structure in heap using malloc//
#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    /* in c language you can create object like this in heap
     struct rectangle *p;
     p = (struct rectangle*)malloc(sizeof(rectangle));
     p->length= 20;
     p->breadth= 30;
     cout<<p->length<<endl<<p->breadth<<endl;
     */
    rectangle *p;//make object of structure in heap in c++
    p = new rectangle;
    p->length= 20;
    p->breadth= 30;
    cout<<p->length<<endl<<p->breadth<<endl;
    return 0;
}
