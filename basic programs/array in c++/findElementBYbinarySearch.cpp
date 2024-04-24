//write a program to find element of a Array by binary search//
#include<iostream>
using namespace std;
int main()
{
    int a[]={23,45,78,98,100},key;
    int size=sizeof(a)/sizeof(a[0]);
    bool found=false;
    int low=0,high=size-1,mid=0;
    cout<<"ENTER KEY ELEMENT = ";
    cin>>key;
        while(low<=high)
        {
               mid=(low+high)/2;
                if(key==a[mid])
                {
                    found=true;
                    break;
                }
                else if(key<a[mid])
                       {
                            high=mid-1;
                       }
                       else
                       {
                          low=mid+1;
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
