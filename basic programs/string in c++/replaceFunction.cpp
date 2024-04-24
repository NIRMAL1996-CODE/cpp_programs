//write a program in c++ to REPLACE a string//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"ENTER A STRING = ";
    getline(cin,str);
    cout<<"AFTER replace string= "<<str.replace(3,4,"aa")<<endl;
    return 0;
}