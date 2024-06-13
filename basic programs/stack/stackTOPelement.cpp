// the implementation of stack using array//
//write a program to find the top most element of stack//

#include<stdio.h>
#include<stdlib.h>
//1st of define a structure for stack and to represent it we need size and a top pointer to point the top most element and a array for storing elements//
struct stack
{
    int size;
    int top;
    int *s;//this is for array and later we create array dynamically fir creating stack//
};

//function to create the stack ,when we create a stack we have to initialise its size and top pointer and also create an array//

void create(struct stack *st)//st is reference of stact//
{
    printf("ENTER SIZE = ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}

//to display//
void display(struct stack st)//no need of pointer as not modifying anything here//
{
    int i;
    for(i=st.top;i>=0;i--)
        printf("%d ",st.s[i]);
    printf("\n");
}
// push() to insert elements in stack using array//
void push(struct stack *st, int x)
{
    if(st->top==st->size-1)
        printf("stack overflow\n");
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
//pop() to delete elements in stack using array//
int pop(struct stack *st)
{
    int x= -1;
    if(st->top==-1)
        printf("stack underflow\n");
    else
    {
        x=st->s[st->top--];
    }
    return x;
}

// peek() to check that the given element is present in th stack or not//
int peek(struct stack st , int index)
{
    int x= -1;
    if(st.top-index<0)
        printf("invalid index");
    x=st.s[st.top-index+1];
    return x;
}
 // isEmpty() to check that stack is empty //
   int isempty(struct stack st)
{
    if(st.top==-1)
        return 1;
    return 0;
}
// isEmpty() to check that stack is full//
int isFull(struct stack st)
{
    return st.top==st.size-1;
}
//stacktop() to find the top most element of stack//
  int stacktop(struct stack st)
{
    if(!isempty(st))
        return st.s[st.top];
    return -1;
}

int main()
{
    struct stack st;
    create(&st);
    
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    
    printf("%d \n",stacktop(st));
    display(st);
    
    return 0;
}
