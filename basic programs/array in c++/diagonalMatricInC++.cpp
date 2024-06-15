//write a program to print a diagonal matrix in c++//

#include<iostream>
using namespace std;
//to create a matrix 1st create a structure//
class diagonalmatrix
{
    //for implementing a matrix, we need a 'array pointer' for storing non-zero elements and for storing its dimenion that is  'n', as we need two different type of variables thats why we are using class//
private:
      int *a;
    int n;
public:
    diagonalmatrix()
    {
        n=2;
        a=new int[2];
    }
    diagonalmatrix(int n)
    {
        this->n=n;
        a=new int[n];
    }
    ~diagonalmatrix()
    {
        delete []a;
    }
    void set( int i,int j, int x);
    int get( int i, int j );
    void display();
};
//to set the values//
void diagonalmatrix::set( int i,int j, int x)
{
    if(i==j)
        a[i-1]=x;
    
}

int diagonalmatrix::get( int i, int j )
{
    if(i==j)
        return a[i-1];
    else
        return 0;
}
// to display the matrix//
void diagonalmatrix::display()
{
    int i , j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                cout<<a[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    class diagonalmatrix m(4);
    
    m.set(1,1,5);
    m.set(2,2,8);
    m.set(3,3,9);
    m.set(4,4,12);
    
    m.display();
    return 0;
}
