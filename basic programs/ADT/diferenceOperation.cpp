// write a program to perform difference operation on sets of array//
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

//Union helps to not to print common elements//
struct array* Union(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])
             arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++]=arr2->A[j++];
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

//intersection operation helps in finding the common elements between two sets of array//
struct array* intersection(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])//if 1st set element is smaller just do increment//
             i++;
        else if(arr2->A[j]<arr1->A[i])//if 2nd set element is smaller just do increment//
            j++;
        else if(arr1->A[i]==arr2->A[j])//but if you find common print //
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
   
    arr3->length=k;
    arr3->size=10;
    return arr3;
}
//difference operation only take elements of 1st array which are only present in 1st array and not a common as well//
struct array* difference(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])//here only array 1 set elements are copy//
             arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else
        {
            i++;//if both having common skip both n just do increment in both//
            j++;
        }
    }
    for(;i<arr1->length;i++)//only copy element from array 1 not from array 2//
        arr3->A[k++]=arr1->A[i];
    
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

int main()
{
    struct array arr1={{2,3,4,15,36},10,5};
    struct array arr2={{1,2,15,36,47},10,5};
    struct array *arr3;
    arr3=difference(&arr1, &arr2);//give preference to 1st array only//
        display(*arr3);
    
    return 0;
}

