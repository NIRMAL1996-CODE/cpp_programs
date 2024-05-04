// References in c++//
#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &r=a;
    //int b= 25;
    //r=b; this means a =25 too as r=a m here 25 is assigned to r.
    cout<<a<<endl<<r<<endl;
    return 0;
}
