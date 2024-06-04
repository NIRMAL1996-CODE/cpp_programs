//write a program to create a memory in heap//
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n;
    printf("enter size= ");
    scanf("%d",&n);
    
    int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("memory not available");
        exit(1);
    }
   
    for(i=0;i<n;i++)
    {
        printf("enter an integer: ");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
