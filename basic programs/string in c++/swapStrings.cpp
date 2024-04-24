//write a program in c++ to swap two string//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout<<"ENTER A STRING1 = ";
    getline(cin,str1);
    cout<<"ENTER A STRING2 = ";
    getline(cin,str2);
    str1.swap(str2);
    cout<<"AFTER SWAPPING = "<<str1<<endl;
    return 0;
}