//write a program to find whether a number is odd or even//
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout <<" ENTER A NUMBERS ="<< endl;
    cin>>a;
    cout<<" NUMBER IS  ";
    if(a%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}