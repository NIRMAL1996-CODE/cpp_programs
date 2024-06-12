//write a program to display the circular linkedlist//
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

int main()
{
    int A[]={1,3,5,6,8};
    create(A,5);
    display(head);
    return 0;
}
