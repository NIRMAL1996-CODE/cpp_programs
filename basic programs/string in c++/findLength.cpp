//write a program in c++ to print the lenght of a string//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"ENTER A STRING = ";
    getline(cin,str);
    cout<<"length of string= "<<str.length()<<endl;
    cout<<"string= "<<str<<endl;
    return 0;
}