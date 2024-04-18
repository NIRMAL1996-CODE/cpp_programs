//Write program to check if a person is eligible for offer//
#include <iostream>
using namespace std;
int main()
{
   int age;
    cout <<" ENTER AGE ="<< endl;
    cin>>age;
    cout<<"PERSON IS ";
    if(age>=12 || age<=50)
    {
        cout<<"ELIGIBLE";
    }
    else
    {
        cout<<"NOT ELIGIBLE";
    }
    return 0;
}