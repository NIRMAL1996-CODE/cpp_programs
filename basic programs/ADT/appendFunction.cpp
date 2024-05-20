// write a program using inserting operations in an array//
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

void Append(struct array *arr, int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    Append(&arr,10);
    display(arr);
    
    return 0;
}
