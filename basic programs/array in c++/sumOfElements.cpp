//write a program to find the sum of all the elements of array//
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[]={20,40,60,80};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"sum= ";
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}