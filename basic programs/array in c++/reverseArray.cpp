//write a program to print reverse element of a Array//
#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,6,8,99,20,1};
    int size=sizeof(a)/sizeof(a[0]);
    int rev=0;
    cout<<"AFTER REVERSE ELEMENT = \n";
    size-=1;
        for(int i = size; i>=0;i--)
        {
            cout<<a[i]<<endl;
        }
    
    
    return 0;
}