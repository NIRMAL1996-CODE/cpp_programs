//write a program to find speed//
#include<iostream>
using namespace std;
int main()
{
   int u,v,a;
   float speed;
   cout<<"ENTER 3 NUM ";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"SPEED IS "<<speed;
    return 0;
}