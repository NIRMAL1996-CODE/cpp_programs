// write a program on display operations on an array//
#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
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
int main()
{
    struct array arr;
    printf("enter size of an array");
    scanf("%d",&arr.size);
    int i,n;
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
    
    
    printf("enter number of numbers");
    scanf("%d",&n);
    
    printf("enter all elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;
    
    display(arr);
    return 0;
}
