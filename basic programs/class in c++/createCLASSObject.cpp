//create a class//
#include<iostream>
using namespace std;
class myclass
{
public:
    int mynum;
    string mystring;
};

int main()
{
    myclass myobj;
    myobj.mynum=15;
    myobj.mystring="HELLO";
    cout<<myobj.mynum<<"\n";
    cout<<myobj.mystring<<endl;
    return 0;
}