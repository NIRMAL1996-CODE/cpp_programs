// write a program to reverse all elements in an array//
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
        printf("%d  ",arr.A[i]);
}
 void reverse(struct array *arr)
{
     int *b; //declared oscillatory array take a pointer b //
     int i,j;
     b=(int *)malloc(arr->length*sizeof(int));//need array b size = to array A,so take size of array A and create array b from heap//
     
     for(i=arr->length-1,j=0;i>=0;i--,j++)//reverse 
        
               b[j]=arr->A[i];
         
     for(i=0;i<arr->length;i++)//cpoy reverse elements
     {
         arr->A[i]=b[i];
     }
 }

int main()
{
    struct array arr={{2,3,4,5,6,7,8,9},10,8}; //synatx:- array={elements},size,number of element wnna display//
    reverse(&arr);
        display(arr);
    
    return 0;
}
