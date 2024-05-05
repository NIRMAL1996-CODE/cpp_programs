//write a program to swap numbers using pass by reference//
#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
    int a=2, b=5;
    swap(a,b);
    cout<<"AFTER SWAPping, NUMBERS ARE"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}

void swap(int &x, int &y)
{
    int temp= x;
    x= y;
    y= temp;
}
