//create a class with multiple objects//
#include<iostream>
using namespace std;
 
class myclass
{
public:
    int num;
    string name;
    string location;
};

int main()
{
    myclass obj1;
    obj1.num= 10;
    obj1.name= "JOHN";
    obj1.location= "America";
    
    myclass obj2;
    obj2.num= 20;
    obj2.name= "MARK";
    obj2.location= "Canada";
    
    cout<<obj1.num<<" "<<obj1.name<<" "<<obj1.location<<endl;
    cout<<obj2.num<<" "<<obj2.name<<" "<<obj2.location<<endl;
    return 0;
}
