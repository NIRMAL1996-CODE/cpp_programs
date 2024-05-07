//write a program to create a template class to add and subtract integers
#include<iostream>
using namespace std;
template<class T>
class arithmetic
{
private:
    T a;
    T b;
public:
    arithmetic(T a,T b);
    int add();
    int sub();
};
template<class T>
arithmetic<T>::arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
template<class T>
T arithmetic<T> :: add()
{
    T c;
    c= a+b;
    return c;
}
template<class T>
T arithmetic<T> :: sub()
{
    T c;
    c= a-b;
    return c;
}

int main()
{
    arithmetic<int> A(20,8);
    
    cout<<"Add= "<<A.add()<<endl;
    cout<<"sub= "<<A.sub()<<endl;
    return 0;
    
}
