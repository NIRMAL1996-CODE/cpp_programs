//write a program to find element of a Array by linear search//
#include<iostream>
using namespace std;
int main()
{
    int a[]={23,45,78,98,10},key;
    int size=sizeof(a)/sizeof(a[0]);
    bool found=false;
    cout<<"ENTER KEY ELEMENT = ";
    cin>>key;
        for(int i=0; i<size;i++)
        {
            if(key==a[i])
            {
                found=true;
            }
            else{
                found = false;
            }
        }
            if(found==true)
            {
                cout<<"KEY ELEMENT IS FOUND"<<endl;
            }
            else
            {
                cout<<"KEY ELEMENT NOT FOUND "<<endl;
            }
    return 0;
}
