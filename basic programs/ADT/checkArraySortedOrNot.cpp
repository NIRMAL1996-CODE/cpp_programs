// write a program to check that the given array is sorted or not//
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
int isSorted(struct array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])//check on sorted or not//
            return 0;//that is false//
    }
    return 1; //that is true//
}

int main()
{
    struct array arr={{2,3,14,15,16,17,28,39},10,8}; //synatx:- array={elements},size,number of element wnna display//
    printf("%d ",isSorted(arr));
        display(arr);
    
    return 0;
}
