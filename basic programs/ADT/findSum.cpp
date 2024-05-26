// write a program find sum and average of all elements in an array//
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
int sum(struct array arr)//to find the sum of all elements

{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}

float AVG(struct array arr)//to find the average//
{
    return (float)sum(arr)/arr.length;
}

int main()
{
    struct array arr={{2,3,4,5,6,7,8,9},10,8};
     printf("%d\n",sum(arr));
    printf("%f\n",AVG(arr));
        display(arr);
    
    return 0;
}

