//write a program to find positive and negative element of a Array//
#include<iostream>
using namespace std;
int main()
{
    int a[]={8,9,-7,6,-5,4,3};
    int size=sizeof(a)/sizeof(a[0]);
    
        for(int i=0; i<size;i++)
        {
            if(a[i]>0)
            {
                cout<<"ELEMENT "<<a[i] << " IS POSITIVE"<<endl;
            }
            else
            {
                cout<<"ELEMENT "<<a[i]<< " IS NEGATIVE"<<endl;
            }
        }
    
    
    return 0;
}