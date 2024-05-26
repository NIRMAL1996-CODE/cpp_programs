// write a program to replace element at particular index//
#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d  \n",arr.A[i]);
}
void set(struct array *arr, int index,int x)//to replace element at particular index(call by address i.e. pointers//
{
    if(index>=0 && index<arr->length)
        arr->A[index]=x;
}
int main()
{
    struct array arr={{2,3,4,5,6,7,8,9},10,8};
     set(&arr,2,15);//syntax:- set(address of arr, index, value)
        display(arr);
    
    return 0;
}