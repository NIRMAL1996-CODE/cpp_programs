//write aprogram to print reverse a number//
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    cout<<"ENTER NUMBER=";
    cin>>n;
    for(int i=1;n>0;i++)
    {
       r=n%10;
       n=n/10;
       rev=rev*10+r;
   }
   cout<<rev;
        return 0;
    }