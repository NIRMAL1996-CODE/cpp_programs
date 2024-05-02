//write a program writing in a file//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("my.txt",ios::trunc);
    ofs<<"john"<<endl;
    ofs<<26<<endl;
    ofs<<"css"<<endl;
    
    ofs.close();
}