// write a menu driver program for array //
#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d  \n",arr.A[i]);
}

void Append(struct array *arr, int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}
void insert(struct array *arr, int index, int x )
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    
    }
}
int Delete(struct array *arr, int index)
{
    int x=0;
    int i;
    if(index>=0 && index<=arr->length)
    {
        x= arr->A[index];
        for(i=index;i>arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
     
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *y, int *z)
{
    int temp;
    temp = *y;
    *y = *z;
    *z = temp;
}

int linearSearch(struct array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
            return i;
    }
    return -1;
}

int binarySearch(struct array arr, int key)//way to search a key element from a sorted array//
{
    int l,mid,h; //need three variables l=low=0thINDEX, h=high=lastINDEX, mid.
    l=0;
    h= arr.length-1; //to know the lastindex//
    while(l<=h)//check low is not more than high//
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])// check mid is key?//
        {
            return mid;
        }
        else if(key<arr.A[mid])//when key is at left side of mid//
        {
            h= mid-1;
        }
        else //when key is at right side of mid//
        {
            l=mid+1;
        }
    }
    return -1;
}

int get(struct array arr, int index)//if want to know element on  particular index//
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
void set(struct array *arr, int index,int x)//to replace element at particular index(call by address i.e. pointers//
{
    if(index>=0 && index<arr->length)
        arr->A[index]=x;
}

int max(struct array arr)//to find the maximum element in an array//
{
    int max= arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    
        if(arr.A[i]>max)
        {
            max=arr.A[i];
        }
        return max;
}

int min(struct array arr)//to find the minimum element in an array//
{
    int min= arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    
        if(arr.A[i]<min)
        {
            min=arr.A[i];
        }
        return min;
}

int sum(struct array arr)//to find the sum of all elements

{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}

float AVG(struct array arr)//to find the average//
{
    return (float)sum(arr)/arr.length;
}
void reverse(struct array *arr)
{
     int *b; //declared oscillatory array take a pointer b //
     int i,j;
     b=(int *)malloc(arr->length*sizeof(int));//need array b size = to array A,so take size of array A and create array b from heap//
     
     for(i=arr->length-1,j=0;i>=0;i--,j++)//reverse
        
               b[j]=arr->A[i];
         
     for(i=0;i<arr->length;i++)//cpoy reverse elements
     {
         arr->A[i]=b[i];
     }
 }
void reArrange(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    
    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[j]>=0)j--;
        if(i<j)swap(&arr->A[i],&arr->A[j]);
    }
}
void insertsorted(struct array *arr, int x)
{
    int i= arr->length-1;
    if(arr->length==arr->size)
        return ;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]= x;
    arr->length++;
}

int isSorted(struct array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])//check on sorted or not//
            return 0;//that is false//
    }
    return 1; //that is true//
}

struct array* merge(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])
             arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+ arr2->length;
    arr3->size=10;
    return arr3;
}

struct array* Union(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])
             arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr3->A[k++]=arr2->A[j++];
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct array* intersection(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])//if 1st set element is smaller just do increment//
             i++;
        else if(arr2->A[j]<arr1->A[i])//if 2nd set element is smaller just do increment//
            j++;
        else if(arr1->A[i]==arr2->A[j])//but if you find common print //
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
   
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

struct array* difference(struct array *arr1, struct array *arr2)
{
    int i, j , k;
    i=j=k=0;
    struct array*arr3=(struct array*)malloc(sizeof(struct array));
    
    while(i<arr1->length && j<arr2->length)
    {
         if(arr1->A[i]<arr2->A[j])//here only array 1 set elements are copy//
             arr3->A[k++]=arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else
        {
            i++;//if both having common skip both n just do increment in both//
            j++;
        }
    }
    for(;i<arr1->length;i++)//only copy element from array 1 not from array 2//
        arr3->A[k++]=arr1->A[i];
    
    arr3->length=k;
    arr3->size=10;
    return arr3;
}

int main()
{
    struct array arr1;
    int ch;
    int x, index;
    printf("enter size of array");
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size*sizeof(int));
    do 
    {
        printf("Menu\n");
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.search\n");
        printf("4.sum\n");
        printf("5.display\n");
        printf("6.exit\n");
        
        printf("enter ypur choice");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: printf("enter an element and index");
                scanf("%d%d",&x, &index);
                insert(&arr1,index, x);
                break;
            case 2: printf("enter index ");
                scanf("%d",&index);
                x= Delete(&arr1, index);
                printf("Delete element is %d\n", x);
                break;
            case 3: printf("enter element to search ");
                scanf("%d", &x);
                index= linearSearch(&arr1,x);
                printf("element index %d", index);
                break;
            case 4: printf("sum is %d\n", sum(arr1));
                break;
            case 5: display(arr1);
        }
    }while(ch<6);
    return 0;
}

