//write a program to find the largest element in a Array//
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,6,8,9};
    int size=sizeof(a)/sizeof(a[0]);
    int max=0;
    cout<<"LARGEST ELEMENT IN ARRAY= ";
    for(int i=0;i<size;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<max;
    return 0;
}