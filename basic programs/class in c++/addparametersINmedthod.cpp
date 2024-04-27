//create a class method(function) outside the class using scope resolution operator with objects and also add parameters to method//
#include<iostream>
using namespace std;
class mycls
{
public:
    int speed(int maxspeed);
};

 int mycls::speed(int maxspeed)
{
     return maxspeed;
}

int main()
{
    mycls obj;
    cout<<obj.speed(200)<<endl;
    return 0;
}