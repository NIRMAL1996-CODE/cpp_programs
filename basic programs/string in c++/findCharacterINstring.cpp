//write a program in c++ to find a character of a string//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"ENTER A STRING= ";
    getline(cin,str);
    cout<<str.find("n")<<endl;
    return 0;
}