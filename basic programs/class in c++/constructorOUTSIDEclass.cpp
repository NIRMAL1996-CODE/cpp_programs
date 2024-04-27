//create constructor outside the class with its parameters//
#include<iostream>
using namespace std;
class car
{
public:
    int num;
    string name;
    string model;
    car(int a,string b, string c);
};

 car::car(int a,string b, string c)
{
    num=a;
    name=b;
    model=c;
}

int main()
{
    car obj1(10,"BMW","XX");
    car obj2(20,"FORD","ZZ");
    
    cout<<obj1.num<<" "<<obj1.name<<" "<<obj1.model<<endl;
    cout<<obj2.num<<" "<<obj2.name<<" "<<obj2.model<<endl;
    return 0;
}
