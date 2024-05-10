//write a program using recursion to print the fibonacci series//
#include<iostream>
using namespace std;
int rfib(int n)
{
    if(n<=1)
        return n;
    return rfib(n-2)+rfib(n-1);
    
}

int main()
{
    cout<<rfib(10)<<endl;
    return 0;
}
