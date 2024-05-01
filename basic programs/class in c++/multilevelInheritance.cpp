//write a program for multilevel inheritance of class//
#include<iostream>
using namespace std;
class myclass
{
public:
    void myFunction() 
    {
     cout << "Some content in parent class.\n" ;
    }
};

//derived class

class mychild: public myclass{
};

class mygrandchild : public mychild{
};

int main()
{
    mygrandchild obj;
    obj.myFunction();
    return 0;
}


