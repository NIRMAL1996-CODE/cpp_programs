//write aprogram to print digit in a number//
#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout<<"ENTER NUMBER=";
    cin>>n;
        for(int i=1;n>0;i++)
   {
       digit=n%10;
       n=n/10;
       cout<<digit<<" ";
   }
        return 0;
    }