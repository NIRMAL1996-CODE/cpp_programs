//write aprogram to find the sum of n natural numbers//
#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"ENTER NUMBER=";
    cin>>n;
  for(int i=1;i<n;i++)
        {
            sum+=i;
        }
        cout<<sum;
        return 0;
    }