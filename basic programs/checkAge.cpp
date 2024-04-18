//Write condition to check age of a person//
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout <<" ENTER AGE ="<< endl;
    cin>>age;
    if(age>=12 || age<=50)
    {
        cout<<"young";
    }
    else
    {
        cout<<"not young";
    }
    return 0;
}