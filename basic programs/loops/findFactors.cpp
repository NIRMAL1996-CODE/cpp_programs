//write aprogram to find the factors of number//
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"ENTER NUMBER=";
    cin>>n;
  for(i=1;i<=n;i++)
        {
            if(n%i==0)
         cout<<i<<" ";
        }
        return 0;
    }