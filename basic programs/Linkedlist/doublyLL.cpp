//write a program to  create and display the doubly linkedlist//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first= NULL;;

void create(int A[], int n)
{
    int i;
    struct node *t , *last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data= A[0];
    first->prev=first->next= NULL;
    last= first;
    
    for(i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

/*void Rdisplay(struct node *h )
{
    static int flag=0;
    if((h!=head) || flag==0)
    {
        flag=1;
        printf("%d ",h->data);
        Rdisplay(h->next);
    }
    flag=0;
}*/

int length(struct node *p)
{
    int len=0;
    while(p)
        {
            len++;
            p=p->next;
        }
    return len;
}


int main()
{
    int A[]={1,3,5,6,8};
    create(A,5);
    printf("\nlength is : %d\n",length(first));
    display(first);
    return 0;
}
