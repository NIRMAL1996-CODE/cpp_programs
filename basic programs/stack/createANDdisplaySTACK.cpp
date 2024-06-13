//the implementation of stack using array//
//write a program to create and display stack//

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

int main()
{
    struct stack st;
    create(&st);
    display(st);
    
    return 0;
}
