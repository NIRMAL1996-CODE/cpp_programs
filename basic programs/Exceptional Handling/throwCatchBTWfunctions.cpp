/*Write a C++ program that performs division of two numbers provided by the user(using throw and catch between functions.*/

#include<iostream>
#include<stdexcept>//library for exception class//

using namespace std;
int division( int a , int b)
{
    if(b==0)
        throw 1;
    return a/b;
}
int main()
{
    int x=10,y=0,z;
    
    try 
    {
        z=division(x,y);
        cout<<z<<endl;

        
    } catch (int e)
    {
        cout<<"DIVISION BY ZERO "<<e<<endl;
    }
    cout<<"BYE"<<endl;
}
