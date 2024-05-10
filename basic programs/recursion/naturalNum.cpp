//write a program using recursion to find the sum of n natural number//
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int main()
{
    int r;
    r=sum(5);
    cout<<r<<endl;
    return 0;
}
