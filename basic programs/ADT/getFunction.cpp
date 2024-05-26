// write a program find key elements in an array using get function//
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

int get(struct array arr, int index)//if want to know element on  particular index//
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
int main()
{
    struct array arr={{2,3,4,5,6,7,8},10,7};
     printf("%d\n",get(arr,5));//syntax:- get(arr,index)
        display(arr);
    
    return 0;
}

