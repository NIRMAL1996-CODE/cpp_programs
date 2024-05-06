//Monolithic program
//monolithic refers to a software design where tht entire program is contained in a single executable file
#include<iostream>
using namespace std;
int main()
{
    int length=0, breadth=0;
    cout<<"enter length="<<length<<endl;
    cin>>length;
    cout<<"enter breadth="<<breadth<<endl;
    cin>>breadth;
    int area= length*breadth;
    int perimeter=2*(length+breadth);
    cout<<"AREA = "<<area<<endl<<"PERIMETER = "<<perimeter<<endl;
    return 0;
}
