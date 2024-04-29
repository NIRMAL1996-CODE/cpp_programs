//write aprogram to check that number is palindrome number//
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    int num=n;
    cout<<"ENTER NUMBER=";
    cin>>n;
    for(int i=1;n>0;i++)
    {
       r=n%10;
       n=n/10;
       rev=rev*10+r;
   }
   cout<<rev<<" ";
   if(rev==num)                                                                                                                         
   cout<<"its palindrome";
   else
   cout<<"its not a palindrome";
        return 0;
    }