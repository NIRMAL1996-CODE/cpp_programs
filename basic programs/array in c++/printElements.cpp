// write a program to print all the elements of array//
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,33,444,55};
    int size= sizeof(a)/sizeof(a[0]);
    cout<<"ELEMENTS OF ARRAY =\n";
    for (int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}