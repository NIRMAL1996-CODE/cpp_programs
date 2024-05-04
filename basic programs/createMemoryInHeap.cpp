//write a program to create a memory in heap in c language//
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
   // p=(int *)malloc(5*sizeof(int));  this will use in c language
    p= new int[5];  //c++
    p[0]=10; p[1]=2; p[2]=3; p[3]=4; p[4]=3;
    for(int i=0;i<5;i++)
        cout<<p[i]<<endl;
    delete [] p; //c++
    //free(p); this will use in c language
    return 0;
}
