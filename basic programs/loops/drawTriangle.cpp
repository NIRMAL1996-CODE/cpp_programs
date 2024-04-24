//write a program to print a triangle pattern//
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"ENTER NUMBER OF ROWS = ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
    }