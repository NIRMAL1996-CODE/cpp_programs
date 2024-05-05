//write a program to make a function to print all the elements of array//
#include<iostream>
using namespace std;

void fun(int a[],int size);
int main()
{
    int a[]={2,4,5,6,7};
    int n= 5;
    fun(a,n);
    //cout<<a<<endl;
    return 0;
}
void fun(int a[], int size) /* here x refers to pointer only whether write * or [] both are taken as pointer for array in defining function . Array always pass by address*/
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
