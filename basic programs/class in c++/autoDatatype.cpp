//write a program using auto datatype//
#include<iostream>
using namespace std;

float fun()
{
    return 2.43f;
}
int main()
{
    auto x=fun();
    cout<<x<<endl;
    return 0;
}