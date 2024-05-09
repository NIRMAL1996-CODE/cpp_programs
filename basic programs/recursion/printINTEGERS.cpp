// write a program that uses recursion to print number 1 to 10//
#include<iostream>
using namespace std;

void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        cout<<n<<" "<<endl;
    }
}

int main()
{
    int x=10;
    fun1(x);
    return 0;
}
