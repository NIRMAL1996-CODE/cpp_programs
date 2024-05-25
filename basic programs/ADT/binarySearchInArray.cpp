// write a program find key elements in an array using binary search//
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

int binarySearch(struct array arr, int key)//way to search a key element from a sorted array//
{
    int l,mid,h; //need three variables l=low=0thINDEX, h=high=lastINDEX, mid.
    l=0;
    h= arr.length-1; //to know the lastindex//
    while(l<=h)//check low is not more than high//
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])// check mid is key?//
        {
            return mid;
        }
        else if(key<arr.A[mid])//when key is at left side of mid//
        {
            h= mid-1;
        }
        else //when key is at right side of mid//
        {
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d\n",binarySearch(arr,5));
        display(arr);
    
    return 0;
}
