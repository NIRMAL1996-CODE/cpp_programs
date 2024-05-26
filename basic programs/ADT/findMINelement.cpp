// write a program find smallest elements in an array//
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
int min(struct array arr)//to find the minimum element in an array//
{
    int min= arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    
        if(arr.A[i]<min)
        {
            min=arr.A[i];
        }
        return min;
}
int main()
{
    struct array arr={{2,3,4,5,6,7,8,9},10,8};
     printf("%d\n",min(arr));
        display(arr);
    
    return 0;
}
