//Write program to display grade for student marks//
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout <<" enter number ="<< endl;
    cin>>marks;
    cout<<"GRADE= "<<endl;
    if(marks>=90 && marks>=80)
    {
        cout<<"A";
    }
    else if(marks>=70 && marks>=60)
    {
        cout<<"B";
    }
    else
    {
        cout<<"D";
    }
    return 0;
}