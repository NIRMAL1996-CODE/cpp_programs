//write aprogram to find the number is perfect number//
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"ENTER NUMBER=";
    cin>>n;
      for(int i=1;i<=n;i++)
        {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==2*n)
    {
     cout<<"perfect";
    }
    else
    {
        cout<<"not perfect";
    }
    
        return 0;
    }