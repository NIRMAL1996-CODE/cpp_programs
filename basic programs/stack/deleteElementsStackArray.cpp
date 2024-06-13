// the implementation of stack using array//
//write a program to delete elements in stack using array//

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


int main()
{
    struct stack st;
    create(&st);
    
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    
    printf("%d \n",pop(&st));
    display(st);
    
    return 0;
}
