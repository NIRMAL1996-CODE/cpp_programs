//write program to create a single linkedlist in c//
#include<stdio.h>
#include<stdlib.h>
//to create a node use structure//
struct node
{
    int data; //declare variable to store data //
    struct node *link;//declare variable to store address//
};

int main()
{
    struct node *head1;
    head1 =(struct node*)malloc(sizeof(int));
    head1->data =45;
    head1->link=NULL;
    printf("%d\n", head1->data);
    
    struct node *head2;
    head2 =(struct node*)malloc(sizeof(int));
    head2->data =55;
    head2->link=NULL;
    head1->link=head2;
    printf("%d\n", head2->data);
    
    head2 =(struct node*)malloc(sizeof(int));
    head2->data =65;
    head2->link=NULL;
    head1->link->link=head2;//to link nodes without creating pointer again andd again//
    printf("%d\n", head2->data);
    return 0;
}
