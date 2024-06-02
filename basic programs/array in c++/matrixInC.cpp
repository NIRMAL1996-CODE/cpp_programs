//write a program to print a diagonal matrix//

#include<stdio.h>
//to create a matrix 1st create a structure//
struct matrix
{
    //for implementing a matrix, we need a '1D array' for storing non-zero elements and for storing its dimenion that is  'n', as we need two different type of variables thats why we are using structure//
    int a[10];
    int n;
};
//to set the values//
void set(struct matrix *m, int i,int j, int x)
{
    if(i==j)
        m->a[i-1]=x;
    
}

int get(struct matrix m, int i, int j )
{
    if(i==j)
        return m.a[i-1];
    else
        return 0;
}
// to display the matrix//
void display(struct matrix m)
{
    int i , j;
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d ",m.a[i-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct matrix m;
    m.n=4;// dimension of matrix//
    set(&m,1,1,5);
    set(&m,2,2,8);
    set(&m,3,3,9);
    set(&m,4,4,12);
    
    display(m);
    
    
    
}
