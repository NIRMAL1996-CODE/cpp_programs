// write a program to increase the size of an array//
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int *p, *q;
    int i;
    p=(int *) malloc(5*sizeof(int));
    p[0]=1; p[1]=9; p[2]=8; p[3]=5; p[4]=4; p[4]=7;
    
    q=(int *) malloc(10 * sizeof(int));
    for(int i=0;i<5;i++)
    q[i] = p[i];
    
        free(p);
        p=q;
        q=NULL;
    
        for(int i=0;i<5;i++)
    
        printf("%d\n",p[i]);
    
    return 0;
}