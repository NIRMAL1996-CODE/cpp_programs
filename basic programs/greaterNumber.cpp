//Write program to find maximum number//
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout <<" ENTER THREE NUMBERS ="<< endl;
    cin>>a>>b>>c;
    cout<<"maximum number is "<<endl;
    if(a>b && a>c)
    {
        cout<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"b";
    }
    else
    {
        cout<<c;
    }
    return 0;
}