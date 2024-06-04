//write program to create a node in c//
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
    struct node *head=NULL;//create a pointer to stroe store address//
    head =(struct node*)malloc(sizeof(int));//create MEMORY for node//
    
    head->data =45;// initialisation of data//
    head->link=NULL;//initialisation of link //
    printf("%d\n", head->data);//print output //
    return 0;
}
