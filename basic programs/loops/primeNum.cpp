//write aprogram to find the number is perfect number//
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"ENTER NUMBER=";
    cin>>n;
       for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
        return 0;
    }