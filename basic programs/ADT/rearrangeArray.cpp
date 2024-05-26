// write a program to rearranging positive elements and negative elements//
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

void swap(int *y, int *z)
{
    int temp;
    temp = *y;
    *y = *z;
    *z = temp;
}
void reArrange(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}
int main()
{
    struct array arr={{2,-3,14,-15,-16,17,-28,39},10,8}; //synatx:- array={elements},size,number of element wnna display//
         reArrange(&arr);
        display(arr);
    
    return 0;
}
