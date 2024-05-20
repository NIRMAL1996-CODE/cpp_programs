// write a program using insertion operations to insert elements in an array//
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
void insert(struct array *arr, int index, int x )
{
    int i;
    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    
    }
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    insert(&arr,2,10);
    display(arr);
    
    return 0;
}
