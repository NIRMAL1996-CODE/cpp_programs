//write a program to add two complex numbers//
//complex numbers are numbers that include a real part and an imaginary part expressed as a sum of a real number and a multiple of the imaginary unit(i).//
#include<iostream>
using namespace std;
 class complex
{
private:
    int a,b;
public:
    void setData(int x, int y)//to assign value//
    {
        a=x; b=y;
    }
    void showData()// to display result//
    {
        cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    }
    
    complex add(complex c)//to add two complex numbers//
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3= c1.add(c2);
    c3.showData();
    return 0;
}
