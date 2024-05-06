/*write a program to make a function to create array on heap using dynamic memory allocation than print 
all elements of array*/
#include<iostream>
using namespace std;

int *fun(int size);
int main()
{
    int *ptr,s=7;
    ptr= fun(s);
    for(int i=0;i<s;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
int *fun( int size)//useing pointers
{
    int *p;
    p= new int[size];
    for(int i=0;i<size;i++)
    {
        p[i]= i+1;
    }
    return p;
}
