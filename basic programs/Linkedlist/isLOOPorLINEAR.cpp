//write a program to check that a linkedlist having a loop or linear//
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first=NULL, *second=NULL, *third=NULL;

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

void create2(int B[], int n)
{
    int i;
    struct node *t, *last;
    second=(struct node*)malloc(sizeof(struct node));
    second->data=B[0];
    second->next=NULL;
    last=second;
    
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d  ",p->data);
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

void insert(struct node *p, int index, int x)
{
    
    struct node *t;
    int i;
    if(index < 0 || index > count(p))
        return;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    
    if(index== 0)//check where to insert//
    {  //this how to insert at 1st position//
        t->next= first;
        first = t;
    }
    else
    {
        if(index>0)
        //if index is not zero lets go to the given position than insert,, so for that move pointer to given indexand insert an element and to do so we need a for loop//
        for(i=0;i<index-1;i++)
        {
            p=p->next;
            t->next=p->next;
            p->next=t;
        }
    }
}

void sortedInsert(struct node *p, int x)
{
    struct node *t,*q= NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    
    if(first==NULL)
        first= t;
    else
    {
        while(p && p->data < x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next= first;
            first=t;
        }
        else
        {
            t->next= q->next;
            q->next=t;
        }
    }
}

int Delete(struct node *p, int index)
{
    int i;
    struct node *q=NULL;
    int x=-1;
    
    if(index < 1 || index > count(p))
        return -1;
    if(index==1)
    {
        q=first;
        x= first->data;
       first= first->next;
        free(q);
        return x;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}

int isSorted(struct node *p)
{
    int x=-65536;
    
    while(p!=NULL)
    {
        if(p->data < x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;
}

void removeDuplicate(struct node *p)
{
    struct node *q=p->next;
    while(q!=NULL)
    {
        if(p->data!= q->data)
        {
            p=q;
            q=p->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

void reverse1(struct node *p)
{
    int *A, i=0;
    
    A=(int*)malloc(sizeof(int)*count(p));
    struct node *q =p;
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

void reverse2(struct node *p)
{
    struct node *q= NULL, *r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first =q;
}

void reverse3(struct node *q, struct node *p)
{
    if(p)
    {
        reverse3(p,p->next);
        p->next=q;
    }
    else
        first=q;
}

void concat(struct node *p, struct node *q)
{
    third=p;
    while(p->next!=NULL)
        p=p->next;
        p->next=q;
}

void merge(struct node *p, struct node *q)
{
    struct node *last;
    if(p->data < q->data)
    {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
}

int isLoop(struct node *f)
{
    struct node *p, *q;
    p=q=f;
    do 
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while (p && q && p!=q);
    if(p==q)
        return 1;
    else
        return 0;
}

int main()
{
    struct node *t1, *t2;
    int A[]={3,4,6,7,8};
    create(A,5);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
   
     
    printf("%d \n",isLoop(first));
   
    return 0;
    
}


