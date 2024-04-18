//Write condition to check is given time is Working hours or not//
#include <iostream>
using namespace std;
int main()
{
    int hours;
    cout <<" ENTER NUMBER OF HOURS ="<< endl;
    cin>>hours;
    if(hours>=9 && hours<=18)
    {
        cout<<"working";
    }
    else
    {
        cout<<"leisure";
    }
    return 0;
}