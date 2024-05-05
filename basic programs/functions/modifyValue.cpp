//write a program to make a function to print all with modify in elements of array//
#include<iostream>
using namespace std;

void fun(int a[],int size);
int main()
{
    int a[]={2,4,5,6,7};
    int n= 5;
    fun(a,n);
    for(int x:a)
    {
        cout<<x<<endl; //remember here take variable not array/ e.g. x/
    }
    return 0;
}
void fun(int a[], int size)
{
    a[0]=29;
}
