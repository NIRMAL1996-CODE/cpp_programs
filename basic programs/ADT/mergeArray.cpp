// write a program to merge two array in single array//
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
struct array* merge(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])
             arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+ arr2->length;
    arr3->size=10;
    return arr3;
}

int main()
{
    struct array arr1={{2,3,4,5,16},10,5};
    struct array arr2={{1,7,15,36,97},10,5};
    struct array *arr3;
    arr3=merge(&arr1, &arr2);
        display(*arr3);
    
    return 0;
}

