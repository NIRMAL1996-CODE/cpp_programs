/*Write a C++ program that performs division of two numbers provided by the user. 
The program should handle the following exceptions:
Division by zero should throw a DivisionByZeroException.*/

#include<iostream>
#include<stdexcept>//library for exception class//
using namespace std;
int main()
{
    int x=10,y=0,z;
    try 
    {
        if(y==0)
        {
            throw 1;
        }
        else
        {
            z=x/y;
            cout<<z<<endl;
        }
    } catch (int e)
    {
        cout<<"DIVISION BY ZERO "<<e<<endl;
    }
}
