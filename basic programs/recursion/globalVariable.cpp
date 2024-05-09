// write a program that uses global variables in recursion //
#include<iostream>
using namespace std;

 int x=0;
int fun1(int n)
{
    if(n>0)
    {
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}

int main()
{
    int r;
    r=fun1(5);
    cout<<r<<endl;
    return 0;
}
