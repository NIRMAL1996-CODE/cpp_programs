//write a program in c++ to copy a string//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char s[10];
    cout<<"ENTER A STRING = ";
    getline(cin,str);
    str.copy(s,str.length());
    //str.copy(s,3);
    cout<<s<<endl;
    return 0;
}