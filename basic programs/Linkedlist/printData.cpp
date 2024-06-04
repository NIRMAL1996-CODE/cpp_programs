//write program to traversing a single linkedlist and print data of nodes in c//
#include<stdio.h>
#include<stdlib.h>
//to create a node use structure//
struct node
{
    int data; //declare variable to store data //
    struct node *link;//declare variable to store address//
};
//create a function to count number of nodes//
void countNodes(struct node *head)
{
    int count=0;//initialpoint to  count number of nodes//
    if(head==NULL)//check whether link is null becoz if its null its not pointing to anything//
    {
        printf("linkedlist is empty");//if yes print empty//
    }
    struct node *p=NULL;//other create a pointer to assign head to it as head is not null it contains value//
    p=head;//due to this p is now point to 1st value of linkedlist//
    while(p!=NULL)//we have while loop which run untill p becomes null//
    {
        count++;
        p=p->link;//this will always change value of p link//
    }
    printf("number of nodes = %d\n",count);//print count//
}

void printData(struct node *head)
{
    int count=0;//initialpoint to  count number of nodes//
    if(head==NULL)//check whether link is null becoz if its null its not pointing to anything//
    {
        printf("linkedlist is empty");//if yes print empty//
    }
    struct node *p=NULL;
    p=head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);//this will print data value//
        p=p->link;
    }
}

int main()
{
    struct node *head;
    head =(struct node*)malloc(sizeof(int));
    head->data =45;
    head->link=NULL;
    //printf("%d\n", head->data);
    
    struct node *head1;
    head1 =(struct node*)malloc(sizeof(int));
    head1->data =55;
    head1->link=NULL;
    head->link=head1;
   // printf("%d\n", head1->data);
    
    head1 =(struct node*)malloc(sizeof(int));
    head1->data =65;
    head1->link=NULL;
    head->link->link=head1;//to link nodes without creating pointer again andd again//
   // printf("%d\n", head1->data);
    
    countNodes(head);
    printData(head);
    return 0;
}
