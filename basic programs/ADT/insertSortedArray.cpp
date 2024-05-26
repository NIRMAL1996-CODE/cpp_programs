// write a program to insert new element in a sorted array//
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
 void insertsorted(struct array *arr, int x)
{
     int i= arr->length-1;
     if(arr->length==arr->size)//1st check if there is any free space or not//
         //if length= size than there is no free space//
         return ;//so to stop function simply say return.//
     //and space is there than continue with while//
     while(i>=0 && arr->A[i]>x)
     {
         arr->A[i+1]=arr->A[i];//shifts elements only if condition is true to free space for new element which need to be insert//
         i--;
     }
     arr->A[i+1]= x;//through this the inserting element//
     arr->length++;//also length also get increment//
 }

int main()
{
    struct array arr={{2,3,14,15,16,17,28,39},10,8}; //synatx:- array={elements},size,number of element wnna display//
    insertsorted(&arr,4); //syntax:- insertsorted(array object, value of element)
        display(arr);
    
    return 0;
}
