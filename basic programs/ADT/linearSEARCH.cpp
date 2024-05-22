// write a program find key elements in an array using linear search//
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

int linearSearch(struct array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
            return i;
    }
    return -1;
}

int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d\n",linearSearch(arr,4));
        display(arr);
    
    return 0;
}
