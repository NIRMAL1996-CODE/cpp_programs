//write a program in c++ to print a string//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"ENTER A STRING = ";
    //cin>>str; this will only print single string
    getline(cin,str);//this will print multiple strings
    cout<<str<<endl;
    return 0;
}