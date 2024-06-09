//write a program to find the minimum of elements in linkedlist//
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d \n",p->data);
        p=p->next;
    }
}

void rDisplay(struct node *p)
{
  if(p!=NULL)
  {
    printf(" %d ",p->data);
    rDisplay(p->next);
  }
}

int count(struct node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct node *p)
{
    if(p!=NULL)
        return Rcount(p->next)+1;
    else
        return 0;
}

int sum(struct node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}
int Rsum(struct node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rsum(p->next)+p->data;
}

/*In C, you can obtain the maximum value representable by an int data type using the constant INT_MAX, which is defined in the <limits.h> header file.

So, you can include <limits.h> at the beginning of your code and use INT_MAX to represent the maximum value for an integer.This sets the variable max to the minimum value representable by an int in the current environment. Here's how you would use it:*/
int max(struct node *p)
{
    int max= INT32_MIN;
    while(p!=NULL)
    {
        if(p->data> max)
        max=p->data;
        p=p->next;
    }
    return max;
}

int Rmax(struct node *p)
{
    int x=0;
    if(p==0)
        return 0;
    x=Rmax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;
}

int min(struct node *p)
{   int min =INT32_MAX;
    while(p!=NULL)
    {
        if(p->data < min)
        min=p->data;
        p=p->next;
    }
    return min;
}

int main()
{
    int A[]={3,4,5,6,7,8 };
    create(A,5);
    display(first);
    printf("minimum element = %d\n",min(first));
    return 0;
    
}

