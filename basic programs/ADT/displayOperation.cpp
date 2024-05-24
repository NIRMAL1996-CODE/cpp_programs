// write a program on display operations on an array//
#include<stdio.h>
#include<stdlib.h>
struct array// define a structure for array ADT //
{   
    int *A;//pointer for array to create memory in heap//
    int size;//declare of variable for size of array//
    int length ;//declare of variable for length of array//
};
void display(struct array arr)//this function is used to display elements of array//
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
    int i,num;
    arr.A=(int *)malloc(arr.size*sizeof(int));/*malloc is used to dynamically allocate a block of memory
    on heap*/
    arr.length=0;
    
    
    printf("enter number of numbers");
    scanf("%d",&num);
    
    printf("enter all elements\n");
        for(i=0;i<num;i++)
        scanf("%d",&arr.A[i]);
    arr.length=num;
    
    display(arr);// display the elements of array//
    return 0;
}
