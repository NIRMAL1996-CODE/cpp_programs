//write a program to find the maximum number between two numbers//
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout <<" ENTER TWO NUMBERS ="<< endl;
    cin>>a>>b;
    cout<<"GREATER NUMBER IS  ";
    if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
    return 0;
}