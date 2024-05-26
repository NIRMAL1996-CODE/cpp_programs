// write a program find maximum elements in an array//
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

int max(struct array arr)//to find the maximum element in an array//
{
    int max= arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    
        if(arr.A[i]>max)
        {
            max=arr.A[i];
        }
        return max;
}
int main()
{
    struct array arr={{2,3,4,5,6,7,8,9},10,8};
     printf("%d\n",max(arr));
        display(arr);
    
    return 0;
}
