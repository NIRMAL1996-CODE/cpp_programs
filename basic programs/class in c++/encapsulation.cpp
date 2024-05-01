//encapsulation in class using private access specifier//
#include<iostream>
using namespace std;

class employee
{
private:
    int salary;
public:
    void setsalary(int s)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
    employee obj;
    obj.setsalary(60000);
    cout<<obj.getsalary()<<endl;
    return 0;
}