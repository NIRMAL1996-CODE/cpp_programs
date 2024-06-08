//create a calculator//
#include<stdio.h>
int main()
{
    int n;
    printf("MENU\n");
    printf("1.adition\n2.substraction\n3.multiplycation\n4.division\n");
    printf("selection option= \n");
    scanf("%d",&n);
    
    int a ,b;
    printf("enter first number= \n");
    scanf("%d",&a);
    printf("enter second number= \n");
    scanf("%d",&b);
    int result =0;
    if(n==1)
    {
         result =a+b;
        printf("total= %d\n",result);
    }
    else if(n==2)
    {
         result= a-b;
        printf("total= %d\n",result);
    }
    else if(n==3)
    {
        result= a*b;
        printf("total= %d\n",result);
    }
    else if(n==4 && a!=0)
    {
        result= a/b;
        printf("total= %d\n",result);
    }
    else
    {
        printf("invalid input");
    }
    
    return 0;
}


