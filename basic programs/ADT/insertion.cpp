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
{//this function is use to add elements anywhere in the array by shifting other elements for freeup the index//
    int i;
    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];//cpoying and shifting elements using for loop//
        arr->A[index]=x; //insertion of value on given index//
        arr->length++; //increment in length//
    
    }
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    insert(&arr,2,10);//syntax-: insert(index,value)//
    display(arr);
    
    return 0;
}
