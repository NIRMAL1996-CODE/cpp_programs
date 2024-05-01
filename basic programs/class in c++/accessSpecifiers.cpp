//write a program on access specifiers working//
#include<iostream>
using namespace std;
//base class
class employee
{
protected:
    int salary;
};

//derived class
class programmer : public employee
{
public:
    int bonus;
    void setsalary(int s)
    {
        salary= s;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    programmer obj;
    obj.bonus= 15000;
    obj.setsalary(50000);
    cout<<"SALARY = "<<obj.getsalary()<<endl;
    cout<<"BONUS = "<<obj.bonus<<endl;
    return 0;
}

