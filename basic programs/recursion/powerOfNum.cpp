//write a program using recursion to find the power of number//
#include<iostream>
using namespace std;
int pow(int m, int n)
{   if(n==0)
        return 1;
    return pow(m,n-1)*m;
}

int main()
{
    int r;
    r=pow(2,9);
    cout<<r<<endl;
    return 0;
}
