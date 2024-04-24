//write a program to find the smallest element in a Array//
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,6,8,99,20,1};
    int size=sizeof(a)/sizeof(a[0]);
    int max=a[0];
    cout<<"SMALLEST ELEMENT IN ARRAY= ";
    for(int i=0;i<size;i++)
    {
        if(max>a[i])
        {
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}