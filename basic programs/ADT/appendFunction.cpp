// write a program to perform append operations in an array//
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

void Append(struct array *arr, int x)// this function is use to add elements at the end of the array//
{
    if(arr->length<arr->size)//to do so, the length of array always smaller than size of array//
        arr->A[arr->length++]=x;//by adding new elemets the length also get increased//
}
int main()
{                  // {{elements of array},value,index};                                
    struct array arr={{2,3,4,5,6},10,5};//initialising array with index on which value will add//
    Append(&arr,10);
    display(arr);
    
    return 0;
}
