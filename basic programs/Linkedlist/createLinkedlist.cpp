//write a program to create a linkedlist//
#include<iostream>
#include<stdlib.h>
using namespace std;
/* create a node:-
 u can create using sturctures
 node have two part:-
 1st= data which contains value and
 2nd= link which contains reference(address) of its next node and if there is no next node,
 it will NULL.
 thats why we need two variables and here they are-
*/
struct node
{
    int data;//this denotes to data in a node
    struct node *next;/*to denote reference part of node,so, we need pointer as it contains address and
    to point to an address we always needs a pointer*/
};
struct node *firstnode=NULL;//pointer to create a 1st node(can declare as global or local & initialise it with NULL as right now its empty)//

//function to create a linkedlist//
void createlinkedlist(int a[], int n)//parameters to copy the value of actual parameters//
{   int i;
    struct node *t, *lastnode;//temp will use to create a new node everytime and lastnode is use to link node to last node//
    firstnode=(struct node*)malloc(sizeof(struct node));//create a memory 1st using malloc function and tycaste with struct node datatype as we need that kind of memory//
    firstnode->data=a[0];//with pointers we always use arrow to point any variable//
    firstnode->next=NULL;
    /*If there is no next node, the reference (or pointer) part of the node contains a null value, indicating the end of the linked list.  No,a node in a linked list does not typically contain its own address in the reference (or pointer) part. The reference part points to the address of the next node in the list, while the data part contains the actual value or data of the node. The reference part should never point to its own address as that would create a self-referential loop, which is not the intended structure of a linked list*/
   
    lastnode=firstnode;//as no next node is their,first will become last//
  
    for(i=1;i<n;i++)//loop for other nodes//
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        lastnode->next=t;//linking to last//
        lastnode=t;//making it new last//
        // The line lastnode->next = t; links the current last node to the newly created node t,                     while lastnode = t; updates the last node pointer to t, making t the new last node.//
        
    }
}
//function to display elements of linkedlist//
     void display(struct node *p)//so, firstnode pointer become p here and pointer p points on 1stnode here//
        {
           while(p!=NULL)
           {
               printf("%d \n",p->data);//it will display the data and move to next node ,,untill p becomes NULL//
               p=p->next;
           }
        }

int main()
{
    int a[]={1,2,3,4,5};
    createlinkedlist(a,5);
    display(firstnode);
    return 0;
}
