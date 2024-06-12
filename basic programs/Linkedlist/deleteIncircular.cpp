//write a program to delete an element in the circular linkedlist//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head ;

void create(int A[], int n)// craeting a node//
{
    int i;
    struct node *t , *last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data= A[0];
    head->next=head;
    last=head;
    
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node *h)
{
    do
    {
        printf("%d ",h->data);
        h=h->next;
    }while(h!=head);
    printf("\n");
}

void Rdisplay(struct node *h )
{
    static int flag=0;
    if((h!=head) || flag==0)
    {
        flag=1;
        printf("%d ",h->data);
        Rdisplay(h->next);
    }
    flag=0;
}

int Length(struct node *p)
{
    int len=0;
    do
        {
            len++;
            p=p->next;
        }
    while (p!=head);
    return len;
}

void insert(struct node *p, int index, int x)
{
    
    struct node *t;
    int i;
    if(index<0 || index>Length(p))
        return;
    if(index==0 )
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        
        if(head==NULL)
        {
            head= t;
            head->next=head;
        }
        
        else
        {
            while(p->next!=head)p=p->next;
            t=p->next;
            t->next=head;
            head=t;
        }
    }
    else
    {
        for(i=0;i<index-1;i++)p=p->next;
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        t->next=p->next;
        p->next=t;
        
    }
}

int Delete(struct node *p, int index)
{
    int i, x;
    struct node *q;
    
    if(index < 0 || index > Length(head))
        return -1;
    if(index==1)
    {
        while(p->next!=head)p=p->next;
        x= head->data;
        if(head==NULL)
        {
            free(head);
            head=NULL;
        }
        else
        {
           p->next=head->next;
           free(head);
           head=p->next;
         }
      }
    else
    {
      for(i=0;i<index-2;i++)
      p=p->next;
      q=p->next;
      p->next=q->next;
      x=q->data;
      free(q);
    }
        return x;
}

int main()
{
    int A[]={1,3,5,6,8};
    create(A,5);
    Delete(head,2);
    display(head);
    return 0;
}
