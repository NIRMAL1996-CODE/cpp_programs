//write a program to find the key element in linkedlist using linear search with move to front operation//
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
        return INT32_MIN;
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

int Rmin(struct node *p)
{
    int x=0;
    if(p==0)
        return INT32_MAX;
    x=Rmin(p->next);
    if(x<p->data)
        return x;
    else
        return p->data;
}

struct node *Lsearch(struct node *p, int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
            return p;
        p=p->next;
    }
    return NULL;
}

struct node *RLsearch(struct node *p, int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return RLsearch(p->next, key);
}

struct node *Lsearch1(struct node *p, int key)
{
    struct node *q=NULL;
  
    while(p!=NULL)
    {
      
        if(key==p->data)
        {
            q->next= p->next;
            p->next= first;
            first =p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

int main()
{
    struct node *temp;
    int A[]={3,4,5,6,7,8,9};
    create(A,7);
   
    temp=Lsearch1(first,4);
     temp=Lsearch1(first,7);
    if(temp)
        printf("key found %d\n",temp->data);
    else
        printf("key not found\n");
    display(first);
    return 0;
    
}

