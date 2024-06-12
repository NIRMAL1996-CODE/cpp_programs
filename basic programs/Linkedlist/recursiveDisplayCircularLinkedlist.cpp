//write a program recursive version to display the circular linkedlist//
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

int main()
{
    int A[]={1,3,5,6,8};
    create(A,5);
    Rdisplay(head);
    return 0;
}
